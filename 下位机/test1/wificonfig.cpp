#include "wificonfig.h"
#define Max_Clients  4
WiFiServer server(8266);
WiFiClient clients[Max_Clients];
const char * ssid = "pig";
const char *passwd = "123456789";
int i,j;
float temp,humi;
float Analog_voltage,Digital_voltage;
char data[100];
char mode = 1;
int count;
int ledPin = 16;
unsigned int x_dat = 500;
int x1,x2;
char All_DataBuffer[1024];
DHT DhtSensor(D1,DHT11);
U8G2_SSD1306_128X64_NONAME_F_SW_I2C  u8g2(U8G2_R0,D5,D6);
int speakerPin = D0;
char note1[] = "ddddffffeeeeAAAABBBBBBBB edcab bfedc cce dcb #";
unsigned long beats[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
int length = sizeof(note1);  
int tempo = 200;
void initial_api()
{
   server.begin(); 
   Serial.begin(74880);
   pinMode(ledPin,OUTPUT);
   digitalWrite(ledPin,HIGH);
   pinMode(A0,INPUT);
   pinMode(speakerPin, OUTPUT);
   WiFi.begin(ssid,passwd);
   DhtSensor.begin();
   u8g2.begin();
   u8g2.setFont(u8g2_font_wqy16_t_gb2312); 
   digitalWrite(ledPin,HIGH); 
}
void detect_hasClient()
{
  if(mode == 1)
  {
    //判断是否存在可用的客户端
    if(server.hasClient())
    {
      //便利存放客户端的数组，看是否有空位可以加入
      for(i=0;i<Max_Clients;i++)
      {
        if( !(clients[i]) || !(clients[i].connected()))
        {
          if(clients[i])
          {
             //停止掉
             clients[i].stop(); 
          }  
          else
          {
            //设置为可用的状态
            clients[i] = server.available();  
          }
        }
      }  
    }
    delay(1000);  
  } 
}
void detect_hasData()
{
  if(mode == 1)
  {
    for(i=0;i<Max_Clients;i++)
    {
      if(clients[i] && clients[i].connected())
      {
         //判断是否存在可读的数据
         if(clients[i].available())
         {
            //清空数组内容
            memset(data,'\0',sizeof(data));
            count = 0;
            //定义一个循环，用来读取数据
            while(clients[i].available())
            {
              //读取数据
              data[count++] = clients[i].read();  
            } 
            //将读取到的数据显示在串口上
            for(j=0;j<count;j++)
            {
               Serial.print(data[j]);
            }
            //整体输出一个换行符
            Serial.println();
  
            //根据读取到的内容进行响应
            if(strcmp(data,"OpenLed") == 0)
            {
              //让灯发光
              digitalWrite(ledPin,LOW);  
            }
            else if(strcmp(data,"CloseLed") == 0)
            {
              //让灯灭掉
              digitalWrite(ledPin,HIGH);  
            }

            if(strcmp(data,"OpenBUZ") == 0)
            {
              //音频1
              mode = 0; 
            }
            else if(strcmp(data,"CloseBuz") == 0)
            {
              //音频2
              mode = 3;
 
            }
         }
      }  
    }
    delay(1000);  
  }
}
void send_DataToServer()
{
   char buf_1[100];
   if(mode == 1)
   {
     temp = DhtSensor.readTemperature();
     humi = DhtSensor.readHumidity();
     Analog_voltage = analogRead(A0);
     Digital_voltage = (Analog_voltage / 1023) * 3.3;
     String Temp = "温度: " + String(temp);
     String Humi = "湿度: " + String(humi);
     String dig = "烟雾: " + String(Digital_voltage);
     u8g2.clearBuffer();
     u8g2.drawUTF8(0,16,Temp.c_str());
     u8g2.drawUTF8(0,32,Humi.c_str());
     u8g2.drawUTF8(0,48,dig.c_str());
     u8g2.sendBuffer();
     memset(buf_1,'\0',sizeof(buf_1));
     sprintf(buf_1, "%s %.2f %s %.2f %s %.2f %s",  "#",temp,"℃#",humi,"%#",Digital_voltage,"V#");
     Serial.print(Digital_voltage);
     memset(All_DataBuffer,'\0',sizeof(All_DataBuffer));
     strcat(All_DataBuffer,buf_1);
     char buf_2[100];
     memset(buf_2,'\0',sizeof(buf_2));
     strcat(All_DataBuffer,buf_2);
     int len = strlen(All_DataBuffer);
     for(i=0;i<Max_Clients;i++)
     {
        if(clients[i] && clients[i].connected())
        {
          clients[i].write(All_DataBuffer,len);
        } 
     }
     delay(1000);
   }
}
void playNote(int OutputPin, char note, unsigned long duration) 
{
  char names[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'A' ,'B'};
  int tones[] = { 261, 294, 330, 349, 392, 440, 494, 523, 556};
  for (int i = 0; i < 9; i++) 
  {
    if (names[i] == note) 
    {
      tone(OutputPin,tones[i], duration);
      delay(duration);
      noTone(OutputPin);
    }
  }
}
void buzzer()
{
  if(mode == 0)
  {
     for (int i = 0; i < length; i++) 
     {
      if (note1[i] == ' ') {delay(beats[i] * tempo);} 
      if(note1[i] == '#')mode = 1;
      else{playNote(speakerPin,note1[i], beats[i] * tempo);} 
      delay(tempo/10); 
     }   
  } 
  if(mode == 2)
  {
     if(x1 == 0)
    {
      digitalWrite(speakerPin,LOW);
      x_dat = x_dat - 1;
      if(x_dat <= 300)x1 = 1;
      if(x_dat > 350)delayMicroseconds(400);
      if(x_dat < 350)delayMicroseconds(4000);
      digitalWrite(speakerPin,HIGH);
    }   
    if(x1 == 1)
    {
      digitalWrite(speakerPin,LOW); 
      x_dat = x_dat + 1;
      if(x_dat >= 800){x1 = 0;x2++;if(x2 >= 10){x2 = 0;mode = 1;}}
      delayMicroseconds(800);  
      digitalWrite(speakerPin,HIGH);
      
      
    } 
  }   
}

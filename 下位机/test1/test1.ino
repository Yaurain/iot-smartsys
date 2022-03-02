#include "wificonfig.h"
void setup() {
  // put your setup code here, to run once:
  initial_api();
  
}

void loop() {
//  put your main code here, to run repeatedly:
  detect_hasClient();
  detect_hasData();
  send_DataToServer();
  buzzer();
}

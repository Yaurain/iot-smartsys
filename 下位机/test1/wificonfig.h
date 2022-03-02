//条件编译的格式：目的是防止头文件被重复定义
#ifndef _WIFICONFIG_H_
#define _WIFICONFIG_H_
#include <DHT.h>
#include <U8g2lib.h>
//添加与WiFi通信相关的头文件
#include <ESP8266WiFi.h>

void detect_hasClient();

void initial_api();

void detect_hasData();

void send_DataToServer();

void playNote(int OutputPin, char note, unsigned long duration);
void buzzer();
#endif 

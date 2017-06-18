/*************************************************************************
* File Name          : TestRJ11Adapter.ino
* Author             : Steve
* Updated            : Ander
* Version            : V1.0.1
* Date               : 12/22/2013
* Description        : Test for Makeblock Electronic modules of Me - 
                       RJ11 Adapter. The module can ONLY be connected 
                       to the PORT_3, PORT_4, PORT_5, PORT_6, PORT_7, 
                       PORT_8 of Me - Base Shield. 
* License            : CC-BY-SA 3.0
* Copyright (C) 2013 Maker Works Technology Co., Ltd. All right reserved.
* http://www.makeblock.cc/
**************************************************************************/
#include <Makeblock.h>
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <Wire.h>

//commands

//MePort output(PORT_#)
//Aread1()
//Aread2()
//Dread1()
//Drea2()
//Dwrite1()
//Dwrite2()


MePort output(PORT_7);                            
void setup()
{
	Serial.begin(9600);
}
void loop()
{
	int x = output.Aread1();
	delay(50);
        int y = output.Aread2();
        delay(50);
        Serial.println("1:");
        Serial.println(x);
        Serial.println("2:");
        Serial.println(y);
}

#include "Lora.h"
 
void setup() {
  // put your setup code here, to run once:

  loraInit();
  delay(500);
  Serial.println("Hi, I'm going to send message");
  delay(500);
  setConf(11, 22, 1, 0);
  delay(500);
  //loraMode(2); //conf mode
  loraMode(0); // Normal Mode
 
}

void loop() {
  // put your main code here, to run repeatedly:
 
  int data = analogRead(A1);
  int data2 = analogRead(A2);


String stringOne ="    ---val : "  ;
stringOne+= String(data);
stringOne+= " val2 : "+String(data2);



    char Buf[50];
    stringOne.toCharArray(Buf, 50);




// char* data = "hello";
//  Serial.println(data);
  sendData(11, 22, 01,stringOne.c_str());
  Serial.println(data);
  delay(10);
  multiSerial();

}

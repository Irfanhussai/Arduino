
//Simple blinking code

// int led=A2;
// int s=10;
// void setup() {
  
//   pinMode(led,OUTPUT);
//       pinMode(s,INPUT);

// }
// void loop() {
// //   // put your main code here, to run repeatedly:
// int a=digitalRead(s);
// if(a==LOW){
// digitalWrite(led,LOW);
// }
// else{
// digitalWrite(led,HIGH);
// }
// }
// delay(1000);

// delay(1000);
// }

// SERIAL COMMUNICATION CODE

#include<SoftwareSerial.h>
int led=A2;
void setup(){
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop(){
 
    // String a=Serial.readString();
    char a=Serial.read();

    Serial.print(a);
    if(a=='1'){
      digitalWrite(led,HIGH);
    }
    else if(a=='0') {
      digitalWrite(led,LOW);
    }

  }
  // else{
  //   Serial.print("a");
  // }

// void setup() {
//   pinMode(A2,OUTPUT);
//   pinMode(2,INPUT);
// }
 

// void loop() {
//   // put your main code here, to run repeatedly:
//   int data=digitalRead(2);
//   if(data==1)
//   {
//   digitalWrite(6,LOW);

//   }
//   else
//   {
    
//     digitalWrite(6,HIGH);
    
//   }

// }

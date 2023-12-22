
#include<SoftwareSerial.h>
int led=A2;
int gas=A0;

void setup(){
pinMode(gas,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop(){
 int gaseflame=analogRead(gas);
 Serial.println(gaseflame);
 delay(15000);
}
// if(gaseflame<=200)
// {
// Serial.write('1');
// }
// else{
// Serial.write('0');
// }

// delay(1000);
// }
// if(gaseflame<=300){
// digitalWrite(led,HIGH);
// }
// else{
  
//   digitalWrite(led,LOW);
// }

    // String a=Serial.readString();
    // char a=Serial.read();

    // Serial.print(a);
    // if(a=='1'){
    //   digitalWrite(led,HIGH);
    // }
    // else if(a=='0') {
    //   digitalWrite(led,LOW);
    // }

  
  


  
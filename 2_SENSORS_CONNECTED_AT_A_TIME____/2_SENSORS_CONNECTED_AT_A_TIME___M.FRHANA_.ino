#define light 6
#define buzzer 8
#define ir 4
#define ldr 2

void setup() {
  pinMode(ir,INPUT);              
  pinMode(ldr,INPUT);
  pinMode(light,OUTPUT);
  pinMode(buzzer,OUTPUT);                  
}
 

void loop() {
  // put your main code here, to run repeatedly:
  int IrData=digitalRead(ir);
  int LdrData=digitalRead(ldr);
  if((LdrData==0)&&(IrData== 1))//day
  {
  digitalWrite(light,LOW);
  digitalWrite(buzzer,LOW);
 
  }
else if(LdrData == 1)// night
  {
    
    digitalWrite(light,HIGH);
    digitalWrite(buzzer,LOW);
   
  }
else if(IrData == 0)
{
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  delay(200);
  digitalWrite(light,HIGH);
}
}

 void setup() {
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  
 Serial.begin(9600);
  }

void loop()
{
if (digitalRead(3)==LOW)
{
  digitalWrite(13,HIGH);
  delay(100);
}
  else
  {
    digitalWrite(13,LOW);
    delay(100);
  }
 }
   



void setup()
{
Serial.begin(9600);
pinMode(2,OUTPUT);
}
void loop()
{
  if (Serial.available()>0)
  {
char data=Serial.read();
if(data=='a')


{
  digitalWrite (2,HIGH);
}
 if(data=='b')
{
digitalWrite (2,LOW);
}
}
}

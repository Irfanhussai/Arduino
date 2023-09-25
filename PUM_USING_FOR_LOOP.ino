void setup() {
 pinMode(9,OUTPUT);
 pinMode(A1,INPUT);
 
  // put your setup code here, to run once:

}

void loop() {
  {
 int data=analogRead(A1);
 }
  for (int i=0; i<=255;i++) 
{
  analogWrite(9,i);
  delay(10);
} 
for (int i=255; i>=0;i--) 
 { 
  analogWrite(9,i);
  delay(10);
} 
 
 
  // put your main code here, to run repeatedly:

}

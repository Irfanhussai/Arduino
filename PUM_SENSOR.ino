
void setup() {
 pinMode(9,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for (int i=0; i<=255;i++) 
  analogWrite(9,i);
  delay(1000);
  analogWrite(9,128);
  delay(1000);
  analogWrite(9,190);
  delay(1000);
  analogWrite(9,255);
  delay(1000);
  // put your main code here, to run repeatedly:

}

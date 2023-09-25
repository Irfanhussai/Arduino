void setup() {
  Serial.begin(4800);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int data=analogRead(A0);

  Serial.println(data);
  // put your main code here, to run repeatedly:



if (data<500)
{
  digitalWrite(2,LOW);
}
else
{
  digitalWrite(2,HIGH);
}
}

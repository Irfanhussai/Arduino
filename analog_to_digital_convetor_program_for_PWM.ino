void setup() {
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  {
    int data=analogRead(A0);
  }
  analogWrite(3,5);
  // put your main code here, to run repeatedly:

}

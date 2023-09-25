void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop()
{
  
  if(Serial.available()>0)
  {
    int data=Serial.read();
    analogWrite(13,data);
  }
  // put your main code here, to run repeatedly:

}

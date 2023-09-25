void setup() {
  Serial.begin(9600);

  pinMode(2,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available()>0)
  {
char data=Serial.read();
if(data=='a')


{
  digitalWrite (2,HIGH);
}
  }
}
  // put your main code here, to run repeatedly:

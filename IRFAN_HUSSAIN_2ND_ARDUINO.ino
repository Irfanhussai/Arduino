void setup() {
  pinMode(6,OUTPUT);
  pinMode(2,INPUT);
}
 

void loop() {
  // put your main code here, to run repeatedly:
  int data=digitalRead(2);
  if(data==1)
  {
  digitalWrite(6,LOW);

  }
  else
  {
    
    digitalWrite(6,HIGH);
    
  }

}














  
 

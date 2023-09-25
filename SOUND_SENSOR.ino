
            
            
            void setup() {
     
 Serial.begin(4800);
 pinMode(2,INPUT);
 pinMode(4,OUTPUT);
 
}

void loop() {
  int soundsense=digitalRead(2);
  Serial.println(soundsense); 
  if(soundsense<=300)
  {
    digitalWrite(4,HIGH);{

    }
  }
else
  digitalWrite(4,LOW);
}
  

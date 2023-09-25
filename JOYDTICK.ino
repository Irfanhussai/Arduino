void setup()
{
  Serial.begin(9600);
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(3,OUTPUT);
 pinMode(10,OUTPUT);
  // put your setup code here, to run once:

}

void loop()
{
  int xdata = analogRead(A0);
  int ydata = analogRead(A1);
  
   Serial.print("x value=");
  Serial.println(xdata);
  Serial.print("y value=");
  Serial.println(ydata);
  if((483<xdata<683)&&(471<ydata<671))
  {
    analogWrite(3,0);
  }
if(xdata>683)
{
xdata=map(xdata,683,1023,0,255);

  analogWrite(3,xdata);
}
  // put your main code here, to run repeatedly:
  if((0<xdata<100)&&(506<ydata<771))
  {
    analogWrite(10,0);
  }
if(xdata>683)
{
xdata=map(xdata,683,1023,0,255);

  analogWrite(10,xdata);
}
  // put your main code here, to run repeatedly:


}

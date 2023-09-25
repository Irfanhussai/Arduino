#include <Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x38,4,5,6,0,1,2,3,7,POSITIVE);
 
void setup() {
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("irfan hussain ");
  lcd.setCursor(0,1);
  lcd.print("the great one");
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

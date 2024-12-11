#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int  tipkalo1 = 11;
const int  tipkalo2 = 10;



void setup() {  
  lcd.init();
  // put your setup code here, to run once:
pinMode(tipkalo1, INPUT_PULLUP);
pinMode(tipkalo2, INPUT_PULLUP);
}


void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(tipkalo1) == LOW){
  lcd.backlight();
  }
else if (digitalRead(tipkalo2)==LOW){
lcd.noBacklight();
}


  while (digitalRead(tipkalo2)==LOW) {
    if (digitalRead(tipkalo1) == LOW){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("D");
  lcd.print("a");
  lcd.print("v");
  lcd.print("o");
  lcd.print("r");


  }
}
}



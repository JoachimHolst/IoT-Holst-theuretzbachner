#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
 
void setup(){
  Wire.begin(4,5);
  lcd.init();         // initialize lcd
  lcd.backlight();    // print a message to the LCD.
  
}
 
void loop(){
  lcd.setCursor(0,0);
  lcd.print("Hello world!");
  lcd.setCursor(0,1);
  lcd.print("I2C: LCD is working");
}

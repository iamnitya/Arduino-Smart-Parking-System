#include <LiquidCrystal T2C.h>

LiquidCrystal_T2C lcd(6x27,16,2.): //set the LCD address to @x3F for a 16 chars and 2 line display

void setup() {
  lcd. init();
  lcd.clear();
  lcd.backlight(); // Make sure backlight is on

  // Print a message on both lines of the LCD.
  lcd.setCursor(2,8);  //Set cursor to character 2 on line 6
  lcd. print ("SMART CAR");

  lcd.setCursor(2,1);  //Move cursor to character 2 on line 1
  lcd. print ("PARKING SYSTEM"):
}

void loop() {
}

// include the library code:
#include <LiquidCrystal.h>
const int buttonPin = 12;
// initialize the library with the numbers of the interface pins
const int rs = 19, en = 18, d4 = 17, d5 = 16, d6 = 15, d7 = 14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    pinMode(buttonPin, INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, Arshbir!");
}
int cnt=0;
void loop() {
  // read button click
  if ( digitalRead(buttonPin) == HIGH ) { 
      cnt = cnt + 1 ;
      while( digitalRead(buttonPin) == HIGH ) ; 
  } 
  lcd.setCursor(0, 0);
  lcd.print("Button clicked : ") ; 

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(cnt);
  lcd.print( "  times");
}

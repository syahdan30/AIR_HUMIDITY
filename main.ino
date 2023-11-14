#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//declare_IO
uint32_t dht;
float humidity;
float temp;


// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();                      // Initialize the LCD
  lcd.backlight();                 // Turn on the backlight
  lcd.setCursor(0, 0);              // Set the cursor to the first column and first row
  lcd.print("KELOMPOK_3");     // Print a message to the LCD
  
  lcd.setCursor(0, 0);       
  lcd.print("Temp:");//start_next_char_at_COLS_5
  lcd.setCursor(0, 1);
  lcd.print("HMDT:");//start_next_char_at_COLS_5
}

void loop() {

  //calculation
  
  

  //output
  lcd.setCursor(5, 0);
  lcd.print(temp);
  lcd.setCursor(5, 1);
  lcd.print(humidity);
  delay(1000);
}

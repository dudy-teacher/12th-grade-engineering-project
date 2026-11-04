//=================== Example ===================
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
#define i2c_Address 0x3c 
#define SCREEN_WIDTH 128 //OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1  // QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup()   {
 display.begin(i2c_Address, true); 
 display.clearDisplay();
 display.display();
 delay(1000);
 display.setTextColor(SH110X_WHITE, SH110X_BLACK);//(1,0)
 display.setTextSize(2);
 display.setCursor(20, 10);
 display.print("Counter");
 //display.drawCircle(20,50,15,1);
 //display.drawTriangle(25,20,25,70,50,35,1);
 display.display();
 }
void loop() {
  callfunc();
  // for(byte i=0; i<=255;i++){
  //   display.setCursor(45, 35);
  //   display.print(String(i)+ "  ");
  //   display.display(); 
  //   delay(500);
  //     }
}
//==================================================

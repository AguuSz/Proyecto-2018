#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);

int s = 1;
int m = 0;
int h = 0;


void setup()
{
    Serial.begin(9600);
    display.begin();
    display.setContrast(100);
    display.display();
    delay(2000);
    display.clearDisplay();
    display.setCursor(0,0);
    display.setTextColor(BLACK);
    display.setTextSize(1);
    display.println("Hola xd");
    display.setCursor(0,10);
    display.println("Tu mama");
    delay(3000);
    display.clearDisplay();
    
}


void loop()
{


}

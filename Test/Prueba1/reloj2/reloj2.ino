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

}


void loop()
{

    for(s; s < 10; s++)
    {
        display.print(s);
        display.display();
        delay(1000);
        display.setCursor(0,0);
        display.setTextColor(BLACK);
        display.print(" ");
        display.setTextColor(BLACK);
        //borrar(0,0);
        //display.setCursor(0,0);
        //display.clearDisplay();
    }
    if(s == 10)
    {
        m = m + 1;
        s = 0;
        display.setCursor(0, 0);
    }
    if(m == 60)
    {
        h = h + 1;
        m = 0;
        display.println("Horas: " + h);
        display.display();
    }
    if(h == 24)
    {
        h = 0;
        m = 0;
        s = 1;
    }

}

void borrar(int posx, int posy)
{
    display.setCursor(posx, posy);
    display.setTextColor(0);
    display.print(" ");
    display.display();
    display.setTextColor(1);
    display.setCursor(posx, posy);
}

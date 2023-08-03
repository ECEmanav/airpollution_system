#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int gasSensorPin = A0;
void setup ()
{
lcd.begin (16, 2);
lcd.print("Air Quality:");
lcd. setCursor (0, 1); 
lcd.print("Checking...");

Serial.begin (9600);
}

void loop ()
{
int sensorValue = analogRead(gasSensorPin);

float ppm = map(sensorValue, 0, 1023, 0, 5000);
lcd.clear();
lcd.print("Air Quality:");
Icd. setCursor(0, 1);
Icd.print (ppm, 0);
Serial.print("Air Quality: ");
Serial.print (ppm, 0);
Serial.printIn(" ppm");

delay (1000);
}

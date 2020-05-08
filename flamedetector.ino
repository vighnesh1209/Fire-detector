#include<liquidCrystal.h>
int sensorpin = A0;
int snesorvalue = 0;
LiquidCrystal lcd(12,11,5,4,3,2);
int buzzer = 7;
void setup()
{
pinMode(buzzer,OUTPUT);
serial.begin(9600);
}

void loop
{
lcd.begin(16,2);
sensorvalue = analogRead(sensorpin);
if(sensorvalue<= 100);
{
lcd.println("Fire Detected);
digitalWrite(buzzer,HIGH);
delay(1000);
}
digitWrite(buzzer,LOW);
delay(1000);
}

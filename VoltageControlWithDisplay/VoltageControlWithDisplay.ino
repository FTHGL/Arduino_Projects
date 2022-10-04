#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

float value;
int voltagePin = A0;

byte volt[8]{
  B01110,
  B01010,
  B01110,
  B00000,
  B00000,B00000,B00000
};

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  lcd.begin(16,2);
  analogReference(INTERNAL);
  lcd.createChar(0,volt);
}

void loop() {
  // put your main code here, to run repeatedly:


  value = analogRead(voltagePin);
  Serial.print("Analog deger : ");
  Serial.print(value);
  Serial.print("---->");
  float gerilim = value*(5.0/1023.0);

  lcd.home();
  lcd.print("Voltage : ");
  lcd.print(gerilim);
  lcd.print("");

  
  Serial.print("gerilim ");
  Serial.print(gerilim);
  Serial.print("V");
  Serial.print("\n");
  delay(200);
  
}

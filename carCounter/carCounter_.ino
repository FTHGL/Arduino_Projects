#include <LiquidCrystal.h>

#include "NewPing.h"

#define TRIGGER_PIN 9
#define ECHO_PIN 8
#define buzzer 11

int cikis= 0;
int giris= 0;
int COUNT =0;

#define MAX_DISTANCE 300


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
float duration, distance;



void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("");
}

void loop() {

  distance = sonar.ping_cm();
  int dis = map(distance,0,distance,0,180);
  
  // Send results to Serial Monitor
  Serial.print("Mesafe = ");

  if (distance >= 400 || distance <= 2) 
  {
    Serial.println("Out of range");
    /*X*/
    
    
    
   
  }
  else 
  {
    Serial.print(distance);
    Serial.println(" cm");
    
     if(distance<40&& distance>=3){
      /*num7*/
      
      giris++;
      }

   
    else if(distance<70&& distance>=40){
      /*num4*/
     
      cikis++;
      }
    COUNT= giris-cikis;
    
  }
  delay(500);
  Serial.println(giris);
  Serial.println(cikis);
  
  Serial.println(COUNT);
  
  lcd.print(COUNT);
  
  
  delay(100);
  lcd.clear();

  

}

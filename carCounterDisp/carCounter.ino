
#include <LCD_I2C.h>

/*hc-sr04*/
#define echoPin 9
#define trigPin 10
/*7 segment display*/
#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8

/*LCD display*/
LCD_I2C lcd(0x3f, 16, 2);

int i=3;
int input=0;
int output=0;
int situation;



// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement


void distanceMeasurement(){
   // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
 
  return distance;

}

void segmentDisp(int a){
  switch (a){

    case 0:
      digitalWrite(segA, 0);    
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 0);
      digitalWrite(segF, 0);
      digitalWrite(segG, 1);
      break;
    case 1:
      digitalWrite(segA, 1);    
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 1);
      digitalWrite(segE, 1);
      digitalWrite(segF, 1);
      digitalWrite(segG, 1);
      break;
    case 2:
      digitalWrite(segA, 0);  
      digitalWrite(segB, 0);
      digitalWrite(segC, 1);
      digitalWrite(segD, 0);
      digitalWrite(segE, 0);
      digitalWrite(segF, 1);
      digitalWrite(segG, 0);
      break;
    case 3:
      digitalWrite(segA, 0);     
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 1);
      digitalWrite(segF, 1);
      digitalWrite(segG, 0);
      break;
    case 4:
      digitalWrite(segA, 1);  
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 1);
      digitalWrite(segE, 1);
      digitalWrite(segF, 0);
      digitalWrite(segG, 0);
      break;
    case 5:
      digitalWrite(segA, 0);
      digitalWrite(segB, 1);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 1);
      digitalWrite(segF, 0);
      digitalWrite(segG, 0);
      break;
    case 6:
      digitalWrite(segA, 0); 
      digitalWrite(segB, 1);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 0);
      digitalWrite(segF, 0);
      digitalWrite(segG, 0);
      break;
    case 7:
      digitalWrite(segA, 0);
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 1);
      digitalWrite(segE, 1);
      digitalWrite(segF, 1);
      digitalWrite(segG, 1);
      break;
    case 8:
      digitalWrite(segA, 0); 
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 0);
      digitalWrite(segF, 0);
      digitalWrite(segG, 0);
      break;
    case 9:
      digitalWrite(segA, 0);
      digitalWrite(segB, 0);
      digitalWrite(segC, 0);
      digitalWrite(segD, 0);
      digitalWrite(segE, 1);
      digitalWrite(segF, 0);
      digitalWrite(segG, 0);
      break;
    break;
    }
  }

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  for (int j=2;j<9;j++){

       pinMode(j, OUTPUT);// taking all pins from 2-8 as output

       }
  Serial.begin(9600);
  /*lcd*/
  lcd.begin();
  lcd.backlight();
  inServo.attach(11);
  inServo.write(90);
  outServo.attach(12);
  outServo.write(90);
  
  

}

void loop() {
  distanceMeasurement();
  
  /*Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");*/
  if(distance>200){
    Serial.println("in range");
    
    }
  else if(distance<150&&distance>=35){
    if(i==1){
      input++;
      
      
      }
    else if(i==0){
      output++;
      
      }
    else{
      }
    i=2;
    
    }
  else{
    if (distance<35&&distance>=17){
        Serial.println("input");
        i=1;

      }
    else if(distance<17&&distance>=0){
        Serial.println("output");
        i=0;
      }
    }
  /*Serial.print("input:");
  Serial.println(input);
  Serial.print("output");
  Serial.println(output);*/

  situation = input-output;
  if(situation<0){

    situation=0;
    Serial.println(situation);
    segmentDisp(situation);
    lcd.home();
    lcd.print("number of vehicle : ");
    lcd.print(situation);
    delay(150);
    
    }
  else{
    Serial.println(distance);
    Serial.println(situation);
    segmentDisp(situation);
    lcd.home();
    lcd.print("number of vehicle : ");
    lcd.print(situation);
    delay(150);
    
    }
  
  

}

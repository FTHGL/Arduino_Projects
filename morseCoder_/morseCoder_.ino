int buzzer = 8;
int led = 13;

char ch;
int a_delay = 200; 

void dot(){
  Serial.println(".");
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(a_delay);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(a_delay);
  
}

void dash(){
  Serial.println("-");
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(a_delay*3);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(a_delay);
  
}

void letterPause(){
  delay(300);
  }
void wordPause(){
  delay(a_delay*7);
  }




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.println("enter the message .");
  Serial.println(ch);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()){
    ch = Serial.read();
    if(ch == 'a' || ch == 'A'){FunA();Serial.print("");}
  else if(ch == 'b' || ch == 'B'){FunB();Serial.print(" ");}
  else if(ch == 'c' || ch == 'C'){FunC();Serial.print(" ");}
  else if(ch == 'd' || ch == 'D'){FunD();Serial.print(" ");}
  else if(ch == 'e' || ch == 'E'){FunE();Serial.print(" ");}
  else if(ch == 'f' || ch == 'F'){FunF();Serial.print(" ");}
  else if(ch == 'g' || ch == 'G'){FunG();Serial.print(" ");}
  else if(ch == 'h' || ch == 'H'){FunH();Serial.print(" ");}
  else if(ch == 'i' || ch == 'I'){FunI();Serial.print(" ");}
  else if(ch == 'j' || ch == 'J'){FunJ();Serial.print(" ");}
  else if(ch == 'k' || ch == 'K'){FunK();Serial.print(" ");}
  else if(ch == 'l' || ch == 'L'){FunL();Serial.print(" ");}
  else if(ch == 'm' || ch == 'M'){FunM();Serial.print(" ");}
  else if(ch == 'n' || ch == 'N'){FunN();Serial.print(" ");}
  else if(ch == 'o' || ch == 'O'){FunO();Serial.print(" ");}
  else if(ch == 'p' || ch == 'P'){FunP();Serial.print(" ");}
  else if(ch == 'q' || ch == 'Q'){FunQ();Serial.print(" ");}
  else if(ch == 'r' || ch == 'R'){FunR();Serial.print(" ");}
  else if(ch == 's' || ch == 'S'){FunS();Serial.print(" ");}
  else if(ch == 't' || ch == 'T'){FunT();Serial.print(" ");}
  else if(ch == 'u' || ch == 'U'){FunU();Serial.print(" ");}
  else if(ch == 'v' || ch == 'V'){FunV();Serial.print(" ");}
  else if(ch == 'w' || ch == 'W'){FunW();Serial.print(" ");}
  else if(ch == 'x' || ch == 'X'){FunX();Serial.print(" ");}
  else if(ch == 'y' || ch == 'Y'){FunY();Serial.print(" ");}
  else if(ch == 'z' || ch == 'Z'){FunZ();Serial.print(" ");}
  else if(ch == '1'){one();Serial.print(" ");}
  else if(ch == '2'){two();Serial.print(" ");}
  else if(ch == '3'){three();Serial.print(" ");}
  else if(ch == '4'){four();Serial.print(" ");}
  else if(ch == '5'){five();Serial.print(" ");}
  else if(ch == '6'){six();Serial.print(" ");}
  else if(ch == '7'){seven();Serial.print(" ");}
  else if(ch == '8'){eight();Serial.print(" ");}
  else if(ch == '9'){nine();Serial.print(" ");}
  else if(ch == '0'){zero();Serial.print(" ");}
  else if(ch == ' '){
  wordPause();
  Serial.print(ch);
 
  }
  

    
    }

}

void FunA(){Serial.println("A");dot();delay(a_delay);dash();delay(a_delay);letterPause();}/*Function A */
void FunB(){Serial.println("B");dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunC(){Serial.println("C");dash();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunD(){Serial.println("D");dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunE(){Serial.println("E");dot();delay(a_delay);letterPause();}
void FunF(){Serial.println("F");dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunG(){Serial.println("G");dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunH(){Serial.println("H");dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunI(){Serial.println("I");dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunJ(){Serial.println("J");dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunK(){Serial.println("K");dash();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunL(){Serial.println("L");dot();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunM(){Serial.println("M");dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunN(){Serial.println("N");dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunO(){Serial.println("O");dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunP(){Serial.println("P");dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunQ(){Serial.println("Q");dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunR(){Serial.println("R");dot();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunS(){Serial.println("S");dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void FunT(){Serial.println("T");dash();delay(a_delay);letterPause();}
void FunU(){Serial.println("U");dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunV(){Serial.println("V");dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunW(){Serial.println("W");dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunX(){Serial.println("Y");dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunY(){Serial.println("Y");dash();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void FunZ(){Serial.println("Z");dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}

void one(){dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void two(){dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void three(){dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}
void four(){dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dash();delay(a_delay);letterPause();}
void five(){dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void six(){dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void seven(){dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void eight(){dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);dot();delay(a_delay);letterPause();}
void nine(){dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dot();delay(a_delay);letterPause();}
void zero(){dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);dash();delay(a_delay);letterPause();}

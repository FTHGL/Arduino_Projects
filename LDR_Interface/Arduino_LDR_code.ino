void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}


void loop() 
{
  if(Serial.available())
  {
    char c = Serial.read();
    if(c == '1')
    {
    digitalWrite(8,HIGH);
    Serial.println("Led Yandı");
    }
    else if(c == '0')
    {
    digitalWrite(8,LOW);
    Serial.println("Led Söndü");
    }
  }
}

int ledA = 2;
int ledB = 4;
int ledC = 7;

void setup() {
 pinMode(ledA,OUTPUT);
 pinMode(ledB,OUTPUT);
 pinMode(ledC,OUTPUT);

}

void loop() {
  digitalWrite(ledA,HIGH);
  delay(500);
  digitalWrite(ledB,HIGH);
   delay(500);
  digitalWrite(ledC,HIGH);
   delay(500);
  digitalWrite(ledB,LOW);
   delay(500);
  digitalWrite(ledC,LOW);
   delay(500);
digitalWrite(ledA,LOW);
delay(500);
digitalWrite(ledA,HIGH);
 digitalWrite(ledB,HIGH);
  digitalWrite(ledC,HIGH);
  delay(500);
  digitalWrite(ledA,LOW);
 digitalWrite(ledB,LOW);
  digitalWrite(ledC,LOW);
   delay(500);
}

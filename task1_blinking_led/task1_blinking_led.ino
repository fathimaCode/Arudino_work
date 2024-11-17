int ledPin = 2;
int blinkDelay = 1500;
void setup() {
pinMode(ledPin,OUTPUT);
Serial.begin(9600);

}

void loop() {
 digitalWrite(ledPin,HIGH);
 delay(blinkDelay);
 Serial.println("LED is on");
digitalWrite(ledPin,LOW);
delay(blinkDelay);
Serial.println("LED is off");
}

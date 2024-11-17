const int led = 2;
const int button_pin =7;
bool buttonState;
void setup() {
  Serial.begin(9600);
  pinMode(button_pin,INPUT_PULLUP);
  pinMode(led,OUTPUT);

}

void loop() {
  int pushed = digitalRead(button_pin);
  if(pushed == LOW){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

}

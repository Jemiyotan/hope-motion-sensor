int pirPin = 10;
int relayPin = 11;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);

}

void loop() {
  if(digitalRead(pirPin) == HIGH){
    digitalWrite(relayPin, HIGH);
    delay(10000);
    digitalWrite(relayPin, LOW);
  }
}

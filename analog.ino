int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  if ( sensorValue == 0 || sensorValue > 1000){
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  Serial.println(sensorValue);
  delay(100);
}

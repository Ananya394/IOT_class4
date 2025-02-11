#define sensorPin A0  

void setup() {
  Serial.begin(9600);  
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  float voltage = sensorValue * (5.0 / 1023.0);
  float distanceCm = (voltage * 1000) / 0.385;

  delay(100);  
}

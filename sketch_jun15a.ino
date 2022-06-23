void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //hello how are you doing

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
}

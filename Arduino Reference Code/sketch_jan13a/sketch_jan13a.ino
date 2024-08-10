/*
//int LED_BUILTIN = 2;
void setup() {
pinMode (LED_BUILTIN, OUTPUT);
}
void loop() {
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
}*/

void setup() {
  Serial.begin(115200);
}
 
void loop() {
  Serial.println("Hello from DFRobot ESP-WROOM-32");
  delay(1000);
}

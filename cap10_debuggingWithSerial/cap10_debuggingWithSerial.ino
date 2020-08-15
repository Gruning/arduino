//debugging with serial 

void setup() {
  Serial.begin(9600);
  Serial.println("starting");
}

void loop() {
  //Serial.println("hello from arduino");
  Serial.print("A ");
  delay(1000);
  Serial.print("B ");
  delay(1000);
}

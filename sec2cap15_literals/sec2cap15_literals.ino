int a = 42;
char b ='G';
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(a);
  Serial.println(b);
  delay(1000);
}

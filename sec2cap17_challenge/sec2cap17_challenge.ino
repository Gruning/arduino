int num = 0 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println(num);
  delay(1000);
  num ++;
}

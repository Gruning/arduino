int a = 42;
char b ='G';
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  
  Serial.print(a);
  Serial.println(b);
  delay(1000);

  digitalWrite(13,LOW);
  delay(1000);
}

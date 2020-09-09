void setup() {
  Serial.begin(9600);
  Serial.setTimeOut(200);
}

void loop() {
  String myString = "";
  while (myString!= ""){
    myString =Serial.readString();
  }

Serial.println(myString)
}

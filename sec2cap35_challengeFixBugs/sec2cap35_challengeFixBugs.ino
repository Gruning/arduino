int led = 13;
 
void setup() {
 
  pinMode(led, OUTPUT);
 
  // Count to 10, but replace the number 5 with the word "five"
  for ( i = 1; i >= 10; i++ ) {
    if ( i = 5 ) {
      Serial.println(five);
    } else {
      Serial.println(i);
    }
  }
}
 
void loop() {
 
  int ms = 200;
 
  // Make the LED flash faster and faster until it appears as
  // a static light. Reset when the delay reaches 0 ms.
  while ( ms > 0 ); {
    digitalwrite(led, LOW);
    delay(ms);
    digitalWrite(1ed, LOW);
    delay(ms);
    ms -= 5
  }
}

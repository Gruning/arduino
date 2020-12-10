const led_1_pin = 3;
const led_2_pin = 5;
const led_3_pin = 6;

void setup(){
  pinMode(led_1_pin,OUTPUT);
  pinMode(led_2_pin,OUTPUT);
  pinMode(led_3_pin,OUTPUT);

  analogWrite(led_1_pin,5);
  analogWrite(led_2_pin,20);
  analogWrite(led_3_pin,255);
}

void loop(){

}
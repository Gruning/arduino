const int led_1_pin = 2;
const int led_2_pin = 3;
const int led_3_pin = 4;

void setup(){
    pinMode(led_1_pin, OUTPUT);
    pinMode(led_2_pin, OUTPUT);
    pinMode(led_3_pin, OUTPUT);
}

void void loop()
{
    //make led1 blink once
    digitalWrite(led_1_pin, HIGH);
    delay(500);
    digitalWrite(led_1_pin, LOW);
    delay(500);

    //make led2 blink twice
    digitalWrite(led_2_pin, HIGH);
    delay(500);
    digitalWrite(led_2_pin, LOW);
    delay(500);
    digitalWrite(led_2_pin, HIGH);
    delay(500);
    digitalWrite(led_2_pin, LOW);
    delay(500);
    
    //make led3 blink three times
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(led_3_pin, HIGH);
        delay(500);
        digitalWrite(led_3_pin, LOW);
        delay(500);
    }
    
}
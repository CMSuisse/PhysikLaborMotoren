const uint8_t PWM_PIN = 3;

void setup() {
  pinMode(PWM_PIN, OUTPUT);

}

void loop() {
  int brightness = 255;
  while(brightness > 0){
    analogWrite(PWM_PIN, brightness);
    delay(10);
    brightness -= 1;
  }
}
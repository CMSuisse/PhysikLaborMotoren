#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_DCMotor *experimentMotor = AFMS.getMotor(1);

const uint8_t motorSpeed = 35;

void setup() {
  Serial.begin(9600);
  Serial.println("Experiment begin \n");
  AFMS.begin(1600);

  experimentMotor->setSpeed(motorSpeed);
  experimentMotor->run(FORWARD);
  experimentMotor->run(RELEASE);
}

void loop() {
  experimentMotor->setSpeed(motorSpeed);
  experimentMotor->run(FORWARD);
}
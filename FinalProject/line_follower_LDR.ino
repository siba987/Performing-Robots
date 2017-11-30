#define lights 9
#include <string.h>
#include <Arduino.h>
#include <SPI.h>
#if not defined (_VARIANT_ARDUINO_DUE_X_) && not defined (_VARIANT_ARDUINO_ZERO_)
#include <SoftwareSerial.h>
#endif

#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "Adafruit_BluefruitLE_UART.h"

//#include "BluefruitConfig.h"
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield();

// Select which 'port' M1, M2, M3 or M4. In this case, M1 and M2
Adafruit_DCMotor *leftMotor = AFMS.getMotor(1);
Adafruit_DCMotor *rightMotor = AFMS.getMotor(2);
int PTD1, PTD2, PTD3; // sensor values
const int sensorL = A0; //connected to analog 0
const int sensorC = A1; // connected to analog 1
const int sensorR = A2; // connected to analog 2
// calibration offsets
int leftOffset = 0, rightOffset = 0, centre = 0;
// pins for motor speed and direction
const int speed1 = 3, speed2 = 11, direction1 = 12, direction2 = 13;
// starting speed and rotation offset
int startSpeed = 150, rotate = 30; /* CHANGE START SPEED IF YOUR ROBOT IS TOO SLOW, AND CHANGE THE ROTATE VALUE ACCORDING TO YOUR
  TURNING ANGLE OF BLACK LINE.*/

// sensor threshold
int threshold = 5;
/*Threshold is the difference in values required between the center sensor and the left or right sensors
  before the robot decides to make a turn. In my case, a setting of 5 worked well. This means that the left and right
  sensors would need to detect a value greater than the value read from the center sensor plus the
  threshold value before action is taken. In other words, if the center sensor is reading a value of 600 and
  the left sensor is reading 603, then the robot will keep going straight. However, a left sensor value of 612
  (which is higher than the center value plus threshold) means that the left sensor is detecting the back
  line, indicating that the robot is too far over to the left. So the motors would adjust to make the robot
  turn to the right to compensate.
  The threshold value will vary depending on the contrast between your floor (or whatever surface
  you use) and the black line. This may need to be adjusted to ensure the robot only turns when it has
  detected enough of a difference between floor and line to ascertain it had moved too far left or right.*/

// initial speeds of left and right motors
int left = startSpeed, right = startSpeed;
// Sensor calibration routine
void calibrate() {
  for (int x = 0; x < 10; x++) { // run this 10 times to obtain average
    digitalWrite(lights, HIGH); // lights on
    delay(100);
    PTD1 = analogRead(sensorL); // read the 3 sensors
    PTD2 = analogRead(sensorC);
    PTD3 = analogRead(sensorR);
    leftOffset = leftOffset + PTD1; // add value of left sensor to total
    centre = centre + PTD2; // add value of centre sensor to total
    rightOffset = rightOffset + PTD3; // add value of right sensor to total
    delay(100);
    digitalWrite(lights, LOW); // lights off
    delay(100);
  }
  // obtain average for each sensor
  leftOffset = leftOffset / 10;
  rightOffset = rightOffset / 10;
  centre = centre / 10;
  // calculate offsets for left and right sensors
  leftOffset = centre - leftOffset;
  rightOffset = centre - rightOffset;
}
void setup()
{
  
  // set the motor pins to outputs
  pinMode(lights, OUTPUT); // lights
    // calibrate the sensors
  calibrate();
  delay(3000);
  digitalWrite(lights, HIGH); // lights on
  delay(100);

  // ADDITIONS FOR MOTOR SHIELD
  AFMS.begin();  // create with the default frequency 1.6KHz
  // Set the speed to start, from 0 (off) to 255 (max speed)
  leftMotor->setSpeed(speed1);
  rightMotor->setSpeed(speed2);
  leftMotor->run(FORWARD);
  rightMotor->run(FORWARD);
  // turn on motor
  leftMotor->run(RELEASE);
  rightMotor->run(RELEASE);

  Serial.print("init sensorL:");
  Serial.println(PTD1);
  Serial.print("sensorC:");
  Serial.println(PTD2);
  Serial.print("sensorR:");
  Serial.println(PTD3);

}
void loop() {
  // make both motors same speed
  left = startSpeed;
  right = startSpeed;
  // read the sensors and add the offsets
  PTD1 = analogRead(sensorL) + leftOffset;
  PTD2 = analogRead(sensorC);
  PTD3 = analogRead(sensorR) + rightOffset;
  // if PTD1 is greater than the centre sensor + threshold turn right
  if (PTD1 > (PTD2 + threshold)) {
    left = startSpeed + rotate;
    right = startSpeed - rotate;
    Serial.println("moving right");
  }
  // if PTD3 is greater than the centre sensor + threshold turn left
  if (PTD3 > (PTD2 + threshold)) {
    left = startSpeed - rotate;
    right = startSpeed + rotate;
    Serial.println("moving left");
  }
  // send the speed values to the motors
  leftMotor->setSpeed(speed1);
  rightMotor->setSpeed(speed2);
  
  // turn on motor
  leftMotor->run(RELEASE);
  rightMotor->run(RELEASE);
}

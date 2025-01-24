#include <Servo.h>

Servo servo1; // Create servo object for the servo on pin 24
Servo servo2; // Create servo object for the servo on pin 26

int servo1Angle = 0; // Initial angle for servo1
int servo2Angle = 0; // Initial angle for servo2

void setup() {
  servo1.attach(22); // Attach servo1 to pin 24
  servo2.attach(24); // Attach servo2 to pin 26
  
  // Set the initial position of the servos
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);

  delay(1000); // Wait for the servos to move to their initial positions
}

void loop() {
  // Increase each servo's angle by 10 degrees
  servo1Angle += 10;
  servo2Angle += 10;

  // Write the new angles to the servos
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);

  delay(1000); // Wait for 1 second before the next move

  // If the angles reach 180 degrees, reset to 0
  if (servo1Angle >= 180) {
    servo1Angle = 0;
  }
  if (servo2Angle >= 180) {
    servo2Angle = 0;
  }
}

#include "main.h"

#define CAGE_LEFT 1
#define CAGE_RIGHT 10
#define cageSpeed 80

void cage() {
  if(joystickGetDigital(1, 5, JOY_UP)) { //cage goes up
    motorSet(CAGE_LEFT, cageSpeed);
    motorSet(CAGE_RIGHT, -cageSpeed);
  } else if(joystickGetDigital(1, 5, JOY_DOWN)) { //cage goes down
    motorSet(CAGE_LEFT, -cageSpeed);
    motorSet(CAGE_RIGHT, cageSpeed);
  }
}

void resetCageMotors() {
  motorSet(CAGE_LEFT, 0);
	motorSet(CAGE_RIGHT, 0);
}

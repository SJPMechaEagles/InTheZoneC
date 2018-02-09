#include "main.h"

#define LAUNCHER -1 //motor
#define LAUNCHER_SPEED 80

void launcher() {
  //im a body :)
  if(joystickGetDigital(1, 7, JOY_LEFT)) {
    motorSet(LAUNCHER, LAUNCHER_SPEED);
  } else {
    motorSet(LAUNCHER, 0);
  }
}

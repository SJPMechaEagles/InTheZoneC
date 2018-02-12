#include "main.h"

//example file

void launcher() {
  //im a body :)
  if(joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_LEFT)) {
    motorSet(LAUNCHER, LAUNCHER_SPEED);
  } else {
    motorSet(LAUNCHER, 0);
  }
}

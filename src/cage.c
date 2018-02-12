#include "main.h"

#define cageSpeed 80

void cageUp() { motorSet(CAGE_LEFT, cageSpeed); motorSet(CAGE_RIGHT, -cageSpeed); }
void cageDown() { motorSet(CAGE_LEFT, -cageSpeed); motorSet(CAGE_RIGHT, cageSpeed); }
void resetCageMotors() { motorSet(CAGE_LEFT, 0); motorSet(CAGE_RIGHT, 0); }

void cage() {
  if(joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_UP)) { cageUp(); }
  else if(joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_DOWN)) { cageDown(); }
  else { resetCageMotors(); } //hold position
}

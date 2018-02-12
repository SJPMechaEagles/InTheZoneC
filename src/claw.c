#include "main.h"

void clawOpen() { motorSet(CLAW, clawSpeed); }
void clawClose() { motorSet(CLAW, -clawSpeed); }
void resetClawMotors() { motorSet(CLAW, 0); }

void claw() { //currently untested (2-12-18)
	if(joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_UP)) { clawOpen(); }
	else if(joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_DOWN)) { clawClose(); }
	else { resetClawMotors(); } //hold position
}

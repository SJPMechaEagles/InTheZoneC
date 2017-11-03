#include "main.h"

#define CLAW -1 //motor - must set when built


void claw() { //currently untested (11-1-17)
	int clawSpeed = -1; //must set claw speed when built
	if(joystickGetDigital(0, 6, JOY_UP)) { //open claw
		motorSet(CLAW, clawSpeed);
	}
	if(joystickGetDigital(0, 6, JOY_DOWN)) { //close claw
		motorSet(CLAW, -clawSpeed);
	}
}
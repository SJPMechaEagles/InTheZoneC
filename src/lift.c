#include "main.h"

void liftUp() { motorSet(LEFT_LIFT, liftSpeed); motorSet(RIGHT_LIFT, -liftSpeed); }
void liftDown() { motorSet(LEFT_LIFT, -liftSpeed); motorSet(RIGHT_LIFT, liftSpeed); }
void resetLiftMotors() { motorSet(LEFT_LIFT, 0); motorSet(RIGHT_LIFT, 0); }

void lift() { //currently untested (2-12-18)
	if(joystickGetDigital(1, 5, JOY_UP)) { liftUp(); }
	else if(joystickGetDigital(1, 5, JOY_DOWN)) { liftDown() }
	else { resetLiftMotors(); } //hold position
}

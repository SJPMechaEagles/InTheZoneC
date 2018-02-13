#include "main.h"

void liftUp() {motorSet(LEFT_LIFT, LIFT_SPEED); motorSet(RIGHT_LIFT, -LIFT_SPEED);}
void liftDown() {motorSet(LEFT_LIFT, -LIFT_SPEED); motorSet(RIGHT_LIFT, LIFT_SPEED);}
void resetLiftMotors() {motorSet(LEFT_LIFT, 0); motorSet(RIGHT_LIFT, 0);}

void lift() { //currently untested (2-12-18)
	if(LIFT_UP) {liftUp();}
	else if(LIFT_DOWN) {liftDown();}
	else {resetLiftMotors();} //hold position
}

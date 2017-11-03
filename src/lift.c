#include "main.h"

#define liftSpeed -1 //must set lift speed when built

#define LEFT_LIFT -1 //motor - must set when built
#define RIGHT_LIFT -1 //motor - must set when built


void lift() { //currently untested (11-1-17)
	if(joystickGetDigital(0, 5, JOY_UP)) { //lift goes up
		motorSet(LEFT_LIFT, liftSpeed);
		motorSet(RIGHT_LIFT, -liftSpeed);
	} else if(joystickGetDigital(0, 5, JOY_DOWN)) { //lift goes down
		motorSet(LEFT_LIFT, -liftSpeed);
		motorSet(RIGHT_LIFT, liftSpeed);
	} else { //hold position
		//code to hold position
		//if lift goes down, increace motor power
		//if lift goes up, decreace motor power
	}
}

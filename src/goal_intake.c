#include "main.h"

#define strength 80
#define INTAKE_LEFT 6 //motor - must set when built
#define INTAKE_RIGHT 7 //motor - must set when built

void goalIntake() {

 //currently untested (11-1-17)
  	if(joystickGetDigital(1, 6, JOY_UP)) { //goal intake goes up
  		motorSet(INTAKE_LEFT, strength);
  		motorSet(INTAKE_RIGHT, strength);
  	} else if(joystickGetDigital(1, 6, JOY_DOWN)) { //goal intake goes down
  		motorSet(INTAKE_LEFT, -strength);
  		motorSet(INTAKE_RIGHT, -strength);
  	}
}

void resetGoalIntakeMotors() {
  motorSet(INTAKE_LEFT, 0);
	motorSet(INTAKE_RIGHT, 0);
}

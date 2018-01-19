#include "main.h"
#include "goal_intake.h"

#define strength -1
#define INTAKE_LEFT 6 //motor - must set when built
#define INTAKE_RIGHT 7 //motor - must set when built

void goalIntake() {

 //currently untested (11-1-17)
  	if(joystickGetDigital(0, 5, JOY_UP)) { //goal intake goes up
  		motorSet(INTAKE_LEFT, strength);
  		motorSet(INTAKE_RIGHT, strength);
  	} else if(joystickGetDigital(0, 5, JOY_DOWN)) { //goal intake goes down
  		motorSet(INTAKE_LEFT, -strength);
  		motorSet(INTAKE_RIGHT, -strength);
  	}
  }

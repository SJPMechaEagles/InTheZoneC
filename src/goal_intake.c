#include "main.h"

void goalIntakeIn() { motorSet(INTAKE_LEFT, goalIntakeSpeed); motorSet(INTAKE_RIGHT, goalIntakeSpeed); }
void goalIntakeOut() { motorSet(INTAKE_LEFT, -goalIntakeSpeed); motorSet(INTAKE_RIGHT, -goalIntakeSpeed); }
void resetGoalIntakeMotors() { motorSet(INTAKE_LEFT, 0); motorSet(INTAKE_RIGHT, 0); }

void goalIntake() { //currently untested (2-12-18)
  	if(joystickGetDigital(JOYSTICK_ONE, RIGHT_BUMPERS, JOY_UP)) { goalIntakeIn(); }
    else if(joystickGetDigital(JOYSTICK_ONE, RIGHT_BUMPERS, JOY_DOWN)) { goalIntakeOut(); }
    else { resetGoalIntakeMotors(); } //hold position
}

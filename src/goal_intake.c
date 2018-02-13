#include "main.h"

void goalIntakeIn() { motorSet(INTAKE_LEFT, GOAL_INTAKE_SPEED); motorSet(INTAKE_RIGHT, GOAL_INTAKE_SPEED); }
void goalIntakeOut() { motorSet(INTAKE_LEFT, -GOAL_INTAKE_SPEED); motorSet(INTAKE_RIGHT, -GOAL_INTAKE_SPEED); }
void resetGoalIntakeMotors() { motorSet(INTAKE_LEFT, 0); motorSet(INTAKE_RIGHT, 0); }

void goalIntake() { //currently untested (2-12-18)
  	if(GOAL_IN) { goalIntakeIn(); }
    else if(GOAL_OUT) { goalIntakeOut(); }
    else { resetGoalIntakeMotors(); } //hold position
}

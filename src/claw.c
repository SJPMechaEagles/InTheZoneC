#include "main.h"

void clawOpen() {motorSet(CLAW, CLAW_SPEED);}
void clawClose() {motorSet(CLAW, -CLAW_SPEED);}
void resetClawMotors() {motorSet(CLAW, 0);}

void claw() { //currently untested (2-12-18)
	if(CLAW_OPEN) { clawOpen(); }
	else if(CLAW_CLOSE) { clawClose(); }
	else { resetClawMotors(); } //hold position
}

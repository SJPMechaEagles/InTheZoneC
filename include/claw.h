#ifndef _CLAW_H_
#define _CLAW_H_

void claw();
void clawOpen();
void clawClose();
void resetClawMotors();

#define CLAW_SPEED -1 //undefined
#define CLAW_OPEN joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_UP)
#define CLAW_CLOSE joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_DOWN)

#endif

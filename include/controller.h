#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

bool oystickGetDigital(unsigned char joystick, unsigned char buttonGroup,
	unsigned char button);
//cage.c
#define CAGE_UP joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_UP)
#define CAGE_DOWN joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_DOWN)
//goal_intake.c
#define GOAL_IN joystickGetDigital(JOYSTICK_ONE, RIGHT_BUMPERS, JOY_UP)
#define GOAL_OUT joystickGetDigital(JOYSTICK_ONE, RIGHT_BUMPERS, JOY_DOWN)
//launcher.c
#define LAUNCHER_FIRE joystickGetDigital(JOYSTICK_ONE, LEFT_D_PAD, JOY_LEFT)
//lift.c
#define LIFT_UP joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_UP)
#define LIFT_DOWN joystickGetDigital(JOYSTICK_ONE, LEFT_BUMPERS, JOY_DOWN)

#endif

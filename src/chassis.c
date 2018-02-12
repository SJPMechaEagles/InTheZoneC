#include "main.h"

void drive(int speedLeft, int speedRight) {
	motorSet(LEFT, speedLeft);
	motorSet(RIGHT, -speedRight);
}

void resetDriveMotors() { motorSet(LEFT, 0); motorSet(RIGHT, 0); }

void arcadeControl() {
		int power = joystickGetAnalog(JOYSTICK_ONE, LEFT_VERTICAL_AXIS);
    int turn  = joystickGetAnalog(JOYSTICK_ONE, LEFT_HORIZONTAL_AXIS);
		drive(power + turn, power - turn); //moves with a turning factor
}

void tankControl() {
		int leftPower = joystickGetAnalog(JOYSTICK_ONE, LEFT_VERTICAL_AXIS);
		int rightPower = joystickGetAnalog(JOYSTICK_ONE, RIGHT_VERTICAL_AXIS);
		drive(leftPower, rightPower); //sets corresponding side wheel to joystick
}

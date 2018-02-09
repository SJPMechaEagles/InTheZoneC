#include "main.h"

#define LEFT 9 //motor
#define RIGHT 8 //motor

void resetDriveMotors() {
	motorSet(LEFT, 0);
	motorSet(RIGHT, 0);
}

void drive(int speedLeft, int speedRight) {
	motorSet(LEFT, speedLeft);
	motorSet(RIGHT, -speedRight);
}

void arcadeControl() {
		int power = joystickGetAnalog(1, 2); // vertical axis on left joystick
    int turn  = joystickGetAnalog(1, 1); // horizontal axis on left joystick
		drive(power + turn, power - turn); //moves with a turning factor
}

void tankControl() { //currently untested (11-1-17)
		int leftPower = joystickGetAnalog(1, 3); //vertical axis on left joystick
		int rightPower = joystickGetAnalog(1, 2); //vertical axis on right joystick
		drive(leftPower, rightPower); //sets corresponding side wheel to joystick
}

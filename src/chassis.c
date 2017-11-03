#include "main.h"

#define FRONT_LEFT 2 //motor
#define FRONT_RIGHT 3 //motor
#define BACK_LEFT 1 //motor
#define BACK_RIGHT 10 //motor

void resetMotors() {
	motorSet(FRONT_LEFT, 0);
	motorSet(BACK_LEFT, 0);
	motorSet(FRONT_RIGHT, 0);
	motorSet(BACK_RIGHT, 0);
}

void drive(int speedLeft, int speedRight) {
	motorSet(FRONT_LEFT, speedLeft);
	motorSet(BACK_LEFT, -speedLeft);
	motorSet(FRONT_RIGHT, -speedRight);
	motorSet(BACK_RIGHT, speedRight);
}

void arcadeControl() {
		int power = joystickGetAnalog(1, 2); // vertical axis on left joystick
    int turn  = joystickGetAnalog(1, 1); // horizontal axis on left joystick
		drive(power + turn, power - turn); //moves with a turning factor
}

void tankControl() { //currently untested (11-1-17)
		int leftPower = joystickGetAnalog(1, 2); //vertical axis on left joystick
		int rightPower = joystickGetAnalog(2, 2); //vertical axis on right joystick
		drive(leftPower, rightPower); //sets corresponding side wheel to joystick
}

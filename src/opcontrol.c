/** @file opcontrol.c
 * @brief File for operator control code
 *
 * This file should contain the user operatorControl() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"

/*
 * Runs the user operator control code. This function will be started in its own task with the
 * default priority and stack size whenever the robot is enabled via the Field Management System
 * or the VEX Competition Switch in the operator control mode. If the robot is disabled or
 * communications is lost, the operator control task will be stopped by the kernel. Re-enabling
 * the robot will restart the task, not resume it from where it left off.
 *
 * If no VEX Competition Switch or Field Management system is plugged in, the VEX Cortex will
 * run the operator control task. Be warned that this will also occur if the VEX Cortex is
 * tethered directly to a computer via the USB A to A cable without any VEX Joystick attached.
 *
 * Code running in this task can take almost any action, as the VEX Joystick is available and
 * the scheduler is operational. However, proper use of delay() or taskDelayUntil() is highly
 * recommended to give other tasks (including system tasks such as updating LCDs) time to run.
 *
 * This task should never exit; it should end with some kind of infinite loop, even if empty.
 */
 #define liftSpeed -1 //must set lift speed when built

const int FRONT_LEFT = 2;
const int FRONT_RIGHT = 3;
const int BACK_LEFT = 1;
const int BACK_RIGHT = 10;

const int LEFT_LIFT = -1; //must set when built
const int RIGHT_LIFT = -1; //must set when built

const int CLAW = -1; //must set when built

void apple(int) {return;}

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

void driveAndTurn() {
	delay(5000);
	drive(115,115);
	delay(2000);
	resetMotors();
	delay(2000);
	drive(-80,80);
	delay(2000);
	resetMotors();
}

void lift() { //currently untested (11-1-17)
	if(joystickGetDigital(0, 5, JOY_UP)) { //lift goes up
		motorSet(LEFT_LIFT, liftSpeed);
		motorSet(RIGHT_LIFT, -liftSpeed);
	} else if(joystickGetDigital(0, 5, JOY_DOWN)) { //lift goes down
		motorSet(LEFT_LIFT, -liftSpeed);
		motorSet(RIGHT_LIFT, liftSpeed);
	} else { //hold position
		//code to hold position
		//if lift goes down, increace motor power
		//if lift goes up, decreace motor power
	}
}

void claw() { //currently untested (11-1-17)
	int clawSpeed = -1; //must set claw speed when built
	if(joystickGetDigital(0, 6, JOY_UP)) { //open claw
		motorSet(CLAW, clawSpeed);
	}
	if(joystickGetDigital(0, 6, JOY_DOWN)) { //close claw
		motorSet(CLAW, -clawSpeed);
	}
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

void operatorControl() {
	while(1) {
		//arcadeControl();
		tankControl();
		lift();
		claw();
		delay(20);
	}

}

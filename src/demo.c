#include "main.h"

void apple(int param) {return;}

//demo for learning to code
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

#include "main.h"

void resetAllMotors() {
	resetDriveMotors();
	resetCageMotors();
	resetClawMotors();
	resetGoalIntakeMotors();
	resetLiftMotors();
}

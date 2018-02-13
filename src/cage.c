#include "main.h"

void cageUp() {motorSet(CAGE_LEFT, -CAGE_SPEED); motorSet(CAGE_RIGHT, -CAGE_SPEED);}
void cageDown() {motorSet(CAGE_LEFT, CAGE_SPEED); motorSet(CAGE_RIGHT, CAGE_SPEED);}
void resetCageMotors() {motorSet(CAGE_LEFT, 0); motorSet(CAGE_RIGHT, 0);}

void cage() {
  if(CAGE_UP) { cageUp(); }
  else if(CAGE_DOWN) { cageDown(); }
  else { resetCageMotors(); } //hold position
}

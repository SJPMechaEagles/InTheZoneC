#include "main.h"

//example file
void launcherFire() {motorSet(LAUNCHER, LAUNCHER_SPEED);}
void resetLauncherMotors() {motorSet(LAUNCHER, 0);}

void launcher() {
  //im a body :)
  if(LAUNCHER_FIRE) {launcherFire();}
  else {resetLauncherMotors();} //stop launcher
}

#include "main.h"


//MOTORS

extern pros::Motor leftDriveFront;
extern pros::Motor leftDriveBack;
extern pros::Motor rightDriveFront;
extern pros::Motor rightDriveBack;

//CONTROLLER
extern pros::Controller controller;
extern pros::Rotation left;
extern pros::Rotation right;
extern pros::Rotation back;

extern pros::ADIGyro gyro;

#define clampPneumatics 'A'

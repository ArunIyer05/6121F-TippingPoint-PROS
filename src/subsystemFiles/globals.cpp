#include "main.h"
//true/false as to whether motor is reversed or not
pros::Motor leftDriveFront(1, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor leftDriveBack(9, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightDriveFront(2, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightDriveBack(10, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);




pros::Rotation left(18);
pros::Rotation right(19);
pros::Rotation back(20);
//note - change reversed values while testing with robot



//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);



//MISCELLANEOUS

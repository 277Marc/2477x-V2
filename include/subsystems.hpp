#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

    inline pros::Motor FrontRollers(3);
    inline pros::Motor MainIntake(10);
    inline pros::Motor TopRoller(1);

    inline ez::Piston LeftIntakeArm('G');
    inline ez::Piston RightIntakeArm('E');

    inline ez::Piston RightArm('H');
    inline ez::Piston LeftArm('F');




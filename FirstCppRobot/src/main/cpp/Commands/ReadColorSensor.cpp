/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Constants.h"
#include "Utils.h"

//#include <frc/smartdashboard/smartdashboard.h>
#include "Subsystems/ControlPanel.h"
#include "Commands/ReadColorSensor.h"

ReadColorSensor::ReadColorSensor(std::shared_ptr<ControlPanel> control_panel) : frc::Command()
{
    std::cout << "ReadColorSesnor constructer" << std::endl;
    control_panel_ = control_panel;
    Requires(control_panel_.get());
}

// Called just before this Command runs the first time
void ReadColorSensor::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ReadColorSensor::Execute() {
    std::cout << "ReadColorSensor::Execute" << std::endl; 
    control_panel_->ReadColor();
}

// Make this return true when this Command no longer needs to run execute()
bool ReadColorSensor::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void ReadColorSensor::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReadColorSensor::Interrupted() {

}

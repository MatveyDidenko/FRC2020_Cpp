/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/LogWrapperCommand.h"

LogWrapperCommand::LogWrapperCommand() {
  // Use addRequirements() here to declare subsystem dependencies.
  std::cout << "LogWrapperCommand constructer" << std::endl;
}

// Called when the command is initially scheduled.
void LogWrapperCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void LogWrapperCommand::Execute() {}

// Called once the command ends or is interrupted.
void LogWrapperCommand::End(bool interrupted) {}

// Returns true when the command should end.
bool LogWrapperCommand::IsFinished() { return false; }

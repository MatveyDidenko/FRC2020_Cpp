// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#pragma once

#include "Utils.h"

#include "frc/TimedRobot.h"
#include "frc/commands/Command.h"
#include "frc/livewindow/LiveWindow.h"
#include "frc/smartdashboard/SendableChooser.h"

#include "Commands/AutonomousCommand.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/ControlPanel.h"

#include "OI.h"

class Robot : public frc::TimedRobot {
public:
	frc::Command* autonomousCommand = nullptr;
	static std::unique_ptr<OI> oi;
	frc::LiveWindow *lw = frc::LiveWindow::GetInstance();
	frc::SendableChooser<frc::Command*> chooser;

    static std::shared_ptr<DriveTrain> subs_drive_train_;
	static std::shared_ptr<ControlPanel> subs_control_panel_;

	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
};

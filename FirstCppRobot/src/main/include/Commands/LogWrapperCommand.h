/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

enum class LOG_SEV
{
  kTRACE,
  kDEBUG,
  kINFO,
  kWARN,
  kERROR,
  kFATAL
};

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class LogWrapperCommand
    : public frc2::CommandHelper<frc2::CommandBase, LogWrapperCommand> {
 public:
  LogWrapperCommand();

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

  void Log(LOG_SEV sev, std::string msg)
  {
    static const std::array<std::string, 6> sev_strings{{"TRACE", "DEBUG", "INFO",
                                                         "WARN",  "ERROR", "FATAL"}};

    std::time_t t = std::time(nullptr);
    std::tm tm = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr};
    localtime_r(&t, &tm);
    char time_string[35] = {0};
    std::strftime(time_string, sizeof(time_string), "%F %T", &tm);

    std::cout << time_string << "[" << sev_strings[static_cast<int>(sev)] << "] " << msg << std::endl; 

  }
};

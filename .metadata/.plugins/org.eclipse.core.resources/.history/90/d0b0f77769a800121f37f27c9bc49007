#include "Team1257robot.h"
CTeam1257Robot::CTeam1257Robot():
team1257Robot(LEFT_MOTOR,RIGHT_MOTOR),
leftStick(LEFT_STICK),
rightStick(RIGHT_STICK),
gyro(GYRO),
ultrasonic(&CHANNEL_PING,&CHANNEL_ECHO)
{
	team1257LCD = DriverStationLCD::GetInstance();
	team1257LCD->Clear();
	team1257Robot.SetExpiration(0.1);
	tolerance = 1;
}
void CTeam1257Robot::Autonomous()
{
	team1257LCD->Clear();
	team1257LCD->UpdateLCD();
	team1257LCD->Printf(DriverStationLCD::kUser_Line1, 1, "Autonomous Engaged!");
	team1257LCD->UpdateLCD();
	GetWatchdog().Feed();
	while(IsAutonomous() && IsEnabled())
	{
		GetWatchdog().Feed();
		Drive(.5,.5);
		if(ultrasonic.GetRangeInches() <= 60.0)
		{
			Turn();
		}
	}
}
void CTeam1257Robot::OperatorControl()
{
	while(IsOperatorControl() && IsEnabled())
	{
		if(leftStick.GetRawButton(5) && leftStick.GetRawButton(6))
		{
			Drive();
		}
	}
}
void CTeam1257Robot::Test()
{
	team1257LCD->Clear();
	team1257LCD->UpdateLCD();
	team1257LCD->Printf(DriverStationLCD::kUser_Line1, 1, "Testing!");
	team1257LCD->UpdateLCD();
	GetWatchdog().Feed();
	while(IsTest() && IsEnabled())
	{
		
		GetWatchdog().Feed();
		Drive(.5,.5);
		if(ultrasonic.GetRangeInches() <= 60.0)
		{
			Turn();
		}
	}
}
void CTeam1257Robot::Drive()
{
	team1257Robot.SetLeftRightMotorOutputs(-leftStick.GetY,-leftStick.GetTwist);
}
void CTeam1257Robot::Drive(double left, double right)
{
	team1257Robot.SetLeftRightMotorOutputs(left,right);
}
void CTeam1257Robot::Turn()
{
	gyro.Reset();
	while(1)
	{
		if(Approx(gyro.GetAngle, 90, tolerance))
			break;
		else
		{
			Drive(-.5,.5);
		}
	}
	Drive(0, 0);
}
void CTeam1257Robot::Approx(int first, int second, int tol)
{
	if((first + tol) == second || (first - tol) == second)
		return true;
	else return false;
}
START_ROBOT_CLASS(CTeam1257Robot);

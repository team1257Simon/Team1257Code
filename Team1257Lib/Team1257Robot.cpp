/*
 * Team1257Robot.cpp:
 * Main source file/implementation.
 */
#include "Team1257robot.h"
CTeam1257Robot::CTeam1257Robot():
team1257Robot(LEFT_MOTOR,RIGHT_MOTOR),
leftStick(LEFT_STICK),
rightStick(RIGHT_STICK),
gyro(GYRO),
ultrasonic(ULTRASONIC)
{
	team1257LCD = DriverStationLCD::GetInstance();
	team1257LCD->Clear();
	team1257Robot.SetExpiration(0.1);
	//tolerance = 1;
}
void CTeam1257Robot::Autonomous()
{
	team1257LCD->Clear();
	team1257LCD->UpdateLCD();
	team1257LCD->Printf(DriverStationLCD::kUser_Line1, 1, "Autonomous Engaged!");
	team1257LCD->UpdateLCD();
	//GetWatchdog().Feed();
	while(IsAutonomous() && IsEnabled())
	{
		if(leftStick.GetRawButton(2)||rightStick.GetRawButton(2))
			break;
		//GetWatchdog().Feed();
		Drive(.3,.3);
		if((ultrasonic.GetValue()/2.5)*6450 <= 100)
		{
			Turn();
		}
	}
}
void CTeam1257Robot::OperatorControl()
{
	team1257LCD->Clear();
	team1257LCD->UpdateLCD();
	team1257LCD->Printf(DriverStationLCD::kUser_Line1, 1, "Teleop Engaged!");
	team1257LCD->UpdateLCD();
	while(IsOperatorControl() && IsEnabled())
	{
		if(leftStick.GetRawButton(2)||rightStick.GetRawButton(2))
			break;
		if(leftStick.GetRawButton(5) && leftStick.GetRawButton(6))
		{
			Drive();
			if((ultrasonic.GetValue()/2.5)*6450 <= 100)
				while((ultrasonic.GetValue()/2.5)*6450 >= 500)
				{
					if(leftStick.GetY() >= 0 && leftStick.GetTwist() >= 0)
						Drive(0,0);
					else 
						Drive();
				}
				//SafetyMethod();
		}
		else Drive(0,0);
	}
}
void CTeam1257Robot::Test()
{
	team1257LCD->Clear();
	team1257LCD->UpdateLCD();
	team1257LCD->Printf(DriverStationLCD::kUser_Line1, 1, "Testing!");
	team1257LCD->UpdateLCD();
	//GetWatchdog().Feed();
	while(IsTest() && IsEnabled())
	{
		if(leftStick.GetRawButton(2)||rightStick.GetRawButton(2))
			break;
		//GetWatchdog().Feed();
		Drive(.3,.3);
	    team1257LCD->Printf(DriverStationLCD::kUser_Line2, 1, "Ultrasound voltage = %f", ultrasonic.GetValue());
	    team1257LCD->UpdateLCD();
		if((ultrasonic.GetValue()/2.5)*6450 <= 100)
		{
			Turn();
		}
	}
}
void CTeam1257Robot::Drive()
{
	team1257Robot.SetLeftRightMotorOutputs(.5*leftStick.GetY(),.5*leftStick.GetTwist());
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
		if(IsTest())
		{
			team1257LCD->Printf(DriverStationLCD::kUser_Line3, 1, "Gyro angle = %f",gyro.GetAngle());
			team1257LCD->UpdateLCD();
		}
		if(leftStick.GetRawButton(2)||rightStick.GetRawButton(2))
			break;
		if((int)gyro.GetAngle() == 90)
			break;
		else 
			Drive(-.3,.3);
	}
	Drive(.3, .3);
}
/*void CTeam1257Robot::SafetyMethod()
{
        while(1)
        {
              if(ultrasonic.GetValue() >= 5) return;
              else
              {
                    if(leftStick.GetY() >= 0 && leftStick.GetTwist() >= 0)
                    	Drive(0,0);
                    else Drive();
              }
        }
}*/
//bool CTeam1257Robot::Approx(int first, int second, int tol){return first + tol == second || first - tol == second ? true : false;}

RobotBase *FRC_userClassFactory() 
{ 
	return new CTeam1257Robot(); 
} 
extern "C" 
{ 
	INT32 FRC_UserProgram_StartupLibraryInit() 
	{ 
		RobotBase::startRobotTask((FUNCPTR)FRC_userClassFactory); 
		return 0; 
	} 
}

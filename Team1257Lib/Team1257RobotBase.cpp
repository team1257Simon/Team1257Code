/*
 * Team1257RobotBase.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: Nathan
 */

#include "Team1257RobotBase.h"

Team1257RobotBase::Team1257RobotBase():
rightStick(RIGHT_STICK),
leftStick(LEFT_STICK),
team1257Robot(LEFT_MOTOR,RIGHT_MOTOR)
{
	team1257Robot.SetExpiration(.1);
	team1257LCD = DriverStationLCD::GetInstance();
	team1257LCD->Clear();
}
void Team1257RobotBase::StartCompetition()
{
	
}


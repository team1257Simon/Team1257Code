/*
 * Team1257RobotBase.h
 *
 *  Created on: Apr 26, 2013
 *      Author: Nathan
 */

#ifndef TEAM1257ROBOTBASE_H_
#define TEAM1257ROBOTBASE_H_
#define RIGHT_MOTOR 1
#define LEFT_MOTOR 2
#define RIGHT_STICK 1
#define LEFT_STICK 2
#include <WPIlib.h>

class Team1257RobotBase: public RobotBase
{
public:
	Team1257RobotBase();
	void StartCompetition();
public:
	Joystick rightStick;
	Joystick leftStick;
	RobotDrive team1257Robot;
	DriverStationLCD* team1257LCD;
};

#endif /* TEAM1257ROBOTBASE_H_ */

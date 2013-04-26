/*
 * Team1257Fns.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: Nathan
 */
#include "Team1257Fns.h"
using namespace Team1257;
direction drive(Team1257RobotBase toDrive)
{
	direction toReturn = {toDrive.leftStick.GetY(),toDrive.leftStick.GetTwist()};
	toDrive.team1257Robot.SetLeftRightMotorOutputs(toReturn.leftSpeed,toReturn.rightSpeed);
	return toReturn;
}
void drive(Team1257RobotBase toDrive, int left, int right)
{
	toDrive.team1257Robot.SetLeftRightMotorOutputs(left,right);
}
void drive(Team1257RobotBase toDrive,direction Direction)
{
	toDrive.team1257Robot.SetLeftRightMotorOutputs(Direction.leftSpeed,Direction.rightSpeed);
}
double Abs(double d)
{
	if(d<0)
	{
		d*=-1;
	}
	return d;
}
float Abs(float f)
{
	if(f<0)
	{
		f*=-1;
	}
	return f;
}

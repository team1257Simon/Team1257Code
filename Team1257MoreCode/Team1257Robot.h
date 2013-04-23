/*
 * Team1257Robot.h:
 * Has the #defines, prototypes and class definition for CTeam1257Robot.
 * Author: Nathan Simon
 */
#ifndef _TEAM1257ROBOT_H_
#define _TEAM1257ROBOT_H
#include <WPIlib.h>
#define ULTRASONIC 2
#define LEFT_MOTOR 1
#define RIGHT_MOTOR 2
#define LEFT_STICK 1
#define RIGHT_STICK 2
#define GYRO 1
class CTeam1257Robot : public SimpleRobot
{
public:
	CTeam1257Robot();
	void Autonomous();
	void OperatorControl();
	void Test();
	void Drive();
	void Drive(double, double);
	void Turn();
	//void Approx(int, int, int);
        void SafetyMethod();
public:
	RobotDrive team1257Robot;
	Joystick leftStick;
	Joystick rightStick;
	Gyro gyro;
	AnalogChannel ultrasonic;
	DriverStationLCD* team1257LCD;
	//int tolerance;
};
#endif

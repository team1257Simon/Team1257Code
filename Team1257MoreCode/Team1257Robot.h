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
public:
	AnalogChannel ultrasonic;
	RobotDrive team1257Robot;
	Joystick leftStick;
	Joystick rightStick;
	DriverStationLCD* team1257LCD;
	Gyro gyro;
	//int tolerance;
};

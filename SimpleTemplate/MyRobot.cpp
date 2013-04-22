#include "WPILib.h"


//Rohan, this code will not work
/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class Robot : public SimpleRobot
{
	DriverStationLCD* lcd;
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick
	AnalogChannel distance;
	Gyro angle;
	

public:
	Robot(void):
		myRobot(1, 2),	// these must be initialized in the same order
		stick(1),		// as they are declared above.
		distance(2),
		angle(4)
		
	{
		myRobot.SetExpiration(0.1);
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		myRobot.SetSafetyEnabled(false);
		lcd->Printf(DriverStationLCD::kUser_Line1, 1, "Autonomous Engaged");		
	
	}

	/**
	 * Runs the motors with arcade steering. 
	 */
	void OperatorControl(void)
	{
		myRobot.SetSafetyEnabled(true);
		/*while (IsOperatorControl())
		{
			myRobot.ArcadeDrive(stick); // drive with arcade style (use right stick)
			Wait(0.005);				// wait for a motor update time
		}*/
		myRobot.Drive(0, 0);
	}
	
	void turn()
	{
		
	}
	
	/**
	 * Runs during test mode
	 */
	void Test() 
	{
		Autonomous();
		myRobot.Drive(0, 0);
	}
};

START_ROBOT_CLASS(Robot);


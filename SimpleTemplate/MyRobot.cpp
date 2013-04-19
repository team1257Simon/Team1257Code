#include "WPILib.h"

#define CHANNEL_PING new DigitalOutput(1)
#define CHANNEL_ECHO new DigitalInput(2)

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
	Ultrasonic distance;
	Gyro angle;
	
	double dist;
	double ang;
	

public:
	Robot(void):
		myRobot(1, 2),	// these must be initialized in the same order
		stick(1),		// as they are declared above.
		//distance(CHANNEL_PING,CHANNEL_ECHO),
		distance(2),
		angle(4)
		
	{
		myRobot.SetExpiration(0.1);
		dist = distance.GetRangeMM();
		ang = angle.GetAngle();
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		myRobot.SetSafetyEnabled(false);
		lcd->Printf(DriverStationLCD::kUser_Line1, 1, "Autonomous Engaged");
		
		while(dist > 50)
		{
			myRobot.Drive(0.3, 0.3);
		}
		
		if(dist < 50)
		{
			myRobot.Drive(0, 0);
			Wait(2);
			turn();
		}
		
		else if(dist < 0)
		{
			myRobot.Drive(0, 0);
			lcd->Printf(DriverStationLCD::kUser_Line4, 1, "Who broke the gyro?!");
		}
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
		while(dist < 50 && (ang < 87 || ang > 93))
		{
			myRobot.Drive(0.3, -0.3);
		}
		
		if(dist > 50 || (ang > 87 || ang < 93))
		{
			myRobot.Drive(0, 0);
			angle.Reset();
			Autonomous();
		}
		
		else if(dist < 10)
		{
			myRobot.Drive(0, 0);
			lcd->Printf(DriverStationLCD::kUser_Line2, 1, "Out of controool!");
		}
		
		else if(dist < 0)
		{
			myRobot.Drive(0, 0);
			lcd->Printf(DriverStationLCD::kUser_Line4, 1, "Who broke the gyro?!");
		}
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


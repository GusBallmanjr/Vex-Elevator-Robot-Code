#pragma config(Sensor, dgtl1,  BumperOne,      sensorTouch)
#pragma config(Sensor, dgtl2,  BumperTwo,      sensorTouch)
#pragma config(Sensor, dgtl3,  BumperThree,    sensorTouch)
#pragma config(Sensor, dgtl4,  BumperFour,     sensorTouch)
#pragma config(Motor,  port2,           MotorPortTwo,  tmotorVex393_MC29, openLoop)

/*
Project Title:
Team Members: Gus Ballman
Date:11/21/18
Section:


Task Description: When a button is pressed then elavator will go to that floor, wait 2 seconds and
drop down to the base. The elavator must hold three limit switches. The elavator and elavator shaft
will be made of vex parts.


*/


task main()
{                        
while (1==1)
if (SensorValue[BumperOne] == 1)
   {
		startMotor(MotorPortTwo,127);
		wait(.255);
		stopMotor(MotorPortTwo);
		wait(2);
		startMotor(MotorPortTwo,-127);
		wait(.14);
		stopMotor(MotorPortTwo);
	}
else if(SensorValue[BumperTwo] == 1)
{
		startMotor(MotorPortTwo,127);
		wait(.60);
		stopMotor(MotorPortTwo);
		wait(2);
		startMotor(MotorPortTwo,-127);
		wait(.4);
		stopMotor(MotorPortTwo);
}
else if(SensorValue[BumperThree] == 1)
	{
	  startMotor(MotorPortTwo,127);
		wait(.95);
		stopMotor(MotorPortTwo);
		wait(2);
		startMotor(MotorPortTwo,-127);
		wait(.85);
		stopMotor(MotorPortTwo);
  }
  else if(SensorValue[BumperFour] == 1)
	{
	  startMotor(MotorPortTwo,127);
		wait(1.3);
		stopMotor(MotorPortTwo);
		wait(2);
		startMotor(MotorPortTwo,-127);
		wait(1.1);
		stopMotor(MotorPortTwo);
  }
}

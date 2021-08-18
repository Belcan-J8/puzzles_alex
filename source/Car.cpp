#include "Car.h"


Car::Car()
	: logger(new BlueLogger())
	, colorprinter(new CyanLogger())
	, magentaprinter(new MagentaLogger())

{
}
void Car::TurnLeft()
{
	colorprinter->Log("Turning left"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	colorprinter->Log("Turning right"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	colorprinter->Log("Moving ahead"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

void Car::FollowerTurnLeft()
{
	magentaprinter->Log("Turning left"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::FollowerTurnRight()
{
	magentaprinter->Log("Turning right"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::FollowerAccelerate()
{
	magentaprinter->Log("Moving ahead"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
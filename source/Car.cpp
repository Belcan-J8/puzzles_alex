#include "Car.h"


Car::Car()
	: logger(new BlueLogger())
	, colorprinter(new CyanLogger())

{
}
void Car::TurnLeft()
{
	colorprinter->Log("Turning left"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

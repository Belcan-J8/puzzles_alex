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
	magentaprinter->Log("Moving ahead"); //print in cyan or magenta
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

#include "Car.h"
#include "C:\Projects\J8\puzzles_alex\termcolor-master\include\termcolor\termcolor.hpp"

Car::Car()
	: logger(new Logger())
{
}
void Car::TurnLeft()
{
	std::cout << termcolor::blue << "";
	logger->Log("Turning left"); //print in blue
	std::cout << termcolor::blue << "" << termcolor::reset << std::endl;
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	std::cout << termcolor::blue << "";
	logger->Log("Turning right"); //print in blue
	std::cout << termcolor::blue << "" << termcolor::reset << std::endl;
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	std::cout << termcolor::blue << "";
	logger->Log("Moving ahead"); //print in blue
	std::cout << termcolor::blue << "" << termcolor::reset << std::endl;
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}

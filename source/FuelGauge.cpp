#include "FuelGauge.h"
#include "C:\Projects\J8\puzzles_alex\termcolor-master\include\termcolor\termcolor.hpp"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logger(new Logger())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		std::cout << termcolor::red << "";
		logger->Log("Low fuel!"); //print in red
		std::cout << termcolor::red << "" << termcolor::reset << std::endl;
	
	}
}

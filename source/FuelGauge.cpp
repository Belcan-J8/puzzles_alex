#include "FuelGauge.h"


FuelGauge::FuelGauge()
	: fuelLevel(5)
	, colorprinter(new YellowLogger())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		colorprinter->Log("Low fuel!");
		std::cout << termcolor::reset;
	}
}

#pragma once

#include "Logger.h"
#include <iostream>
using namespace std;

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();
private:
	int fuelLevel;
	int tempfuelLevel;
	ILogger* logger;
	ColorPrinter* colorprinter;
};

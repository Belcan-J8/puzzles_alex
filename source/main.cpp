#include "Car.h"
#include "Logger.h"


int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");


	FuelGauge fuelGauge;
	
	Car car;
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();

	car.FollowerTurnLeft();
	car.FollowerTurnRight();
	car.FollowerAccelerate();
	
	

	logger.Log("Exiting application");

	
}

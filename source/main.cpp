#include "Car.h"
#include "Logger.h"
#include "C:\Projects\J8\puzzles_alex\termcolor-master\include\termcolor\termcolor.hpp" //add relative path later

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car;
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();

	logger.Log("Exiting application");

	std::cout << termcolor::red << "this is a color message" << termcolor::reset << std::endl;
}

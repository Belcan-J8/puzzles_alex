#pragma once

#include <string>
#include "termcolor.hpp"

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(std::string string);
};

class BlueLogger : public ILogger
{
public:
	void Log(std::string string);
};

class RedLogger : public ILogger
{
public:
	void Log(std::string string);
};


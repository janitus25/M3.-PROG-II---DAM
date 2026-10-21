#pragma once
#include "Robot.h"
#include "Battery.h"
#include "CleanerRobot.h"

class GuardRobot : public Robot{

private:
	int alarmas = 0;

public:
	GuardRobot(string nombre, int alarmas);
	bool vigilar();

};


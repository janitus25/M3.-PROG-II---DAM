#pragma once
#include "Robot.h"
#include "Battery.h"

class CleanerRobot : public Robot{

private:
	int metros = 0;
	Battery bateria;

public:
	CleanerRobot(string nombre);
	int Limpiar(int m);
	int getBateria();
	void printCleaner();
};


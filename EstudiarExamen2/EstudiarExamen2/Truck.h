#pragma once
#include "Vehicle.h"

class Truck : public Vehicle{

private:
	int carga = 0;
	string matricula = "Default";

public:
	Truck(string marca, int carga, string matricula);
	void printTruck();
};


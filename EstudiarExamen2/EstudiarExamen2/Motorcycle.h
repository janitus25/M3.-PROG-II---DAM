#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle{

private:
	int cilindrada = 0;
	bool tieneSidecar = false;

public:
	Motorcycle(string marca, int cilindrada, bool tieneSidecar);
	void printMotorcycle();
};


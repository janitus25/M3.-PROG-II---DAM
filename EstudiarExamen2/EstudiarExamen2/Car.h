#pragma once
#include "Vehicle.h"
class Car : public Vehicle{

private:
	int puertas = 0, caballos = 0, kilometros = 0;

public:
	Car(string marca, int puertas, int caballos, int kilometros);
	void printCar();
	void Recorrer(int km);
};


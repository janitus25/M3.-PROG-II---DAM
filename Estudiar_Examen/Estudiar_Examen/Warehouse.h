#pragma once
#include <iostream>
#include "Building.h"
using namespace std;
class Warehouse : public Building{ //herencia

private:
	int madera=0, rocas=0, trigo=0;

public:
	Warehouse(string nombre, int madera, int rocas, int trigo) : Building(nombre) {
		this -> madera = madera;
		this->rocas = rocas;
		this -> trigo = trigo;
	}
	void printResources();
};


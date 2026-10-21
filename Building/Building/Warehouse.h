#pragma once
#include "Building.h"

class Warehouse : public Building{

private:
	int madera, rocas, trigo;

public:
	Warehouse();
	Warehouse(string nombre, int madera, int rocas, int trigo);
	void printResources();

};


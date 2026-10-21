#pragma once
#include "Building.h"

class Warehouse : public Building{ //Le especificamos al codigo que warehouse es hija de building
private:
	int madera, trigo, roca;

public:
	Warehouse(string _name, int _madera, int _trigo, int _rocas) : Building(_name), madera(_madera), trigo(_trigo), roca(_rocas) {};
	void PrintResources();
};

//Pedirle al claude que me haga una herencia con composicion

#pragma once
#include "Building.h"
#include <iostream>
using namespace std;

class Building{

protected:
	string nombre;

private:
	int madera=0, rocas=0, trigo=0;
	string dios;
	int sacerdotes;
public:
	Building(string _nombre) :nombre(_nombre) { cout << "Constructor Padre llamado\n"; };

	int getName();
	int Warehouse();
	void Templo(string _nombre) :nombre(_nombre) { cout << "Constructor Padre llamado\n"; };
	void printResources();
	void printTemple();
};


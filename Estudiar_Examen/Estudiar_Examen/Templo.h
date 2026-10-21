#pragma once
#include <iostream>
#include "Building.h"
using namespace std;
#include <string>

class Templo : public Building{

private:
	string dios;
	int sacerdotes;

public:
	Templo(string nombre, string dios, int sacerdotes) : Building(nombre){
		this->dios = dios;
		this->sacerdotes = sacerdotes;
	}
	void printTemple();
};


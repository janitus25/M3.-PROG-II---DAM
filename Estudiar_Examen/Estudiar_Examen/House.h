#pragma once
#include <iostream>
#include "Building.h"
using namespace std;

class House : public Building{

private:
	int plantas=0, habitantes=0, servidores=0;

public:
	House(string nombre, int plantas, int habitantes, int servidores) : Building(nombre) {
		this->plantas = plantas;
		this->habitantes = habitantes;
		this->servidores = servidores;
	}
	void printHouse();
};


#pragma once
#include <string>
using namespace std;


class Weapon{

private:
	string nombre_Arma = "Default";
	int danyo = 0;

public:

	Weapon();
	string getNombre();
	int getDanyo();
};


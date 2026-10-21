#pragma once
#include <iostream>
using namespace std;

class Rueda{

private:
	int presion;

public:
	Rueda();
	Rueda(int presion);
	void Inflar(int cantidad);
	int GetPresion();

};


#pragma once
#include <iostream>
using namespace std;
class Battery{

private:
	int carga = 0;

public:
	Battery();
	int getCarga();
	void Descargar(int c);
};


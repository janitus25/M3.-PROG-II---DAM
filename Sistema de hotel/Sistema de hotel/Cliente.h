#pragma once
#include <iostream>
using namespace std;

class Cliente{

private:
	string nombre;
	int cantidadNoches;

public:
	Cliente();
	Cliente(string nombre, int cantidadNoches);
	string GetName();
	int GetNights();
};


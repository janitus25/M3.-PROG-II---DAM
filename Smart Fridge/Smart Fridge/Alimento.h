#pragma once
#include <iostream>
using namespace std;

class Alimento{

protected:
	int idProducto = 0;
	string nombre = "Default";
	string fecha = "Default";
	
public:
	Alimento();
	Alimento(int idProducto, string nombre, string fecha);
	int GetId();
	string Getnombre();
	string Getfecha();
};


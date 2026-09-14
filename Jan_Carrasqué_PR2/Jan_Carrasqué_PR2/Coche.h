#pragma once
#include <iostream>
using namespace std;

class Coche{

private:
	string marca = "Default";
	string modelo = "Default";
	int anyo = 0;
	int potencia = 0;

public:
	void Acelerar();
	void Frenar();
	void Girar();

};


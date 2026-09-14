#pragma once
#include <iostream>
using namespace std;

class JugadorBaloncesto{

private:
	string nombre="Default";
	int altura=0;
	float peso=0;
	int edad = 0;

public:
	void Lanzar();
	void Saltar();
};


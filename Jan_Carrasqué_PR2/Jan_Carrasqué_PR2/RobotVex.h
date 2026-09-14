#pragma once
#include <iostream>
using namespace std;

class RobotVex {

private:
	int ruedas;
	int motores;
	int piston;
	string nombre;
	int velocidad;

public:	
	void AgregarRueda(int _ruedas);
	void ActivarElevador(int _motores);
	void ActivarAutonoma();
	bool Colision();
};


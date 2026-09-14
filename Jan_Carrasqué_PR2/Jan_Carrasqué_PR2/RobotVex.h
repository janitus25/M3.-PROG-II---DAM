#pragma once
#include <iostream>
using namespace std;

class RobotVex {

private:
	int ruedas = 0;
	int motores = 0;
	int piston = 0;
	string nombre = "Default";
	int velocidad = 0;

public:	
	void AgregarRueda(int _ruedas);
	void ActivarElevador(int _motores);
	void ActivarAutonoma();
	bool Colision();
};


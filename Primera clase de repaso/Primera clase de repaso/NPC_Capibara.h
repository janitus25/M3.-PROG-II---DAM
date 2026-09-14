#pragma once
#include <iostream>
using namespace std;

class NPC_Capibara{

private:
	string name = "Default"; //Las inicializamos en algo para que no pete
	int edad = 10;
	int vida = 100;
	int rondas = 0;

public:
	void SetAllAttributes(string _name, int _edad, int _vida, int _rondas);
	void RestarVida(int _cantidad);
	bool GestionarVida();
	int GestionarEdad();
	int GestionarRondas();
	int AplicarAtaque();
	string GetName();
	int GetVida();
};


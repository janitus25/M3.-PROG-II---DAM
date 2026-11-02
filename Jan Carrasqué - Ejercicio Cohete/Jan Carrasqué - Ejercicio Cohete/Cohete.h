#pragma once
#include <iostream>
#include <string>
#include "Capsula.h"
using namespace std;

class Cohete {

protected:
	int id = 0;
	string destino = "Default";
	double distanciaDestino = 0;
	Capsula* capsulas[10];
	int numCapsulas = 0;

public:
	Cohete();
	Cohete(int id, string destino, double distanciaDestino, Capsula* capsulas[10]);
	~Cohete();

	void AgregarCap(Capsula* cap);
	void EliminarCap(int posicion);
	void TransferirCap(int posicion, Cohete* otroCohete);
	bool ValidarViaje(double distancia);
	void Objetivo(string nuevoDestino, double distancia);
	bool Viajar();
	void Cargar(double energia);
	int getNumCapsulas();
};
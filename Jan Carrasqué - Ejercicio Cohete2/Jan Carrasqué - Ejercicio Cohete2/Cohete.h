#pragma once
#include <iostream>
using namespace std;
#include "Capsula.h"

class Cohete {

protected:
	int id;
	string destino;
	double distancia;
	Capsula* capsulas[10];
	int numCapsulas;

public:
	Cohete();
	Cohete(int id, string destino, double distancia, Capsula* capsulas[10]);
	~Cohete();

	void AgregarCap(Capsula* cap);
	void EliminarCap(int posicion);
	void TransferirCap(int posicion, Cohete* otroCohete);
	bool ValidarViaje(double distancia);
	void Objetivo(string destino, double distancia);

	bool Viajar();
	void Cargar(double energia);
	int getNumCapsulas();
};
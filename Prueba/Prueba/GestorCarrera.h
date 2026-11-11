#pragma once
#include "Coche.h"
#include <vector> //Usamos la libreria vector
#include <iostream>
#include <Windows.h>
using namespace std;

class GestorCarrera{

private:
	vector<Coche> coches;

public:
	GestorCarrera();
	void MoverVehiculos();
	void ImprimirCarrera();
	void Imprimir(Coche c);
	bool Partida();
	bool EstadoPartida();
	bool VehiculosOk();
};


#pragma once
#include "Arma.h"

class Personaje{

protected:
	int vida;
	int posicion[3];
	string nombre;
	Arma arma; //Esto es la composicion


public:
	void Moverse(int x[3]);
	void Disparar();
	void RecibirDanyo(Arma armaEnemigo);
	Arma GetArma();
};


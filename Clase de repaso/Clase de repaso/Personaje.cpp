#include "Personaje.h"

void Personaje::Moverse(int x[3]){
	posicion[0] += x[0];
	posicion[1] += x[1];
	posicion[2] += x[2];

	cout << "Moviendose" << endl;
}

void Personaje::Disparar() {
	arma.Disparar();
}

void Personaje::RecibirDanyo(Arma armaEnemigo){
	vida = armaEnemigo.GetDamage();

	if (vida <= 0) {
		cout << "Estas muerto" << endl;
	}

	else {
		cout << "Estado de vida: " << vida << endl;
	}
}

Arma Personaje::GetArma()
{
	return arma;
}

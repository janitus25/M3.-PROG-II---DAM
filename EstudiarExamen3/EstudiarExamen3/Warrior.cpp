#include "Warrior.h"

Warrior::Warrior(string nombre, int vida, int fuerza) : Character(nombre, vida){
	this->fuerza = fuerza;
}

int Warrior::Atacar(){
	return fuerza + arma.getDanyo();
}

void Warrior::printWarrior(){
	cout << "Nombre: " << nombre << endl;
	cout << "Vida: " << vida << endl;
	cout << "Fuerza: " << fuerza << endl;
	cout << "Nombre del arma: " << arma.getNombre() << endl;
}

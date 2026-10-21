#include "Weapon.h"

Weapon::Weapon(){
	nombre_Arma = "Espada";
	danyo = 10;
}

string Weapon::getNombre(){
	return nombre_Arma;
}

int Weapon::getDanyo(){
	return danyo;
}

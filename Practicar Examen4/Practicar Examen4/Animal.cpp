#include "Animal.h"

Animal::Animal(string nombre, int energia){
	this->nombre = nombre;
	this->energia = energia;
}

string Animal::getName(){
	return nombre;
}

int Animal::getEnergia(){
	return energia;
}

void Animal::GastarEnergia(int e){
	energia -= e;

	if (energia <= 0) {
		energia = 0;
	}

}

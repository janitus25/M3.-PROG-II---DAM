#include "Dog.h"

Dog::Dog(string nombre, int energia, int ladridos) : Animal(nombre, energia){
	this->ladridos = ladridos;
}

int Dog::Ladrar(){

	if (energia >= 5) {
		return ladridos;
	}

	else {
		return 0;
	}

}

void Dog::printDog(){
	cout << "Nombre: " << nombre << endl;
	cout << "Energia: " << energia << endl;
	cout << "Ladridos: " << ladridos << endl;
}

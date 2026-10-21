#include "Car.h"

Car::Car(string marca, int puertas, int caballos, int kilometros) : Vehicle(marca){
	this->puertas = puertas;
	this->caballos = caballos;
	this->kilometros = kilometros;
}

void Car::printCar(){
	cout << "Puertas : " << puertas << endl;
	cout << "Caballos : " << caballos << endl;
	cout << "Kilometros : " << kilometros << endl;
}

void Car::Recorrer(int km){
	kilometros += km;
}

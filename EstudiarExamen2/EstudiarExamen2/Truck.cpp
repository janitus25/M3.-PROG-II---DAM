#include "Truck.h"

Truck::Truck(string marca, int carga, string matricula) : Vehicle(marca){
	this->carga = carga;
	this->matricula = matricula;
}

void Truck::printTruck(){
	cout << "Carga : " << carga << endl;
	cout << "Matricula : " << matricula << endl;
}

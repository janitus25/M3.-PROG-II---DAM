#include "Motorcycle.h"

Motorcycle::Motorcycle(string marca, int cilindrada, bool tieneSidecar) : Vehicle(marca){
	this->cilindrada = cilindrada;
	this->tieneSidecar = tieneSidecar;
}

void Motorcycle::printMotorcycle(){
	cout << "Cilindrada: " << cilindrada << endl;
	cout << "Tiene sidecar: " << tieneSidecar << endl;
}

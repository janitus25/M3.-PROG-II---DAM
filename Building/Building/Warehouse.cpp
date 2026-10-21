#include "Warehouse.h"

Warehouse::Warehouse() : Building(){

	nombre = "Default";
	madera = 5;
	rocas = 2;
	trigo = 7;

}

Warehouse::Warehouse(string nombre, int madera, int rocas, int trigo) : Building(nombre){

	this->madera = madera;
	this->rocas = rocas;
	this->trigo= trigo;
		
	
}

void Warehouse::printResources(){

	cout << "Nombre: " << nombre << endl;
	cout << "Madera: " << madera << endl;
	cout << "Rocas: " << rocas << endl;
	cout << "Trigo: " << trigo << endl;

}

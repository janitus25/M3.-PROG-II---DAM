#include "Cohete.h"

Cohete::Cohete(){
	id = 0;
	destino = "Default";
	distanciaDestino = 0;
	numCapsulas = 0;

	for (int i = 0; i < 10; i++){
		capsulas[i] = nullptr;
	}
}

Cohete::Cohete(int id, string destino, double distanciaDestino, Capsula* capsulas[10]){
	this->id = id;
	this->destino = destino;
	this->distanciaDestino = distanciaDestino;
	numCapsulas = 0;

	for (int i = 0; i < 10; i++){
		this->capsulas[i] = capsulas[i];

		if (capsulas[i] != nullptr){
			numCapsulas++;
		}
	}
}

Cohete::~Cohete(){
	for (int i = 0; i < 10; i++){
		if (capsulas[i] != nullptr){
			delete capsulas[i];
			capsulas[i] = nullptr;
		}
	}
	numCapsulas = 0;
}

void Cohete::AgregarCap(Capsula* cap){
	
	for (int i = 0; i < 10; i++){
		
		if (capsulas[i] == nullptr){
			capsulas[i] = cap;
			numCapsulas++;
			return;
		}
	}
}

void Cohete::EliminarCap(int posicion){

	if (capsulas[posicion] == nullptr){
		return;
	}

	double carga = capsulas[posicion]->getEnergia();

	delete capsulas[posicion];
	capsulas[posicion] = nullptr;
	numCapsulas--;

	Cargar(carga);   // reparte la carga entre las que quedan
}

void Cohete::TransferirCap(int posicion, Cohete* otroCohete){
	
	if (capsulas[posicion] == nullptr || otroCohete->numCapsulas == 10){
		return;
	}

	otroCohete->AgregarCap(capsulas[posicion]);
	capsulas[posicion] = nullptr;
	numCapsulas--;
}

bool Cohete::ValidarViaje(double distancia)
{
	double total = 0;

	for (int i = 0; i < 10; i++){
		if (capsulas[i] != nullptr){
			total += capsulas[i]->getEnergia();
		}
	}

	double necesaria = (distancia / 100000.0) * 10000;

	return total >= necesaria; 
}

void Cohete::Objetivo(string nuevoDestino, double distancia){
	destino = nuevoDestino;
	distanciaDestino = distancia;
}

bool Cohete::Viajar(){
	
	if (destino == "Default" || !ValidarViaje(distanciaDestino)){
		return false;
	}

	double gasto = (distanciaDestino / 100000.0) * 10000;

	for (int i = 0; i < 10; i++){
		
		if (capsulas[i] != nullptr){
			
			double actual = capsulas[i]->getEnergia();

			if (gasto <= actual){
				capsulas[i]->setEnergia(actual - gasto);
				gasto = 0;
			}
			
			else{
				capsulas[i]->setEnergia(0);
				gasto = gasto - actual;
			}
		}
	}

	return true;
}

void Cohete::Cargar(double energia){

	for (int i = 0; i < 10; i++){
		if (capsulas[i] != nullptr){
			double actual = capsulas[i]->getEnergia();
			double libre = capsulas[i]->getCapacidad() - actual;

			if (energia <= libre){
				capsulas[i]->setEnergia(actual + energia);
				energia = 0;
			}
			else{
				capsulas[i]->setEnergia(capsulas[i]->getCapacidad());
				energia = energia - libre;
			}
		}
	}
}

int Cohete::getNumCapsulas(){
	return numCapsulas;
}
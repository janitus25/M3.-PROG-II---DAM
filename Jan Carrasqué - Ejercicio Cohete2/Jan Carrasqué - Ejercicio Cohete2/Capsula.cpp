#include "Capsula.h"

Capsula::Capsula() {
	energia = 0;
	capacidad = 0;
}

Capsula::Capsula(double energia, double capacidad) {
	this->energia = energia;
	this->capacidad = capacidad;
}

Capsula::~Capsula() {
	// No hace falta liberar nada: solo tiene datos simples (double), sin memoria dinámica
}

double Capsula::getEnergia() {
	return energia;
}

double Capsula::getCapacidad() {
	return capacidad;
}

void Capsula::setEnergia(double energia) {
	this->energia = energia;
}
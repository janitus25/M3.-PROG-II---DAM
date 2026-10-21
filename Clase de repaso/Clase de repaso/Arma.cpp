#include "Arma.h"

Arma::Arma() {
	municionMax = 30;
	municion = 10;
	nombre = "Default";
	danyoPorBala = 1;
}

Arma::Arma(int municionMax, string nombre, int danyoPorBala) {
	
	this->municionMax = municionMax;
	this->nombre = nombre;
	this->danyoPorBala = danyoPorBala;
	
}

void Arma::Disparar(){

	cout << "Disparando modo estandar"<<endl;


}

string Arma::GetName(){
	return nombre;
}

int Arma::GetDamage(){
	return danyoPorBala;
}



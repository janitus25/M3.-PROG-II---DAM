#include "Scar.h"

Scar::Scar() : Arma() { //Repasar mas de estos
	Arma(10, "Scar", 30);
}

Scar::Scar(int municionMax, string nombre, int danyoPorBala) : Arma(municionMax, nombre, danyoPorBala) { //Repasar mas de estos
	Arma(10, "Scar", 30);
}

void Scar::Disparar(){

	cout << "Disparando con la Scar" << endl;

}


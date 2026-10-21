#include "Ak.h"

Ak::Ak() : Arma() { //Repasar mas de estos
	Arma(10, "AK", 30);
}

Ak::Ak(int municionMax, string nombre, int danyoPorBala) : Arma(municionMax, nombre, danyoPorBala) {
	
}

void Ak::Disparar(){

	cout << "Disparando en modo AK";

}

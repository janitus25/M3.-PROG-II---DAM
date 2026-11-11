#include "Coche.h"

Coche::Coche(){
	posicion = 0;
}

Coche::Coche(int posicion){

	this->posicion = posicion;
	srand(time(NULL)); //El srand es para que sean semillas distintas, que no siempre gane el mismo
}

void Coche::Moverse(){

	for (int i = 0; i < 4; i++) {
		ruedas[i].RestarDegradacion();
		EstadoVehiculo();
	}

	if (rand() % 3 == 0) {
		posicion += 1;
	}

}

int Coche::GetPosicion(){
	return posicion;
}

void Coche::EstadoVehiculo(){

	for (int i = 0; i < 4; i++) {
		
		if (ruedas[i].GetDegradacion() <= 0) {
			dnf = true;
		}

	}
}

bool Coche::GetDnf(){
	return dnf;
}

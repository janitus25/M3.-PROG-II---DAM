#include "Rueda.h"

Rueda::Rueda(){
	presion = 30;
}

Rueda::Rueda(int presion){

	this->presion = presion;

}

void Rueda::Inflar(int cantidad){

	presion += cantidad;

}

int Rueda::GetPresion(){
	return presion;
}


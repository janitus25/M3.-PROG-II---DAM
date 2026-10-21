#include "Rueda.h"

Rueda::Rueda(){

	presion = 32;

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

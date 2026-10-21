#include "Freno.h"

Freno::Freno(){

	desgaste = 0;

}

Freno::Freno(int desgaste){

	this->desgaste = desgaste;

}

int Freno::Frenar(int velocidad){

	velocidad = velocidad - (20 - desgaste);

	if (velocidad <= 0) {
		return 0;
	}

	else {
		return velocidad;
	}
	
}

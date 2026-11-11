#include "Rueda.h"
#include <stdlib.h>
#include <time.h>


Rueda::Rueda(){

	degradacion = 1;
}

Rueda::Rueda(float degradacion){

	this->degradacion = degradacion;

}

void Rueda::RestarDegradacion(){

	if (rand() % 40 == 0) {
		degradacion = degradacion - 0.1;
	}
}

float Rueda::GetDegradacion(){
	return degradacion;
}


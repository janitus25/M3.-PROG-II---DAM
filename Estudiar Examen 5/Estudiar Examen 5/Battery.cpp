#include "Battery.h"

Battery::Battery(){

	carga = 50;

}

int Battery::getCarga(){
	return carga;
}

void Battery::Descargar(int c){

	carga -= c;

	if (carga <= 0) {
		carga = 0;
	}

}

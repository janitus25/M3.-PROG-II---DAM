#include "Cambio.h"

Cambio::Cambio(){
	marcha = 0;
}

Cambio::Cambio(int marcha){
	this->marcha = marcha;
}

void Cambio::SubirMarcha(){
	if (marcha < 6) {
		marcha++;
	}
}

void Cambio::BajarMarcha(){
	if (marcha > 1) {
		marcha--;
	}
}

int Cambio::GetMarcha(){
	return marcha;
}

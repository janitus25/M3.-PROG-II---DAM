#include "Amortiguador.h"

Amortiguador::Amortiguador(){

	dureza = 5;

}

Amortiguador::Amortiguador(int dureza){

	this->dureza = dureza;

}

int Amortiguador::Absorber(int golpe){

	int resultado = golpe - dureza;

	if (resultado < 0) {
		return 0;
	}

	else {
		return resultado;
	}
	
}

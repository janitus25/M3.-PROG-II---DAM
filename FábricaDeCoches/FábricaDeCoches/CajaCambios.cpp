#include "CajaCambios.h"

CajaCambios::CajaCambios(){
	marcha = 0;
}

CajaCambios::CajaCambios(int marcha){
	this->marcha = marcha;
}

void CajaCambios::SubirMarcha(){

	marcha++;
	if (marcha >= 5) {
		marcha = 5;
	}

}

void CajaCambios::BajarMarcha(){
	marcha--;
	if (marcha <1) {
		marcha = 0;
	}

}

int CajaCambios::GetMarcha(){
	return marcha;
}

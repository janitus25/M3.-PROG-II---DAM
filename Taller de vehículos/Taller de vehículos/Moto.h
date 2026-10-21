#pragma once
#include "Vehiculo.h"

class Moto : public Vehiculo{
	

public:
	Moto();
	Moto(string marca, int potencia);
	void Arrancar() override;
	void HacerCaballito();

};


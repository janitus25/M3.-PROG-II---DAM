#pragma once
#include "Herramienta.h"

class Taladro : public Herramienta{

public:
	Taladro();
	Taladro(string nombre, int peso);
	void Usar() override;
};


#pragma once
#include "Herramienta.h"

class Martillo : public Herramienta{

public:
	Martillo();
	Martillo(string nombre, int peso);
	void Usar() override;
};


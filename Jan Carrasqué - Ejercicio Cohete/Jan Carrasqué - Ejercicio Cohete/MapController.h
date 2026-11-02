#pragma once
#include "Cohete.h"

class MapController {

protected:
	Cohete* nave1;
	Cohete* nave2;
	int x1, y1, x2, y2;

public:
	MapController(Cohete* nave1, Cohete* nave2, int x1, int y1, int x2, int y2);
	void Mostrar();
	void Mover(int nave, char direccion);
	bool Cerca();
	void PreguntarTransferencia();
};
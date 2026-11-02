#pragma once
#include <iostream>
using namespace std;

class MapController {

protected:
	int fila1;
	int col1;
	int fila2;
	int col2;

public:
	MapController();
	MapController(int fila1, int col1, int fila2, int col2);
	~MapController();

	void Mostrar();
	void Mover(int nave, char direccion);
	bool EstanCerca();
};
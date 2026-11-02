#include "MapController.h"

MapController::MapController() {
	fila1 = 0;
	col1 = 0;
	fila2 = 9;
	col2 = 9;
}

MapController::MapController(int fila1, int col1, int fila2, int col2){
	this->fila1 = fila1;
	this->col1 = col1;
	this->fila2 = fila2;
	this->col2 = col2;
}

MapController::~MapController() {
	// No hace falta liberar nada: solo tiene enteros y el mapa es una variable local de Mostrar()
}

void MapController::Mostrar() {

	char mapa[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mapa[i][j] = '.';
		}
	}

	mapa[fila1][col1] = '1';
	mapa[fila2][col2] = '2';

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << mapa[i][j] << " ";
		}
		cout << endl;
	}
}

void MapController::Mover(int nave, char direccion) {

	if (nave != 1 && nave != 2) {
		cout << "Nave no valida" << endl;
		return;
	}

	int fila;
	int col;
	int filaOtra;
	int colOtra;

	if (nave == 1) {
		fila = fila1;
		col = col1;
		filaOtra = fila2;
		colOtra = col2;
	}
	else {
		fila = fila2;
		col = col2;
		filaOtra = fila1;
		colOtra = col1;
	}

	if (direccion == 'w') {
		fila--;
	}
	else if (direccion == 's') {
		fila++;
	}
	else if (direccion == 'a') {
		col--;
	}
	else if (direccion == 'd') {
		col++;
	}

	// No salirse del mapa ni ponerse encima de la otra nave
	if (fila < 0 || fila > 9 || col < 0 || col > 9 || (fila == filaOtra && col == colOtra)) {
		cout << "Movimiento no valido" << endl;
		return;
	}

	if (nave == 1) {
		fila1 = fila;
		col1 = col;
	}
	else {
		fila2 = fila;
		col2 = col;
	}
}

bool MapController::EstanCerca() {

	int difFila = fila1 - fila2;
	int difCol = col1 - col2;

	if (difFila < 0) {
		difFila = -difFila;
	}

	if (difCol < 0) {
		difCol = -difCol;
	}

	return difFila <= 1 && difCol <= 1;
}
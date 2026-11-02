#include "MapController.h"

MapController::MapController(Cohete* nave1, Cohete* nave2, int x1, int y1, int x2, int y2) {
	this->nave1 = nave1;
	this->nave2 = nave2;
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

void MapController::Mostrar(){
	
	for (int i = 0; i < 10; i++){

		for (int j = 0; j < 10; j++){
			
			if (i == y1 && j == x1){
				cout << "1 ";
			}
			
			else if (i == y2 && j == x2){
				cout << "2 ";
			}
			
			else{
				cout << ". ";
			}
		}
		cout << endl;
	}
}

void MapController::Mover(int nave, char direccion){
	int* x = &x1;
	int* y = &y1;

	if (nave == 2){
		x = &x2;
		y = &y2;
	}

	if (direccion == 'w' && *y > 0){
		*y = *y - 1;
	}
	
	else if (direccion == 's' && *y < 9){
		*y = *y + 1;
	}
	
	else if (direccion == 'a' && *x > 0){
		*x = *x - 1;
	}
	else if (direccion == 'd' && *x < 9){
		*x = *x + 1;
	}

	if (Cerca()){
		PreguntarTransferencia();
	}
}

bool MapController::Cerca(){
	
	int dx = x1 - x2;
	int dy = y1 - y2;

	if (dx < 0){
		dx = -dx;
	}
	
	if (dy < 0){
		dy = -dy;
	}

	return dx <= 1 && dy <= 1;
}

void MapController::PreguntarTransferencia(){
	
	char respuesta;
	int origen, pos;

	cout << "Las naves estan cerca. Transferir capsula? (s/n): ";
	cin >> respuesta;

	if (respuesta != 's'){
		return;
	}

	cout << "Desde que nave (1/2): ";
	cin >> origen;
	cout << "Posicion de la capsula (0-9): ";
	cin >> pos;

	if (pos < 0 || pos > 9){
		cout << "Posicion no valida" << endl;
		return;
	}

	if (origen == 1){
		nave1->TransferirCap(pos, nave2);
	}
	
	else{
		nave2->TransferirCap(pos, nave1);
	}
}
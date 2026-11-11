#include "GestorCarrera.h"

GestorCarrera::GestorCarrera(){
		
	for (int i = 20; i >=0; i--) {
		Coche c = Coche(i);
		coches.push_back(c);
	}

	Partida();
}

void GestorCarrera::MoverVehiculos(){

	for (int i = 0; i < coches.size(); i++) {
		coches[i].Moverse();
	}
	
}

void GestorCarrera::ImprimirCarrera(){

	for (int i = 0; i < coches.size(); i++) {
		Imprimir(coches[i]);
		cout<<endl;
	}

}

void GestorCarrera::Imprimir(Coche c){

	for (int i = 0; i < c.GetPosicion() - 1; i++) {
		cout << "-";
	}

	cout << "O";

}

bool GestorCarrera::Partida(){

	bool vehiculos = false;

	while (EstadoPartida() && (vehiculos = VehiculosOk())) {
		MoverVehiculos();
		ImprimirCarrera();
		Sleep(100);
		system("cls");
	}

	if (vehiculos==false) {
		cout << "Carrera continua en 2 segundos\n";
		Sleep(2000);
		Partida();
	}

	return false;
}

bool GestorCarrera::EstadoPartida(){

	for (int i = 0; i < coches.size(); i++) {

		if (coches[i].GetPosicion() > 100) {
			return false;
		}

	}

	return true;
}

bool GestorCarrera::VehiculosOk(){

	for (int i = 0; i < coches.size(); i++) {

		if (coches[i].GetDnf()) {
			cout << "Carrera pausada por DNF, vehiculo = " << i << endl;
			coches.erase(coches.begin() + i);
			return false;
		}
	}
}

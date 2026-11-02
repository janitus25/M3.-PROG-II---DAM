#include <iostream>
#include <string>
#include "Cohete.h"
#include "Capsula.h"
#include "MapController.h"
using namespace std;

Cohete* Elegir(Cohete* c1, Cohete* c2)
{
	int n;
	cout << "Cohete (1/2): ";
	cin >> n;

	if (n == 1)
	{
		return c1;
	}
	return c2;
}

int main()
{
	Cohete cohete1;
	Cohete cohete2;
	Capsula* cap;
	MapController mapa(&cohete1, &cohete2, 0, 0, 9, 9);

	int op, pos, nave;
	double energia, distancia, capacidad;
	string destino;
	char dir;
	Cohete* c;
	Cohete* otro;

	do
	{
		cout << endl;
		cout << "1) Crear capsula y anadirla a un cohete" << endl;
		cout << "2) Eliminar capsula" << endl;
		cout << "3) Transferir capsula entre cohetes" << endl;
		cout << "4) Cargar energia a un cohete" << endl;
		cout << "5) Determinar destino de un cohete" << endl;
		cout << "6) Lanzar un cohete" << endl;
		cout << "7) Mover naves por el mapa" << endl;
		cout << "0) Salir" << endl;
		cin >> op;

		switch (op){

		case 1:
			c = Elegir(&cohete1, &cohete2);
			
			if (c->getNumCapsulas() == 10){
				cout << "Cohete lleno" << endl;
			}
			
			else{
				cout << "Capacidad de la capsula: ";
				cin >> capacidad;
				cap = new Capsula(0, capacidad);
				c->AgregarCap(cap);
			}
			break;

		case 2:
			c = Elegir(&cohete1, &cohete2);
			cout << "Posicion (0-9): ";
			cin >> pos;
			
			if (pos < 0 || pos > 9){
				cout << "Posicion no valida" << endl;
			}
			else{
				c->EliminarCap(pos);
			}
			break;

		case 3:
			c = Elegir(&cohete1, &cohete2);
			if (c == &cohete1){
				otro = &cohete2;
			}
			else{
				otro = &cohete1;
			}
			cout << "Posicion (0-9): ";
			cin >> pos;
			if (pos < 0 || pos > 9){
				cout << "Posicion no valida" << endl;
			}
			else{
				c->TransferirCap(pos, otro);
			}
			break;

		case 4:
			c = Elegir(&cohete1, &cohete2);
			cout << "Energia a cargar: ";
			cin >> energia;
			c->Cargar(energia);
			break;

		case 5:
			c = Elegir(&cohete1, &cohete2);
			cout << "Destino: ";
			cin >> destino;
			cout << "Distancia (km): ";
			cin >> distancia;
			c->Objetivo(destino, distancia);
			break;

		case 6:
			c = Elegir(&cohete1, &cohete2);
			if (c->Viajar()){
				cout << "Viaje realizado" << endl;
			}
			
			else{
				cout << "No se puede viajar" << endl;
			}
			break;

		}

	} while (op != 0);

	return 0;
}
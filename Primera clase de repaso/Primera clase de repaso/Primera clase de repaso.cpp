#include <iostream>
#include "NPC_Capibara.h"
using namespace std;

void GenerarNombres(string _name[5]);
string Nombre();

void Combate(NPC_Capibara cap1, NPC_Capibara cap2);

int main() {

	string name[5];
	GenerarNombres(name);

	NPC_Capibara capis[5];

	for (int i = 0; i < 5; i++) {
		capis[i].SetAllAttributes(name[i], 10, 100, 0);
	}

	Combate(capis[0], capis[1]);
}

void GenerarNombres(string _name[5]) {

	for (int i = 0; i < 5; i++) { 
		_name[i] = Nombre();
	}

}

void Combate(NPC_Capibara cap1, NPC_Capibara cap2) {
	
	cout << "Ataque realizado por capibara: " << cap1.GetName() << endl;
	cap2.RestarVida(cap1.AplicarAtaque());
	cout << "Vida del capibara: "<<cap2.GetName() <<" :"<< cap2.GetVida();
}


string Nombre() {
	cout << "Dime nombre: ";
	string nombre;
	cin >> nombre;
	return nombre;
}


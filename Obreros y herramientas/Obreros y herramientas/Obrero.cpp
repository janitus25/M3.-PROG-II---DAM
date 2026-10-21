#include "Obrero.h"

Obrero::Obrero(){
	nombre = "Default";
	energia = 0;
	herramienta = nullptr; //Esto quiere deicir que todavia no tiene herramienta
	posicion[0] = 0;
	posicion[1] = 0;
}

Obrero::Obrero(string nombre, Herramienta* herramienta){

	this->nombre = nombre;
	this->herramienta = herramienta;
	energia = 100;
	posicion[0] = 0;
	posicion[1] = 0;

}

void Obrero::Moverse(int d[2]){

	posicion[0] += d[0];
	posicion[1] += d[1];

	cout << "Moviendose a (" << posicion[0] << ", " << posicion[1] << ")" << endl;
}

void Obrero::Trabajar(){
	herramienta->Usar();
}

void Obrero::Cansarse(Herramienta h){

	energia -= (h.GetPeso() * 2);

	if (energia <= 0) {
		energia = 0;
		cout << "Obrero agotado"<<endl;
	}

	else {
		cout << "Energia: " << energia << endl;
	}

}

Herramienta Obrero::GetHerramienta(){
	return *herramienta;
}

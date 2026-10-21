#include "Martillo.h"

Martillo::Martillo() : Herramienta() {
	nombre = "Martillo";
	peso = 5;
}

Martillo::Martillo(string nombre, int peso) : Herramienta(nombre, peso) {
	
}

void Martillo::Usar(){
	cout << "Martillando"<<endl;
}

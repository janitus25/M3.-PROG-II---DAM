#include "Taladro.h"

Taladro::Taladro() : Herramienta() {
	nombre = "Taladro";
	peso = 8;
}

Taladro::Taladro(string nombre, int peso) : Herramienta(nombre, peso) {

}

void Taladro::Usar(){
	cout << "Taladrando" << endl;
}

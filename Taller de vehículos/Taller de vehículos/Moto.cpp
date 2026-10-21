#include "Moto.h"

Moto::Moto() {

	marca = "Honda";
	potencia = 50;

}

Moto::Moto(string marca, int potencia) : Vehiculo(marca, potencia) {

}

void Moto::Arrancar(){

	cout << "Arrancando moto"<<endl;

}

void Moto::HacerCaballito(){

	cout << "La moto esta haciendo un caballito";
}

#include "Coche.h"

Coche::Coche(){

	marca = "Ferrari";
	potencia = 500;

}

Coche::Coche(string marca, int potencia) : Vehiculo(marca, potencia){

}

void Coche::Arrancar(){

	cout << "Arrancando coche" << endl;

}

int Coche::Acelerar(){
	cambio.SubirMarcha();
	
	return potencia * cambio.GetMarcha();
}

void Coche::InflarRuedas(int cantidad){

	for (int i = 0; i < 4; i++) {
		ruedas[i].Inflar(cantidad);
	}
}

void Coche::Frenar(int velocidad) {

	freno.Frenar(velocidad);

}

void Coche::MostrarInfo(){

	cout << "Marca: " << marca<<endl;
	cout << "Potencia: " << potencia<<endl;
	cout << "Marcha: " << cambio.GetMarcha()<<endl;
	cout << "Presión de una rueda: " << ruedas[0].GetPresion() << endl;

}


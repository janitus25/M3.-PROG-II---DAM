#include "Coche.h"
Coche::Coche(string nombre, Motor* motor)
{
	this->nombre = nombre;
	this->motor = motor;
}

void Coche::Arrancar()
{
	motor->Arrancar();
}

int Coche::Acelerar()
{
	caja.SubirMarcha();
	return motor->GetPotencia() * caja.GetMarcha() / 10;
}

void Coche::InflarRuedas(int cantidad)
{
	for (int i = 0; i < 4; i++) {
		ruedas[i].Inflar(cantidad);
	}
}

void Coche::Bache(int golpe)
{
	int resultado = amortiguador.Absorber(golpe);
	cout << "Golpe que llega al coche: " << resultado << endl;
}

void Coche::PrintCoche()
{
	cout << "Coche: " << nombre << endl;
	cout << "Marcha: " << caja.GetMarcha() << endl;
	cout << "Presion de las ruedas: " << ruedas[0].GetPresion() << endl;
}
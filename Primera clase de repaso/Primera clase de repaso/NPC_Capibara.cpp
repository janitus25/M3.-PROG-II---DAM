#include "NPC_Capibara.h"

void NPC_Capibara::SetAllAttributes(string _name, int _edad, int _vida, int _rondas) {
	name = _name;
	edad = _edad;
	vida = _vida;
	rondas = _rondas;
}
	
void NPC_Capibara::RestarVida(int cantidad){
	vida -= cantidad;

	if (GestionarVida()) {
		cout << "Estas Muerto NPC\n";
	}

	else {
		if (GestionarEdad()) {
			edad += 1;
		}

		else {
			cout << "No aumentas de edad\n";
		}
	}
}

bool NPC_Capibara::GestionarVida()
{
	return vida <=0;
}

int NPC_Capibara::GestionarEdad()
{
	return vida >80;
}

int NPC_Capibara::GestionarRondas()
{
	return 0;
}

int NPC_Capibara::AplicarAtaque(){

	int cantidad;

	cout << "Cuanto daño quieres hacerle? ";
	cin >> cantidad;
	return cantidad;
}

string NPC_Capibara::GetName()
{
	return name;
}

int NPC_Capibara::GetVida()
{
	return vida;
}

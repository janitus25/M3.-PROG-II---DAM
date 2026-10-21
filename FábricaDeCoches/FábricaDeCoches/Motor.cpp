#include "Motor.h"

Motor::Motor(){

	potencia = 50;
	cilindros = 1;

}

Motor::Motor(int potencia, int cilindros){
	this->potencia = potencia;
	this->cilindros = cilindros;
}

void Motor::Arrancar(){
	cout << "Arrancando motor generico";
}

int Motor::GetPotencia(){
	return potencia;
}

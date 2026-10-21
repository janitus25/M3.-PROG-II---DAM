#include "Motor.h"

//Constructor
Motor::Motor(){

	estado = 1;
	porcentaje_degradacion = 0;
}

void Motor::Acelerar(float porcentaje){ //Esta funcion llama a la funcion de Ajustarpotencia

	cout << "Acelerando un : "<<porcentaje<<"%\n";
	AjustarPorcentaje(porcentaje);
}

void Motor::AjustarPorcentaje(float porcentaje){

	float resultado = porcentaje * 0.02;
	porcentaje_degradacion = porcentaje_degradacion - resultado; //Hacemos un cast a int


}

float Motor::GetDegradacion() const{ //Metemos const porque es constante y para que nunca pueda modificarse
	return porcentaje_degradacion;
}

void Motor::SetMotores(int _estado, int _porcentaje){

	estado = _estado;
	porcentaje_degradacion = _porcentaje;
}

void Motor::Frenar(float porcentaje){

	cout << "El robot esta frenando" << porcentaje << endl;
	AjustarPorcentaje(porcentaje);
}

void Motor::AjustarEstado(int _estado){

	cout << "El estado del torque se ha ajustado";
	estado = _estado;

}


#pragma once
#include "Motor.h" //El nombre de la clase siempre en singular
class Vex{
private:
	Motor motoresDelante; //Composicion
	Motor motoresDetras;

public:
	Vex();
	Vex(Motor _motoresDelante, Motor _motoresDetras) : motoresDelante(_motoresDelante), motoresDetras(_motoresDetras) {};

	void Frenar(float porcentaje);
	void Acelerar(float porcentaje);
	void MostrarEstadoDelRobot();
	void ModificarMotores(int posicion, int estado, int porcentaje);
	void ModificarEstado(int _estado, int motorPos);
};


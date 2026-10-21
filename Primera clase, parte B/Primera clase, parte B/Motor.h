#pragma once
#include <iostream>
using namespace std;

class Motor{

private:
	int estado;
	float porcentaje_degradacion;

public: //Esto que va aqui dentro son los metodos, primero se pasan los constructores, que no necesitan variable delante 
	Motor(); //Constructor por omision
	Motor(int _estado, float _porcentaje_degradacion) : estado(_estado), porcentaje_degradacion(_porcentaje_degradacion) {}; // Constructor por parametros
	
	void Acelerar(float porcentaje);
	void AjustarPorcentaje(float porcentaje);
	float GetDegradacion()const;
	void SetMotores(int _estado, int _porcentaje);
	void Frenar(float porcentaje);
	void AjustarEstado(int _estado);
};


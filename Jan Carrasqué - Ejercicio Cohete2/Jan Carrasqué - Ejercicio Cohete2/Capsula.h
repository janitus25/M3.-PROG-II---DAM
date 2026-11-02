#pragma once
class Capsula {

protected:
	double energia = 0;
	double capacidad = 0;

public:
	Capsula();
	Capsula(double energia, double capacidad);
	~Capsula();

	double getEnergia();
	double getCapacidad();
	void setEnergia(double energia);
};
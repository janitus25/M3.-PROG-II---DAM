#pragma once
class Rueda{

private:
	int presion;

public:
	Rueda();
	Rueda(int presion);
	void Inflar(int cantidad);
	int GetPresion();
};


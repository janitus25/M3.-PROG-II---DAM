#pragma once
class Freno{

private:
	int desgaste;

public:
	Freno();
	Freno(int desgaste);
	virtual int Frenar(int velocidad);

};


#pragma once
class CajaCambios{

private:
	int marcha=0;

public:
	CajaCambios();
	CajaCambios(int marcha);
	void SubirMarcha();
	void BajarMarcha();
	int GetMarcha();
};


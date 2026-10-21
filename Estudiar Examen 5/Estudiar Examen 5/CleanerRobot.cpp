#include "CleanerRobot.h"

CleanerRobot::CleanerRobot(string nombre) : Robot(nombre){
	
}

int CleanerRobot::Limpiar(int m){
	if (getBateria() >= m) {

		bateria.Descargar(m);
		metros += m;

		return m;
	}

	else {
		return 0;
	}
	
}

int CleanerRobot::getBateria(){
	return bateria.getCarga();
}

void CleanerRobot::printCleaner(){
	cout << "Nombre: " << nombre << endl;
	cout << "Metros limpiados: " << metros << endl;
	cout << "Carga bateria: " << bateria.getCarga() << endl;
}

#include "NPC.h"

void NPC::MostrarDatos(){
	cout << "Nombre: " << nombre<<endl;
	cout << "edad: " << edad << endl;
	cout << "Frase: " << textos[dialgoPos];
}

void NPC::IntroducirDatos(string _nombre, int _edad, int _dialogoPos, string _textos[]){

	nombre = _nombre;
	edad = _edad;
	dialgoPos = _dialogoPos;

	for (int i = 0; i < 10; i++) {
		textos[0] = _textos[0];
	}
	

}

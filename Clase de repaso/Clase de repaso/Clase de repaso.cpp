#include "Ak.h"
#include "Scar.h"
#include "Personaje.h"
#include "Arma.h"


int main(){

	Ak ak1 = Ak();
	Ak ak2 = Ak();
	Ak ak3 = Ak();

	Personaje personaje1;
	Personaje personaje2;
	
	personaje1.RecibirDanyo(personaje2.GetArma());
	personaje2.RecibirDanyo(personaje1.GetArma());

	//Personaje 1 le haga daño al 1 y el 2 al 1
}

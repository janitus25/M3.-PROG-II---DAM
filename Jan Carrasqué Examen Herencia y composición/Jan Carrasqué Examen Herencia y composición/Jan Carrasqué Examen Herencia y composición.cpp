#include "Vehiculo.h"
#include "Moto.h"
#include "Coche.h"
#include "Garaje.h"



int main(){
 

	Coche coche ("Mercedes", 120, 4);
	Moto moto("Yamaha", 68, true);
	Garaje garaje;

	garaje.modificarVehiculo("Coche", 70, 4, false);
	garaje.mostrarvehiculo();
	
	garaje.modificarVehiculo("moto", 50, 0, true);
	garaje.mostrarvehiculo();

}

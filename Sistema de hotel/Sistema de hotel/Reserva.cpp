#include "Reserva.h"

Reserva::Reserva(){


}

Reserva::Reserva(string nombre, int cantidadNoches, int numeroHab, float precio) : cliente(nombre, cantidadNoches), habitacion(numeroHab, precio){



}

float Reserva::PrecioTotal(){
	return habitacion.ConsultarPrecioHab() * cliente.GetNights();
}

void Reserva::MostrarInformacion(){

	cout << "Nombre: " << cliente.GetName()<<endl;
	cout << "Cantidad de noches: " << cliente.GetNights()<<endl;
	cout << "Numero de habitaciones: " << habitacion.ConsultarNumeroHab()<<endl;
	cout << "Precio: " << habitacion.ConsultarPrecioHab()<<endl;

}

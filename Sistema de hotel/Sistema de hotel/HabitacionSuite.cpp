#include "HabitacionSuite.h"

HabitacionSuite::HabitacionSuite()
    : Habitacion()
{
}

HabitacionSuite::HabitacionSuite(int numeroHab, float precio): Habitacion(numeroHab, precio){

}

float HabitacionSuite::AñadirSuplemento()
{
    return precio + 50;
}
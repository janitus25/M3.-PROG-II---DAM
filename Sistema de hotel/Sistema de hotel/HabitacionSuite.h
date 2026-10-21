#pragma once
#include "Habitacion.h"

class HabitacionSuite : public Habitacion
{
public:
    HabitacionSuite();
    HabitacionSuite(int numeroHab, float precio);

    float AñadirSuplemento();
};
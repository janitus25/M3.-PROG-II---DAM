#include "sJuego.h"
#include "NPC.h"

int main() {

    NPC npc1;
    string textos[10] = {"Hola que tal, cuidado con Prog2"};
    npc1.IntroducirDatos("Pepe", 20, 0, textos);
    npc1.MostrarDatos();
}
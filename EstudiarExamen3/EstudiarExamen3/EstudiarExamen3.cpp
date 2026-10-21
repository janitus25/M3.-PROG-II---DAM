#include <iostream>
using namespace std;
#include "Mage.h"
#include "Warrior.h"
#include "Character.h"
#include "Weapon.h"


int main(){
    
    Warrior w("Conan", 100, 5);
    Mage m("Merlin", 80, 30);

    w.printWarrior();
    m.printMage();

    while (w.EstaVivo() == true && m.EstaVivo() == true) {

        //Llamadas anidadas
        m.RecibirDanyo(w.Atacar()); //"Merlin recibe daño, y ese daño es el número que devuelve el ataque de Conan"

        if (m.EstaVivo() == true) {
            w.RecibirDanyo(m.LanzarHechizo()); //Conan recibe daño, y ese daño es el número que devuelve el hechizo de Merlin
        }

        cout<<w.getVida() << endl;
        cout<<m.getVida() << endl;
    }

    if (w.EstaVivo() == true) {
        cout << "Ha ganado Conan" << endl;
    }

    else {
        cout << "ha ganado Merlin" << endl;
    }

}

//Meterle habilidades tipo 1, 2 y 3 composicion y la misma logica
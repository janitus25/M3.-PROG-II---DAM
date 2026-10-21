#include "Animal.h"
#include "Dog.h"

int main(){

    Dog d("Rex", 12, 3);
    
    d.printDog();

    while (d.getEnergia() > 0) {
        d.GastarEnergia(d.Ladrar() * 2);
        cout << "Energia: " << d.getEnergia() << endl;
    }

}

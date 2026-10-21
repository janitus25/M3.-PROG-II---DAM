#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Truck.h"


int main(){
    Motorcycle m("Honda", 125, false);
    Car c("Ferrari", 4, 350, 25000);
    Truck t("Mercedes",5000, "2026GHJ");

    c.Recorrer(100);

    cout << "--" << m.getMarca()<< "--" << endl;
    m.printMotorcycle();
    cout << "--" << c.getMarca() << "--"<<endl;
    c.printCar();
    cout << "--" << t.getMarca() << "--"<<endl;
    t.printTruck();
}

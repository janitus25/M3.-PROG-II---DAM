#include <iostream>
using namespace std;
#include "Building.h"
#include "Warehouse.h"
#include "Templo.h"
#include "House.h"


int main(){

    Warehouse w("East Warehouse", 10, 20, 30);
    House h("Agripa's House", 2, 5, 10);
    Templo t("Mercury's Temple", "Mercury", 3);

    cout << "Warehouse name: " << w.getName() << endl<<endl;

    cout << endl << "--" << w.getName() << "--" << endl;
    w.printResources();


    cout <<endl << "--" << h.getName() << "--" << endl;
    h.printHouse();

    cout << endl << "--" << t.getName() << "--" << endl;
    t.printTemple();
    cout << endl;

    system("pause");
    return 0;
}
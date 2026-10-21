#include <iostream>
#include "Building.h"
#include "Warehouse.h"

int main()
{
    Warehouse w("Paco", 7,8,9);

    cout << "Warehouse name : " << w.getName()<<endl <<endl;

    w.printResources();
}

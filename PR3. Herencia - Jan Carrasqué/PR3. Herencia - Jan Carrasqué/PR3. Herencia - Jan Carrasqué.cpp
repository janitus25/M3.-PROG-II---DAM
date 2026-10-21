#include "Building.h"
#include "Edificio.h"
int main()
{
    Warehouse w("East Warehouse", 10, 20, 30);
    House h("Agripa's house", 2,5, 10);
    Templo t ("Mercury's Temple", "Mercury",3);
    
    cout << "Warehouse name: " << w.getName() << endl << endl;

    w.printResources();
    h.printResources();
    t.printResources();

    system("pause");
    return 0;
}


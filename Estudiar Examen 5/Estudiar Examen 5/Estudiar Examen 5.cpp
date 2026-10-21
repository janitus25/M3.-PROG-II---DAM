#include <iostream>
using namespace std;
#include "Robot.h"
#include "Battery.h"
#include "CleanerRobot.h"
#include "GuardRobot.h"


int main(){

    CleanerRobot c("Roomba");
    GuardRobot g("Rex", 3);

    c.printCleaner();

    while (c.Limpiar(20)>0){
        c.printCleaner();
    }

    while (g.vigilar()== true) {
        cout << "Alarma de: " << g.getName() << endl;
    }
}

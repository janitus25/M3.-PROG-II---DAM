#include "Capsula.h"
#include "Cohete.h"
#include "MapController.h"


int main() {

    Cohete cohete1;
    Cohete cohete2;
    MapController mapa;

    Capsula* cap = nullptr;
    Cohete* elegido = nullptr;
    Cohete* otro = nullptr;

    int accion = 0;
    int numCohete = 0;
    int posicion = 0;
    double energia = 0;
    double capacidad = 0;
    double distancia = 0;
    string destino;
    char direccion;
    char respuesta;

    do {
        cout << endl;
        cout << "1) Crear capsula y anadirla a un cohete" << endl;
        cout << "2) Eliminar capsula" << endl;
        cout << "3) Transferir capsula entre cohetes" << endl;
        cout << "4) Cargar energia a un cohete" << endl;
        cout << "5) Determinar destino de un cohete" << endl;
        cout << "6) Lanzar cohete" << endl;
        cout << "7) Mover nave por el mapa" << endl;
        cout << "8) Salir" << endl;
        cin >> accion;

        if (accion >= 1 && accion <= 6) {
            cout << "Que cohete (1 o 2)? ";
            cin >> numCohete;

            if (numCohete == 1) {
                elegido = &cohete1;
                otro = &cohete2;
            }
            else if (numCohete == 2) {
                elegido = &cohete2;
                otro = &cohete1;
            }
            else {
                cout << "Cohete no valido" << endl;
                continue;
            }
        }

        switch (accion) {

        case 1:
            if (elegido->getNumCapsulas() == 10) {
                cout << "El cohete esta lleno" << endl;
            }
            else {
                cout << "Energia: ";
                cin >> energia;
                cout << "Capacidad: ";
                cin >> capacidad;

                cap = new Capsula(energia, capacidad);
                elegido->AgregarCap(cap);
            }
            break;

        case 2:
            cout << "Posicion de la capsula (0-9): ";
            cin >> posicion;
            elegido->EliminarCap(posicion);
            break;

        case 3:
            cout << "Posicion de la capsula a transferir (0-9): ";
            cin >> posicion;
            elegido->TransferirCap(posicion, otro);
            break;

        case 4:
            cout << "Energia a cargar: ";
            cin >> energia;
            elegido->Cargar(energia);
            break;

        case 5:
            cout << "Destino: ";
            cin >> destino;
            cout << "Distancia: ";
            cin >> distancia;
            elegido->Objetivo(destino, distancia);
            break;

        case 6:
            if (elegido->Viajar()) {
                cout << "El cohete ha llegado a su destino" << endl;
            }
            else {
                cout << "No se puede hacer el viaje (sin destino o sin energia)" << endl;
            }
            break;

        case 7:
            cout << "Que nave mover (1 o 2)? ";
            cin >> numCohete;
            cout << "Direccion (w arriba, s abajo, a izquierda, d derecha): ";
            cin >> direccion;

            mapa.Mover(numCohete, direccion);
            mapa.Mostrar();

            if (mapa.EstanCerca()) {
                cout << "Las naves estan cerca. Quieres transferir una capsula? (s/n): ";
                cin >> respuesta;

                if (respuesta == 's') {
                    cout << "Desde que cohete (1 o 2)? ";
                    cin >> numCohete;
                    cout << "Posicion de la capsula a transferir (0-9): ";
                    cin >> posicion;

                    if (numCohete == 1) {
                        cohete1.TransferirCap(posicion, &cohete2);
                    }
                    else {
                        cohete2.TransferirCap(posicion, &cohete1);
                    }
                }
            }
            break;

        default:
            cout << "Numero no valido";
            break;
        }
    } while (accion != 8);

}
#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n--- NEXUS ACADEMY ---\n";
        cout << "1. Buscar alumno\n";
        cout << "2. Top 5 alumnos\n";
        cout << "3. Alumnos en riesgo\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1) {
            int id;
             cout << "Ingrese ID: ";
             cin >> id;

             cout << "Buscando alumno con ID: " << id << endl;
        }


    } while(opcion != 4);

    return 0;
}
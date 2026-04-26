#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "--- NEXUS ACADEMY ---"<<endl;
        cout << "1. Buscar alumno"<<endl;
        cout << "2. Top 5 alumnos"<<endl;
        cout << "3. Alumnos en riesgo"<<endl;
        cout << "4. Salir"<<endl;
        cout << "Opcion: "<<endl;
        cin >> opcion;
        if(opcion == 1) {
            int id;
            cout << "Por favor ingrese ID: ";
            cin >> id;

            cout << "Buscando alumno con ID: " << id << endl;
        }

    } while(opcion != 4);

    return 0;
}
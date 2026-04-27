#include <iostream>
#include <string>
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"

using namespace std;

int main() {
    MYSQL *conn;
    conn = mysql_init(0);

if (!mysql_real_connect(conn, "localhost", "root", "minyoongi<3<13", "nexus_academy", 3306, NULL, 0)) {
    cout << "Error de conexion: " << mysql_error(conn) << endl;
    return 1;
}

cout << "Conexion exitosa\n";
   
    int opcion;

    do {
        cout << "--- NEXUS ACADEMY ---"<<endl;
        cout << "1. Buscar alumno"<<endl;
        cout << "2. Top 5 alumnos"<<endl;
        cout << "3. Alumnos en riesgo"<<endl;
        cout << "4. Actualizar nota"<<endl;
        cout << "5. Cambiar nota"<<endl;
        cout << "6. Salir"<<endl;
        cout << "Opcion: "<<endl;
        cin >> opcion;

        if(opcion == 1) {
    int id;
    cout << "Ingrese ID: ";
    cin >> id;

    string query = "SELECT * FROM alumnos WHERE id = " + to_string(id);

    if(mysql_query(conn, query.c_str())) {
        cout << "Error: " << mysql_error(conn) << endl;
    } else {
        MYSQL_RES *res = mysql_store_result(conn);
        MYSQL_ROW row = mysql_fetch_row(res);

        if(row != NULL) {
            cout << "Nombre: " << row[1] << " " << row[2] << endl;
            cout << "Celular: " << row[3] << endl;
            cout << "Nota final: " << row[4] << endl;
        } else {
            cout << "Alumno no encontrado\n";
        }
    }
}
        else if(opcion == 2) {
    string query = "SELECT * FROM alumnos ORDER BY nota_final DESC LIMIT 5";

    if(mysql_query(conn, query.c_str())) {
        cout << "Error: " << mysql_error(conn) << endl;
    } else {
        MYSQL_RES *res = mysql_store_result(conn);
        MYSQL_ROW row;

        cout << "TOP 5 ALUMNOS:"<<endl;

        while((row = mysql_fetch_row(res))) {
            cout << row[1] << " " << row[2] 
                 << " - Nota: " << row[4] << endl;
        }
    }
}
       else if(opcion == 3) {
    string query = "SELECT * FROM alumnos WHERE nota_final < 4";

    if(mysql_query(conn, query.c_str())) {
        cout << "Error: " << mysql_error(conn) << endl;
    } else {
        MYSQL_RES *res = mysql_store_result(conn);
        MYSQL_ROW row;

        cout << "ALUMNOS EN RIESGO:\n";

        while((row = mysql_fetch_row(res))) {
            cout << row[1] << " " << row[2] 
                 << " - Nota: " << row[4] << endl;
        }
    }
}
        else if(opcion == 4) {
    int id;
    float nuevaNota;

    cout << "Ingrese ID: ";
    cin >> id;

    cout << "Nueva nota: ";
    cin >> nuevaNota;

    string query = "UPDATE alumnos SET nota_final = " 
                   + to_string(nuevaNota) +
                   " WHERE id = " + to_string(id);

    if(mysql_query(conn, query.c_str())) {
        cout << "Error: " << mysql_error(conn) << endl;
    } else {
        cout << "Nota actualizada correctamente\n";
    }
}
else if(opcion == 5) {
    int id;
    string celular;

    cout << "Ingrese ID: ";
    cin >> id;

    cout << "Nuevo celular: ";
    cin >> celular;

    string query = "UPDATE alumnos SET celular = '" 
                   + celular + 
                   "' WHERE id = " + to_string(id);

    if(mysql_query(conn, query.c_str())) {
        cout << "Error: " << mysql_error(conn) << endl;
    } else {
        cout << "Celular actualizado\n";
    }
}

    } while(opcion != 6);
    mysql_close(conn);
    return 0;
}
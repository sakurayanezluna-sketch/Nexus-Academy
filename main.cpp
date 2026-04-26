#include <iostream>
#include <mysql.h>

using namespace std;
int main() {
    MYSQL *conn;


    conn = mysql_init(NULL);

    if (conn == NULL) {
        cout << "Error inicializando MySQL" << endl;
        return 1;
    }

    // Pedir contraseña (IMPORTANTE)
    string password;
    cout << "Ingrese su contraseña de MySQL: ";
    cin >> password;

    cout << "Intentando conectar..." << endl;


    if (!mysql_real_connect(conn, "localhost", "root", password.c_str(), "nexus", 3306, NULL, 0)) {
        cout << "Error de conexion: " << mysql_error(conn) << endl;
        return 1;
    }

    cout << "CONEXION EXITOSA" << endl;
    mysql_close(conn);

    return 0;
}
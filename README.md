Nexus Academy - Configuración rápida
Requisitos
Tener MySQL Server instalado
Tener g++ (compilador C++)
Tener MySQL Workbench (opcional)
🗄 Paso 1: Crear la base de datos

Abrir MySQL Workbench y ejecutar:

database.sql

Paso 2: Configurar el código

En main.cpp, asegúrate de poner:
Usuario: root (o el tuyo)
Contraseña: tu contraseña de MySQL
Base de datos: nexus

Paso 3: Compilar

Ejecutar en terminal:

g++ main.cpp -o main.exe -I"C:/Program Files/MySQL/MySQL Server 9.7/include" -L"C:/Program Files/MySQL/MySQL Server 9.7/lib" -lmysql

Cambiar RUTA según donde esté instalado MySQL en tu PC

Paso 4: Ejecutar

./main.exe

Notas
No se incluyen archivos .exe ni .dll
Si da error, copiar libmysql.dll a la carpeta del proyecto, deberia esta en esta ruta
"C:\Program Files\MySQL\MySQL Server 9.7\lib"
Cada computadora puede tener rutas diferentes o versiones diferentes de MySQL server
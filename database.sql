CREATE DATABASE IF NOT EXISTS nexus;
USE nexus;

CREATE TABLE IF NOT EXISTS alumnos (
    id INT PRIMARY KEY,
    nombre VARCHAR(50),
    apellido VARCHAR(50),
    celular VARCHAR(20),
    nota_final DECIMAL(3,1)
);

INSERT INTO alumnos VALUES
(1, 'Juan', 'Perez', '78945612', 7.5),
(2, 'Ana', 'Lopez', '71234567', 8.2),
(3, 'Carlos', 'Rojas', '74561238', 3.5),
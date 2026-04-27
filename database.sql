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
(4,	'Maria', 'Diaz','777444','9.00'),
(5,	'Carlos,	Vega',	'777555',	'2.50'),
(6,	'Elena, García',	'72104569',	'4.20'),
(7,	'Marcos',	'Torres',	'65482130',	'2.80'),
(8,	'Sofía',	'Méndez',	'70012544',	'5.00'),
(9,	'Ricardo',	'Luna',	'61234567',	'3.90'),
(10,'Lucía','Vaca',	'78951230',	'4.70'),
(11,'Fernando',	'Soto',	'60021487',	'3.10'),
(12,'Valeria',	'Prado',	'71155882',	'4.50'),
(13,'Julieta',	'Ortega',	'62233445',	'4.80'),
(14,'Adrián',	'Castillo',	'70558899',	'2.50'),
(15,'Paola',	'Guzmán',	'69911223',	'3.70');
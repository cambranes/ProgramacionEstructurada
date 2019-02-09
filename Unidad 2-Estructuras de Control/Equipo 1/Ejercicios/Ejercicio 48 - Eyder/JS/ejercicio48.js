/*
Ejercicio 48 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1

Autor: Eyder Antonio Concha Moreno
Fecha: 5 de Febrero 2019
Entradas: sueldo base, antiguedad en la empresa
Salidas: Incentivo, sueldo total y sueldo base, o error por entradas incorrectas

---------------------------------------
Instrucción:
Una compañía efectúa cálculos para su reparto de utilidades. 
En esta ocasión añadirá un pequeño incentivo de acuerdo a la antigüedad de sus empleados. 
Se sabe que la compañía lleva 15 años trabajando y el incentivo se dará de acuerdo al número de años laborados
según la información siguiente: 

| Antiguedad |             | % de sobresueldo |
|:----------:|:-----------:|:----------------:|
| De         | A           |                  |
| 1          | 3           |        1%        |
| 4          | 6           |        3%        |
| 7          | 9           |        5%        |
| 10         | En adelante |        7%        |

Escribe el programa que lea el sueldo del empleado y su antigüedad y que calcule su incentivo, imprimiendo
su sueldo base, el incentivo y el sueldo a pagar. Suponer que no se conoce el número de empleados.
---------------------------------------

Procedimiento General:
---------------------------------------
1.-Preguntamos el número de años de antiguedad
2.-Preguntamos antiguedad del empleado
3.-Verificamos si los datos ingresados son válidos
4.-Con su antiguedad, determinamos el porcentaje a otorgar
5.-Definimos el incentivo con el porcentaje obtenido
6.-Calculamos el sueldo total
7.-Asignamos un mensaje de salida de acuerdo a lo escrito por el usuario
---------------------------------------
*/

/*Entradas*/

// Variables cuyo valor otorgará el usuario
let sueldoBase;
let antiguedad;

// Variables utilizadas para calcular el sueldo total
let porcentajeIncentivo;
let incentivo
let sueldoTotal;

// Variables utilizadas para validar las entradas
let cantidadValida;
let mensaje;

/*Procedimiento*/

// Recibimos valores por el usuario
sueldoBase = parseFloat(prompt('¿Cuál es el sueldo base?'));
antiguedad = prompt('¿Cuántos años ha laborado en la empresa?'); 

cantidadValida = true;

//Comprobamos si valores ingresados son validos
if(antiguedad <= 0 || sueldoBase <= 0){
  cantidadValida = false;
}

//Determinamos porcentaje de incentivo con base a la antiguedad
if(antiguedad < 1){
  porcentajeIncentivo = 0;
} else if(antiguedad < 4){
  porcentajeIncentivo = .01;
} else if(antiguedad < 7){
  porcentajeIncentivo = .03;
} else if(antiguedad < 10){
  porcentajeIncentivo = .05;
} else {
  porcentajeIncentivo = .07;
}

//Determinamos incentivo y sueldo total
incentivo = parseFloat(porcentajeIncentivo * sueldoBase);
sueldoTotal = sueldoBase + incentivo;

//Con base a la validación, determinamos la salida
if(cantidadValida){
  mensaje = `El sueldo total es de:$${sueldoTotal} <br> El sueldo base es de $${sueldoBase} <br> El incentivo es de $${incentivo}`;
} else {
  mensaje = 'Entrada Inválida';
}

/*Salidas*/
document.write(mensaje);
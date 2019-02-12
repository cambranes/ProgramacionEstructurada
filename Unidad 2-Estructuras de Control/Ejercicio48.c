/*
Ejercicio 48 C
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Entradas*/

    float sueldoBase;
    int antiguedad;

    float porcentajeIncentivo;
    float incentivo;
    float sueldoTotal;

    int cantidadValida;
    char * mensaje;

    /*Procedimiento*/
    // Recibimos valores por el usuario
    printf("Introduce el sueldo base \n");
    scanf("%f", &sueldoBase);
    printf("Introduce el tiempo que lleva en la empresa \n");
    scanf("%d", &antiguedad) !=2;

    cantidadValida = 1;

    //Comprobamos si valores ingresados son validos
    if(antiguedad <= 0 || sueldoBase <= 0){
        cantidadValida = 0;
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
    incentivo = porcentajeIncentivo * sueldoBase;
    sueldoTotal = sueldoBase + incentivo;

    //Con base a la validación, determinamos la salida
    if(cantidadValida){
        mensaje = "El sueldo total es de: $ %f \nEl sueldo base es de: $ %f \nEl incentivo es de: %f";
    } else {
        mensaje = "Entrada inválida";
    }

    /*Salidas*/
    printf(mensaje, sueldoTotal, sueldoBase, incentivo);

    return 0;
}
/*Autor QA: Ronsson Ramiro May Santos
Entradas: sueldoBase= 1200,
          antiguedad= 3,
Salidas: sueldo total: 1212.
         sueldo base :  1200.
           incentivo :   12.
Procesos: ok
*/

/*
Ejercicio 31 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Jimmy Nathan Ojeda Arana
Fecha: 3 de Febrero 2019
Entradas: Un número cualquiera
Salidas: Su valor de verdad en relación a si es primo
---------------------------------------
Instrucción:
Dado un número determinar si es primo.
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se solicita al usuario ingresar un número.
2.-Se compara si el número ingresado es divisible entre sus antecesores mayores a 0 (se descarta a él mismo en esta comparación).
3.-Se comprueba si el número ingresado es divisible unicamente entre el 1.
4.-Si el número es sólo divisible entre el 1, se toma como un número primo.
5.-Si el número es divisible entre algún otro número, se tomo como un número NO primo.
---------------------------------------
*/

#include <stdio.h>

int main()
    {
    /*Entradas*/

    // Definimos las variables requeridas
    int i,numero,suma=0;
    
    /*Procedimiento*/
    //Se solicita al usuario ingresar un número
    printf("Ingresa un numero para determinar si es primo, o no. \n");
    scanf("%d",&numero);
    //Se toman en cuenta los números en el intervalo [1,numero), se descarta al número en sí
    for (i=1;i<numero;i++) {
        //Se comprueba si el contador i es un factor del número ingresado
        if (numero % i == 0) {
            //Si es factor el contador suma lo tomará en cuenta
            suma=suma+1;
        }
    }
    /*Salidas*/
    //Se comprueba que el número ingresado sea únicamente divisible entre el número 1
    if (suma==1) {
        //Si su único factor fué el 1, es un número primo
        printf("%i Es un numero primo",numero);
    } else {
        //Si tuvo más de un factor, no es un número primo
        printf("%i No es un numero primo",numero);
    }

    return 0;
    }
    //Pruebas

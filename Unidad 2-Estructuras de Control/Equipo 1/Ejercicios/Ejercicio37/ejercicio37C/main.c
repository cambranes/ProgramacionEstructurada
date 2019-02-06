/*
Ejercicio 37 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Eyder Antonio Concha Moreno
Fecha: 5 de Febrero 2019
Entradas: n número de primos a sumar
Salidas: la suma del número de primos (o 0 en caso de ser un valor invalido)
---------------------------------------
Instrucción:
Determinar la suma de los primeros n números primos.
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Verificamos que la cantidad de primos escrita por el usuario sea mayor a 0
2.-Iteramos através de los números naturales, comparando un contador con los números desde dos hasta su mitad
  de esta manera, determinando si es primo
3.-Si el número tiene un residuo de 0, se determina que el número no es primo, y se representa en una variable booleana
4.-Comprobamos si la variable isPrime es verdadera o falsa
5.-Si es verdadera (si es primo) sumamos ese número a la suma total, y restamos uno a la cantidad de primos
---------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Entradas*/

    //Definimos variable usada para la cantidad de números primos a encontrar
    int cantidadDePrimos;

    //Variable suma para almacenar toda suma
    int suma = 0;

    //Variable contador, usada para iterar hasta que los números primos hayan sido sumados
    int numero = 1;

    //Variable "booleana" saber si el número en la iteración es primo
    int isPrime;

    /*Procedimiento*/

    //Recibimos la cantidad de primos a sumar
    printf("Ingresa la cantidad de primos que deseas sumar \n");
    scanf("%d", &cantidadDePrimos);

    //Iteramos mientras que la cantidad de primos sea mayor a 0
    while(cantidadDePrimos > 0) {
        numero++;
        isPrime = 1;
        //Obtenemos el residuo del contador entre todos los números que preceden a la mitad del mismo
        for(int i = 2; i <= (numero / 2); i++){
            //De tener un residuo de cero, es decir, no es primo, se declara al booleano "isPrime" como falso
            if((numero % i) == 0) {
                isPrime = 0;
            }
        }

        //Si la variable "es primo", es verdadera, entonces realizamos la suma
        if(isPrime) {
            suma += numero;
            //Restamos uno a la cantidad de primos a encontrar
            cantidadDePrimos--;
        }
    }

    /*Salidas*/

    printf("La suma es: %d", suma);

    return 0;
}





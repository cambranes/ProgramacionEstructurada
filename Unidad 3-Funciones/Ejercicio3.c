/**
 * @file ejercicio3.c
 * @author Manuel Peraza
 * @brief Programa que  introduzca el número del día de la semana (1-7) y se visualice el nombre del día.
 * Entrada: Numeros enteros del 1 a 7
 * Salida: Nombre del dia de la semana
 * Ejemplo: 
 * Entrada: 1
 * Salida: Lunes
 * @version 0.1
 * @date 2020-02-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

/**
 * @brief Se inicializan los prototipos de las funciones 
 */
void leerEntrada(int *);
void imprimeSalida(int);
/**
 * @brief El bloque e abajo ess el Main, ahi es donde se ejecuta el código, dentro contiene las variables  que se utilizaron
 * para el algoritmo. Tambien contiene las funciones que se encarguen de la entrada.
 * @return int 
 */
int main()
{ 
    //Entrada
    //se inicializan las variables
    int dia=0;
    //Funcion que lee la variable 
    leerEntrada(&dia);
    //Salida
    //Funcion que imprime la salida
    imprimeSalida(dia);
    return 0;
}
/**
 * @brief La funcion leerEntrada se encarga de que el usuario introdusca los valores y por pase de referencia tenga
 * los mismos valores la variable en el bloque main 
 * @param _dia numero entero del 1 al 7
 */
void leerEntrada(int *_dia)
{
    scanf("%d", _dia);
}
/**
 * @brief La funcion imprimeSalida se encarga de imprimir el nombre del dia de la semana de acuerdo al numero de 
 * ingresado en la variable
 * @param num 
 */
void imprimeSalida(int num)
{
    if(num==1)
    {
        printf("Lunes");
    }
    else if(num==2)
    {
        printf("Martes");
    }
    else if(num==3)
    {
        printf("Miercoles");
    }
    else if(num==4)
    {
        printf("Jueves");
    }
    else if(num==5)
    {
        printf("Viernes");
    }
    else if(num==6)
    {
        printf("Sabado");
    }
    else if(num==7)
    {
        printf("Domingo");
    }
}

/**
 * @file Ejercicio39.c
 * @author Carlos Greene
 * Entrada: Un numero entero impar entre 0 a 10
 * Salida: La suma de los numero impares hasta la entrada
 * @brief Programa que suma los números impares del 0 al 10 y muestre el resultado
 * @version 0.1
 * @date 2020-02-21
 * @copyright Copyright (c) 2020
 */
#include <stdio.h>

/**
 * @brief Se inicializan los prototipos de las funciones
 */
void leerEntrada(int *);
int sumarNumeros(int);
void imprimirSalida(int);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecuta el código, dentro contiene las variables que se utilizaron
 * para algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
 * @return int 
 */
int main()
{
    //Entrada
    //Se inicializan las variables
    int entrada=0, suma=0;

    //Función que lee la variable
    leerEntrada(&entrada);

    //Proceso
    //Función que suma los numeros impares
    suma=sumarNumeros(entrada);

    //Salida
    //Función que imprime la salida
    imprimirSalida(suma);

    return 0;
}

/**
 * @brief La función leerEntrada se encarga de que el usuario introdusca los valores a las variables y luego, a traves de pase por 
 * referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función.
 * @param _entrada Número entero positivo (Preferiblemente del 0 al 10)
 */
void leerEntrada(int *_entrada)
{//Se lee la variable
    scanf("%d", _entrada);
}

/**
 * @brief La función sumarNumeros recibe, a traves de pase por valor, una copia del valor que está en el Main, se encarga de
 * sumar los números impares del 0 hasta el valor de la variable.
 * @param numero Número en que se detendrá de sumar
 * @return int Retorna un una variable int que contiene la suma de numeros impares
 */
int sumarNumeros(int numero)
{
    int _suma=0;//Se inicializa la variable de retorno
    if(numero>10)//Se verifica que no sea mayor de 10
    {
        _suma=25;//Si es mayor de diez, la variable de salida será 25
    }
    else
    {
        for(int i=0; i<=numero; i++)//Se inicia in ciclo for para sumar los numeros impares
        {
            if(i%2 != 0)//Se verifica que el numero no sea par
            {
                _suma = _suma+i;//Se suma los numeros impares
            }
        }
    }

    return _suma;//Se retorna la suma
}

/**
 * @brief La función imprimirSalida recibe, a traves de pase por valor, una copia del valor que está en el Main de la variable que
 * contiene la suma de los impares, la función sólo imprime dicho valor.
 * @param _salida La copia del valor que contiene la suma de impares
 */
void imprimirSalida(int _salida)
{//Se imprime la salida
    printf("%d", _salida);
}
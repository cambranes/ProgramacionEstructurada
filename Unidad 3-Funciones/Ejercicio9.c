/**
 * @file Ejercicio9.c
 * @author Jose Miron
 * Entrada: Numero entero positivo N
 * Salida: Cantidad de multiplos de 5 entre 1 y N
 * @brief Programa que reciba un numero N y que te
 * muestre cuantos múltiplos de 5 hay entre 1 y N
 * @version 0.1
 * @date 2020-02-21
 * 
 * @copyright Copyright (c) 2020
 * 
 */



#include <stdio.h>

/**
 * @brief Se inicializan los prototipos de funciones
 * 
 */
void leerNumero( int );
int sumarNumero(int);
void imprimirSalida(int);

/**
 * @brief El bloque de abajo es el Main, ahi es donde se ejecuta el codigo, dentro contiene las variables que se utilizaron
 * para el algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
 * @return int 
 */
    
        int main()
        {
            //Declaración de variables
            int numero=0, multiplo=0, salida=0;

            //Entrada
            leerNumero(&numero);

            //Proceso
            salida=calcularMultiplo(multiplo, numero);

            //Salida
            ImprimirSalida(salida);

            return 0;

        }

        /**
         * @brief La funcion leerNumero se encarga de que el usuario de los valores a las variables y luego, a traves de pase
         * por referencia, las variables del Main tengan los mismos valores de los que se introdujeron en la funcion 
         * @param _numero 
         */

        void leerNumero(int _numero)
        {
            //Se lee la variable
            scanf("%d", _numero);
        }


        /**
         * @brief 
         * La funcion calcularMultiplo recibe a traves de por valor, una copia del valor que esta en el Main,
         * se encarga de calcular la cantidad de multiplos a partir de 1 hasta N
         * @param multiplo 
         * @param _numero 
         * @return int 
         */
        int calcularMultiplo(int multiplo, int _numero)
        {
            int aux = 0;//Se inicializa la variable de retorno
            for (int i = 0; multiplo <= _numero; i++)//Ciclo for para fijar limite de multiplos
            {
                multiplo = i * 5;//Multiplicacion por multiplos de 5
                aux = i - 1;//Se resta 1 a la cantidad total de multiplos
            }


            return aux; //Se retorna la variable
        }
        

        /**
         * @brief La funcion imprimirSalida recibe a traves de pase por valor, una copia del valor que esta en el Main
         * de la variable que contiene la cantidad de multiplos, la funcion solo imprime dicho valor
         * @param multiplo 
         */
         void ImprimirSalida(int multiplo)
        {
            ////Se imprime la salida
            printf("%d", multiplo);
    
        }

    


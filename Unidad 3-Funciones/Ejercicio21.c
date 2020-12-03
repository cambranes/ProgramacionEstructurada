/**
 * @file Ejercicio21.c
 * @author Jose Miron
 * Entrada: Numero entero positivo
 * Salida: Factorial de N
 * @brief //Programa que dado un número entero n determina su factorial
 * @version 0.1
 * @date 2020-02-21
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>


/**
 * @brief Se inicializan los prototipos de funciones
 * 
 */
void leerEntrada(int);
int calcularFactorial(int);
void imprimirSalida(int);

        /**
         * @brief El bloque de abajo es el Main, ahi es donde se ejecuta el codigo, dentro contiene las variables que se utilizaron
         * para el algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
         * @return int 
         */
        int Main()
        {
            //Declaración de variables
            int entrada = 0, fact = 0;
            
            //Entrada
            leerEntrada(&entrada);

            //Proceso
            fact = calcularFactorial(entrada);
 
            //Salida
            imprimirSalida(fact);
        }
        
        /**
         * @brief La funcion leerEntrada se encarga de que el usuario de los valores a las variables y luego, a traves de pase
         * por referencia, las variables del Main tengan los mismos valores de los que se introdujeron en la funcion        
         * @param _entrada 
         */
        void leerEntrada( int _entrada)
        {
             //Se lee la variable
            scanf("%d", _entrada);
            
        }

        /**
         * @brief La funcion calcularFactorial recibe a traves de por valor, una copia del valor que esta en el Main,
         * se encarga de calcular el factorial de N
         * @param numero 
         * @return int 
         */
         int calcularFactorial(int numero)
        {
            int factorial = 1;//Se inicializa la variable de retorno

            if (numero != 0) //Se compara si el número introducido es cero
            {
                for (int i = 1; i <= numero; i++) //Se hace otro ciclo repetitivo para calcular factoriales
                {
                    factorial = factorial * i; //Se calcula factorial multiplicando la variable fact por n del ciclo
                }

            }

            return factorial;//Se retorna la variable
        }

        /**
         * @brief La funcion imprimirSalida recibe a traves de pase por valor, una copia del valor que esta en el Main
         * de la variable que contiene la cantidad de multiplos, la funcion solo imprime dicho valor
         * @param _fact 
         */
         void imprimirSalida(int _fact)
        {
            ////Se imprime la salida
            printf("%d",_fact);
        }

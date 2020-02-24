/**
 * @file Ejercicio50.c
 * @author Carlos Greene
 * Entrada: Un numero entero positivo
 * Salidad: Número cercarno al valor Euler
 * @brief Programa que que estime el valor de la constante matemática e, el numero introducido es la precisión con la que se quiere obtener el valor de e.
 * @version 0.1
 * @date 2020-02-22
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <math.h>

/**
 * @brief Se inicializan los prototipos
 */
void leerEntrada(int *);
float sumaParaEuler(int);
void imprimirSalida(float);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecuta el código, dentro contiene las variables que se utilizaron
 * para algoritmo. Tambien contiene las funciones que se encargan de la entrada, proceso y salida.
 * @return int 
 */
int main()
{
    //Entrada
    //Se inicializan las variables
    int entrada=0;
    float suma=0;

    //Se lee el la entrada
    leerEntrada(&entrada);

    //Proceso
    //Con el valor introducido, se obtiene la suma que hacerca a Euler
    suma=sumaParaEuler(entrada);

    //Salida
    //Se imprime la suma
    imprimirSalida(suma);

    return 0;
}

/**
 * @brief  La función leerEntrada se encarga de que el usuario dé los valores a las variables y luego, a traves de pase por 
 * referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función.
 * @param _entrada Número entero positivo
 */
void leerEntrada(int *_entrada)
{//Funcion que lee la entrada
    scanf("%d", _entrada);
}

/**
 * @brief La función sumaParaEule recibe, a traves de pase por valor, una copia del valor de entrada que está en el Main, se encarga
 * hacer una sumatoria de una serie de 1 entre factorial de un numero hasta llegar el valor de la variable que se hubica en 
 * el parámetro de la función, con el fin de acercarse al valor de Euler.
 * @param numero Número en que se detendrá la serie
 * @return float Una variable de tipo float que contiene la suma que se acerca a Euler
 */
float sumaParaEuler(int numero)
{//Funcion que hacerca a Euler
    float euler=0, fact=1;
    if(numero == 0) //Se compara si el número introducido es cero
    {
        euler = 1; //Si el número es cero, entonces su factorial será 1 por conveniencia
    }
    else
    { //Si no es igual a cero entonces
        for(int i = 1; i <= numero; i++) //Se hace un ciclo repetitivo para sumar la serie de factoriales
        {
            fact=1; //Se inicializa la variable fact

            for(float n = 1; n <= i; n++) //Se hace otro ciclo repetitivo para calcular factoriales
            {
                fact = fact*n; //Se calcula factorial multiplicando la veriable fact por n del ciclo
            }

            euler = euler + (1/fact); //Se suma la variable euler con 1 entre la variable facorial

        }  
    }
    return euler;//Retorna el valor de euler
}

/**
 * @brief La función imprimirSalida recibe, a traves de pase por valor, una copia del valor que está en el Main de la variable que
 * contiene la suma que acerca al valor de Euler. La función solo imprimerá dicho valor.
 * @param _salida La suma que se apróxima a Euler
 */
void imprimirSalida(float _salida)
{//Funcion que imprime la salida
    _salida=floorf(_salida*1000000)/1000000;
    printf("%f", _salida);
}


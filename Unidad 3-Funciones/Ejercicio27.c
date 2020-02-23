/**
 * @file Ejercicio 27.c
 * @author Giovanni Quintal
 * Entrada: Un numero real 
 * Salida: "Promedio"
 * @brief Determinara el promedio de los datos dados.
 * @version 0.1
 * @date 2020-02-23
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<stdio.h>

/**
* @brief Se inicializan los prototipos de las funciones
*/

void leerEntrada(float *);
float promediar(float,float,float);
void imprimirSalida(float);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
 * @return float
 */

int main() 
{
	//Entrada
	//Se inicializan las varibles
	float contador = 0, i = 0, sum = 0, mediaarit=0;

	//Función que lee la variable
	leerEntrada(&i);
	
	//Proceso
	//Función que saca el promedio
	mediaarit = promediar(i, sum, contador);

	//Salida
	//Función que imprime la salida
	imprimirSalida(mediaarit);

	return 0;
}

/**
 * @brief La función leerEntrada se encarga de de pedir el valor de la variable i y a traves con el pase de refencia,
 * la variable del main tendra los mismo valores dado por el usuario
 * 
 * @param i Número entero 
 */
void leerEntrada(float *i)
{
	scanf("%i",&i);
}

/**
 * @brief La función promediar sumara todos los numeros y los dividira entre la cantidad dada.
 * @param i 
 * @param sum 
 * @param contador 
 * @return float retorna la variable float que contiene el resultado final
 */
float promediar(float i,float sum, float contador)
{
	float mediaarit = 0;
	while (i<999) 
	{
			sum = (sum+i);
			contador = contador+1;
			leerEntrada(&i);
	}
		mediaarit = sum/contador;
		return mediaarit;
}
/**
 * @brief La función imprimirSalida, recibe un un pase del valor, una copia del valor cont desde el main
 * 
 * @param mediaarit El promedio de datos dados.
 */
void imprimirSalida(float mediaarit)
{
	printf("%f\n",mediaarit);
	
}

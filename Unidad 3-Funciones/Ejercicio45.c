/**
 * @file Ejercicio 45.c
 * @author Giovanni Quintal
 * Entrada: Un numero entero
 * Salida: "El numero es primo", "El numero no es primo"
 * @brief Programa que determina si un numero es primo o no.
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

void leerEntrada(int *);
int calcularContadores(int);
void imprimirSalida(int);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
 * @return int
 */

int main() 
{
	//Entrada
	//Se inicializan las variables
	int a = 0, cont=0;
	//Función que lee la variable
	leerEntrada(&a);

	//Proceso
	//Funcion que determina los contadores
	cont=calcularContadores(a);

	//Salida
	//Función que imprime la salida
	imprimirSalida(cont);

	return 0;
}

/**
 * @brief La función leerEntrada se encarga de de pedir el valor de la variable a y a traves con el pase de refencia,
 * la variable del main tendra los mismo valores dado por el usuario
 * 
 * @param i Número entero 
 */
	void leerEntrada(int *a)
	{
		scanf("%d", a);
	}

/**
 * @brief La función calcularContadores determinara si calcular la variable mod con i = 0 se determinaran los contadores.
 * @param a 
 * @return int retorna la variable int
 */
int calcularContadores(int a)
	{
	int conta = 0;
	for (int i=1;i<=a;i++) 
	{
		if (a%i==0) 
		{
		conta = conta+1;
		}
	}
	return conta;
}
/**
 * @brief La función imprimirSalida, recibe un un pase del valor, una copia del valor cont desde el main y lo pone en la función i para determinar su salida.
 * 
 * @param cont Contadores de la función anterior.
 */
void imprimirSalida(int cont)
{
	if (cont==2) 
	{
		printf("El numero es primo.\n");
	} 
	else 
	{
		printf("El numero no es primo.\n");
	}
}


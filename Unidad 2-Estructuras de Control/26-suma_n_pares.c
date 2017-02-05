/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas:n (int)
Salidas:suma (int)
Procedimiento general: Empleando un ciclo for se determinara
la suma de los n primeros numeros pares, utilizando un
acumulador de suma, y aumentando el contador hasta que sea n */

/*QA Testing (Equiṕo 7)
El programa funciona como indican las instrucciones, pero se le podría añadir
algun tipo de "texto" para indicar que se debe insertar y que significa el resultado*/


#include <stdio.h>
//Determinar la suma de los primeros n n�meros pares
int main(int argc, char *argv[]) {
	/*Entradas
	n posici�n del n�mero par
	suma de los numeros pares
	contador del 1 a n de los pares
	par primer numero par
	*/

	int n, suma=0, contador=1, par=2;
	printf("Ingresa los numeros pares que desea sumar: \n");
	scanf("%d",&n);
	/*Procedimiento
	Usando un ciclo for se utilizara "suma" para sumar los pares
	acumulados de acuerdo al valor de n introducido*/
	for(contador; contador<=n; contador++)
	{
		suma=(suma+par);
		par=(par+2);
	}
	/*Salidas*/
	printf("La suma de los numeros pares es: %d", suma);
	return 0;
}

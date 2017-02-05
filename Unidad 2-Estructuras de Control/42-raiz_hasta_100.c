/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas:
Salidas:número (int) raiz (float)
Procedimiento general: Empleando un ciclo for se inicializará
un contador en 1, y se imprimirá en una columna el número del 
contador y en la columna de alado se mostrará su raíz 
correspondiente.Se repetira hasta la raiz del 100.
*/

#include <stdio.h>
#include <math.h>

/*Entradas
raiz de cada numero
contador del 1 al 100*/

/*QA comentario prueba
Debido a que el usario no debe porporcionar datos de
entrada se han omitido las pruebas de entrada.
El algoritmo solo contiene un ciclo for con un contador
que solo permite repetirse hasta 100 veces, el compilador
genera una advertencia que hace referencia a la variable
definida como contador debido a que en el no se declara su
valor, sin embargo el valor de la variable fue declarada
anteriormente, por lo cual el algoritmo funciona.
El uso de la funcion pow para determinar la raiz cuadrada
es correcta, asignando el resultado a la variable raiz.
Los valores impresos de cada numero natural es correcta
con un maximo de 6 decimales por numero*/

int main(int argc, char *argv[]) {
	float raiz;
	int contador=1;
	/*Procedimiento
	Usando un ciclo for sacamos la raiz del numero
	100 veces */
	for(contador; contador<=100; contador++)
	{
		raiz=(pow(contador,0.5));
		
		/*Salidas*/
		printf("%d	%f \n", contador, raiz);
	
	}
	return 0;
}

/*
Autor:Edgar Cambranes 26/Enero/17
Entradas:n (int), x(float)
Salidas: ex
Procedimiento general:
Utilizando un ciclo for se calcula simultaneamente
los factoriales y potencias y se acumulamos
en ex
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*
	n(int) x(float) variable de Entrada
	contador y ex son acumuladores de sumas
	factorial y potencia acumulador de multiplicaciones*/
	int n, contador = 1, factorial = 1;
	float x, ex = 1, potencia = 1;
	scanf("%d %f",&n, &x);

	/*
	utilizando un ciclo for calculamos los factoriales
	y potencias
	*/
	for(contador; contador <= n; contador++ )
	{
		factorial = factorial * contador;
		potencia = potencia * x;
		ex = ex + potencia/factorial;
	}
	/*Salida*/
	printf("La aproximacion de ex es %f\n",ex );
	return 0;
}

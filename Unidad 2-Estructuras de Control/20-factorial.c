/*
Autor:Edgar Cambranes 27/Enero/17
Entradas: N (int)
Salidas:factorial (int)
Procedimiento general:
usando un ciclo y un contador acumulamos en
la factorial
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entrada
	n variable de entrada
	contador para controlar el ciclo
	factorial acumulador de multiplicaciones*/

	int n, factorial = 1, contador=1;
	scanf("%d", &n);
	/*Procedimiento*/
	while(contador <= n)
	{
		factorial = factorial * contador;
		contador++;
	}
	/*Salidas*/
	printf("El factorial de %d es %d\n",n, factorial);

	return 0;
}

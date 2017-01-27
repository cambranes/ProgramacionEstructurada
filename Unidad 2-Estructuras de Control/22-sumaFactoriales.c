
/*
Autor:Edgar Cambranes 26/Enero/17
Entradas: n (int)
Salidas: sumaFactoriales
Procedimiento general:
Utilizando un ciclo for se calcula en cada iteración
la varible factorial contiene el factorial del valor del contador
y se acumulan en el sumador sumaFactoriales
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*
	n variable de Entrada
	contador y sumaFactoriales acumuladores de sumaFactoriales
	factorial acumulador de multiplicaciones*/
	int n, sumaFactoriales = 0, contador = 1, factorial = 1;
	scanf("%d",&n);
	/*
	utilizando un ciclo for calculamos los factoriales
	*/
	for(contador; contador <= n; contador++)
	{
		factorial = factorial * contador;
		sumaFactoriales = sumaFactoriales + factorial;
	}
	/*Salida*/
	if (n == 0)
	{
		sumaFactoriales = 1;
	}

	printf("La suma es %d\n",sumaFactoriales );
	return 0;
}

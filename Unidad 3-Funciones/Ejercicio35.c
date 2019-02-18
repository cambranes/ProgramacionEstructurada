/*
Autor: Amílcar A. Ramírez Patrón
Entradas: Número de celdas (n)
Proceso: Iterar por cada parte del número necesario del ejercicio y condicionar que sólo se imprima cuando se necesite,
imprimirlos con un espacio para la fácil legibilidad.
Salidas: El orden de los números pedidos.
*/
#include <stdio.h>
void entradaNCeldas(int*);
void seleccionEspacioCelda(int*);


int main(int argc, char *argv[]) {
	//entrada
	int n;
	entradaNCeldas(&n);
	//proceso
	seleccionEspacioCelda(&n);
	//salida
	return 0;
}


void entradaNCeldas(int *n){
	scanf("%d", n);
}

void seleccionEspacioCelda(int *n){
	int i = 0, j = 0;
	for(i = 0; i < *n; i = i + 1){
		for(j = 0; j < *n; j = j + 1){
			if (i <= j){
				printf("%d%d  ", i, j);
			}
			printf("	");
		}
		printf("\n");
	}
	
}

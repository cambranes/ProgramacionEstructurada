#include <stdio.h>
/* 36.Dado un número N entero positivo, considera que representa una tabla con
n x n celdas. La numeración de las posiciones inician en 0. Escribe un
programa que imprima las posiciones de las celdas de la diagonal superior
hacia abajo.
N= 5
00
10 11
20 21 22
30 31 32 33
40 41 42 43 44
*/
void lectura(int *);

int main() {
	int celdas=0;
	int fila;
	int columna;
	printf("ingrese el numero de celdas: ");
	lectura(&celdas);
	for(int fila=0;fila<celdas;fila++){
		for(int columna=0;columna<celdas;columna++){
			if(fila>=columna){
				printf("%i%i ",fila,columna);
			} else{
				printf(" ");
			}
		}
		printf("\n");
	 }
	return 0;
}
/*
funcion para la lectura de variables
@param variable
*/
void lectura(int* variable){
	scanf("%i",variable);
}

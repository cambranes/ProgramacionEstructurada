/*
Autor: Amílcar A. Ramírez Patrón
Proceso: La suma de los impares del 0 al 10 en una variable
Salida: El resultado de la suma
*/
#include <stdio.h>
void sumaDeImpares(int*);

int main(int argc, char *argv[]) {
	int resultado;
	sumaDeImpares(&resultado);
	return 0;
}

void sumaDeImpares(int *resultado){
	printf("%d", *resultado = (1 + 3 + 5 + 7 + 9));
}

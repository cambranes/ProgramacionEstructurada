/*
Autor: Guillermo Canto	Fecha: 2/3/2019
Entradas:	Ninguna.
Salidas:	La suma de los numeros impares del 1 al 10.
Procedimiento general:
Determina si un numero es impar o no, de serlo lo agrega al acumulador sum e
imprime sum al final.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	int sum = 0;
	for (i=0; i<=10; i++){
		if(i%2 != 0){
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}


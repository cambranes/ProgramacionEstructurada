//Equipo 4//
//Fecha: 05/02/2020//
//Un programa que imprima las filas://
//1//
//1 2//
//1 2 3 //
//...//
//1 2 3 ... n//
#include <stdio.h>

int main(void) {
	//Entrada//
	int	N, X, C = 1,i;
	scanf_s("%d", &N);//Se define la entrada//

	//Proceso//
	for (i = 0; i < N; i++) {
		X = 0;
		do {
			X = X++;
			printf("%d", X);
		} while (X<C);
		//salida//
		printf("\n");//se imprime la salida//
		C=C++;
	}
}
/*
Autor: Rodrigo Moguel Gamboa (30/Enero/18 - 10:15 AM)
Entradas: N/A
Salidas: contador (contador que va avanzando para representar caracteres distintos)
Procedimiento general:`Se usan dos ciclos for para recorrer los valores ASCII
de las letras mayusculas y minusculas y se imprimen como char y como entero para
mostrar el codigo y a que caracter le pertenece.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	char contador=0;
	/*Procedimiento*/
	printf("Lista de codigo ASCII para letras mayusculas y minusculas:\n");	for (contador=65; contador<=90; contador++){
		printf(" %d - %c \n", contador, contador);
	}
	for (contador=97; contador<=122; contador++){
		printf(" %d - %c \n", contador, contador);
	}
	return 0;
}


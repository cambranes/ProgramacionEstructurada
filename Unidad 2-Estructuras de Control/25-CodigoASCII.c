/*
Creado por: Rodrigo Moguel Gamboa 15/02/18
Programa que imprime las letras mayusculas y minusculas y su
representacion en codigo ASCII
@param N/A
@return letras y su codigo ASCII
*/

#include <stdio.h>

void impresionASCII(char);

int main(int argc, char *argv[]) {
	int contador=0;
	/* Funcion de impresion del codigo ASCII
	@param N/A
	@return letras y su codigo ASCII 5*/
	impresionASCII(contador);
	return 0;
}

void impresionASCII(char contador){
	printf("Lista de codigo ASCII para letras mayusculas y minusculas:\n");
	for (contador=65; contador<=90; contador++){
		printf(" %d - %c \n", contador, contador);
	}
	for (contador=97; contador<=122; contador++){
		printf(" %d - %c \n", contador, contador);
	}
}

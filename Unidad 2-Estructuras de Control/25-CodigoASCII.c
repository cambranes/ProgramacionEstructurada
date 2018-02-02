/*
Autor: Rodrigo Moguel Gamboa (30/Enero/18 - 10:15 AM)
Entradas: N/A
Salidas: contador (contador que va avanzando para representar caracteres distintos)
Procedimiento general:`Se usan dos ciclos for para recorrer los valores ASCII
de las letras mayusculas y minusculas y se imprimen como char y como entero para
mostrar el codigo y a que caracter le pertenece.

	QA Francisco Jesus Mac Cetzal 01/02/2018 07:57 pm
	Entradas./.Salidas./.Resultado
	"Ejemplo de valores esperados"
	Symbol	ASCII
	A		65			65	ok
	B		66			66	ok
	C		67			67	ok
	D		68			68	ok
	a		97			97	ok
	b		98			98	ok
	c		99			99	ok
	d		100			100	ok
	Nota.- Se imprime de forma correcta la informacion solicitada.
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


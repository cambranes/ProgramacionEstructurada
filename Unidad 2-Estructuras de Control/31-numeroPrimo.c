/*
QA Francisco Jesus Mac Cetzal 01/02/2018 07:57 pm
Entradas./.Salidas./.Resultado
...997.../.Primo.../..Pimo...OK
...0...../No Primo./No Primo.OK
...-3..../No Primo./No Primo.OK
...853.../.Primo.../..Primo..OK
..104729./.Primo.../..Primo..OK
Notas.- no se añadio el bloque de comentarios, no se le dio formato al codigo
Entradas
Procesos
Salidas
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero, i, divisores;
	divisores=0;
	printf("Introducir el numero: \n");
	scanf("%d", &numero);
	for (i=1;i<=numero;i++)
	{
		if(numero%i==0)
		{
			divisores++;
		}
	}
	if (divisores==2)
	{
		printf("El numero %d es primo.", numero);
	}
	else
		{
		printf("El número %d no es primo.", numero);
    	}

	return 0;
}


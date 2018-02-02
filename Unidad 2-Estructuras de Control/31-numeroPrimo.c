/* Autor:Víctor Ortiz García (30/Enero/18 - 8:00 AM)
Entrada: numero
Salida: Divisores
Procedimiento General: Lee un número, y se hace un ciclo for que se repite las mismas veces que el
valor del número, y si el número tiene sólamente 2 divisores, es primo. En cualquier otro caso, no es primo.
*/

#include <stdio.h>

//Entrada
int main(int argc, char *argv[]) {
	int numero, i, divisores;
	divisores=0;
	printf("Introducir el numero: \n");
	scanf("%d", &numero);
	
	//Procedimiento
	for (i=1;i<=numero;i++)
	{
		if(numero%i==0)
		{
			divisores++;
		}
	}
	
	//Salida
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
/*
QA Francisco Jesus Mac Cetzal 01/02/2018 07:57 pm
Entradas./.Salidas./.Resultado
...997.../.Primo.../..Pimo...OK
...0...../No Primo./No Primo.OK
...-3..../No Primo./No Primo.OK
...853.../.Primo.../..Primo..OK
..104729./.Primo.../..Primo..OK
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	{
	/*Aqui se definen las variables que se utilizaran*/

	int numero1,tabla,numero2, multiplo, resultado;

	/*Se muestra un mensaje en la pantalla para indicar los pasos*/

	printf("Elija hasta que numero debe de llegar la tabla de multiplicar:\n ");
	scanf("%d", &numero1);

	/*Se inicia la tabla en 1 para empezar en la tabla del 1 hasta la tabla que
	desee el usuario*/

	for (tabla = 1; tabla <= numero1; tabla++)
	{
		printf("\t %d", tabla);
	}
	printf("\r\n\r\n");

	/*Aqui es donde se efectua el ciclo para hacer la multiplicacion de cada
	tabla*/

	for(multiplo = 1; multiplo <= numero1; multiplo++)
	{
		printf("%d", multiplo);
		for(numero2 = 1; numero2 <= numero1; numero2++)
		{
			resultado = multiplo * numero2;
			printf("\t %d", resultado);
		}
		printf("\r\n");
	}
}
	return 0;
}

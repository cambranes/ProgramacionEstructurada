/*
Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
Entradas: serie de numeros no definida
Salidas: el numero menor y el mayor
Procedimiento general: determinar el numero mayor y el menor de una serie de numeros indefinida
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int numero;
	int numeroMenor = 99999;
	int numeroMayor = -99999;
	
	printf("ingresa un numero cualquiera, para dejar de ingresar solo pon 999 \n");
	while(numero != 999){
		printf("Numero: ");
		scanf("%i",&numero);
		
		/*Procedimiento*/
		//se compara el numero menor o el numero mayor de la serie
		if(numero < numeroMenor){
			numeroMenor = numero; //caso numero menor
		}
		else if(numero > numeroMayor){
			numeroMayor = numero; //caso numero mayor
		}
	}

	/*Salidas*/
	printf("\nEl numero menor es: %i",numeroMenor);
	printf("\nEl numero mayor es: %i",numeroMayor);
	return 0;
}

/*
	QA Reviso: Carlos Chan
	Entradas: 4, 3, 2, -10, 999
	Salidas: -10, 999

	El programa funciona correctamente.
*/

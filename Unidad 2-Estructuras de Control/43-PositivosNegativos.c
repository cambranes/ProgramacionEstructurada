/* Autor: Elena Soledad Medina Favela

Entradas: numero(Variable que almacena momentaneamente los valores de los numeros que se van a ingresar).

Salidas: positivo(Variable que almacena el numero de valores positivos ingresados).
		 negativo(Variable que almacena el numero de valores negativos ingresados).

Procedimiento General: El usuario ingresa n cantidad de numeros para determinar cuantos de ellos
son positivos y cuantos son negativos. El programa dejara de leer numeros hasta que el usuario 
ingrese el nuemro 0.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Entrada*/
	int positivo = 0, negativo = 0;
	float numero = 1;
	
	/*Procedimiento*/
	while(numero != 0){
		
		printf("Ingrese un numero: ");
		scanf("%f", &numero);
		
		if(numero > 0){
			positivo = positivo + 1;
		}
		else 
			if (numero < 0){
				negativo = negativo + 1;
			}
	}
	
	/*Salida*/
	printf("Se ingresaron %d numeros positivos \n", positivo);
	printf("Se ingresaron %d numeros negativos", negativo);
	return 0;
}


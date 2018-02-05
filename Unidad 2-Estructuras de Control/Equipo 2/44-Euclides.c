#include <stdio.h>
/*
Ejercicio 44
Autor Erick Cardenas
*/
int main(int argc, char *argv[]) {
	//se inicializan las variables a utilizar
	int numero1, numero2;
	int mayor, menor;
	int aux;
	//se preguntan y guardan los numeros a los cuales buscar el MCD
	printf("Introduzca el numero A \n");
	scanf ("%d",&numero1);
	//se valida que no sean entradas negativas 
	if(numero1<0){
		printf("error el numero no puede ser negativo");
		do{
		printf("Introduzca el numero A \n");
		scanf ("%d",&numero1);
		}
		while(numero1<0);
	}
	;
	printf("Introduzca el numero B \n");
	scanf ("%d",&numero2);
	if(numero2<0){
		printf("error el numero no puede ser negativo");
		do{
			printf("Introduzca el numero A \n");
			scanf ("%d",&numero2);
		}
		while(numero1<0);
	}
	//condicion para saber que numero es mayor
	if (numero1>numero2);
	mayor = numero1, menor=numero2;
	if(numero1<numero2);
	mayor=numero1, menor=numero2;
	//algoritmo de euclides
	do {
		aux = menor;
		menor = mayor%menor;
		mayor = aux;
	}while (menor!=0);
	//impresion del MCD
	printf("El maximo comun divisor es %d",mayor)	;
	
	
	return 0;
}

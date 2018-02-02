/*#12. Escribir un programa que lea 2 numeros e imprima el mayor y el menor.c
Autor:Kristian Pantoja
Entradas: #Reales
Salida: #Reales
Simple comparacion Si A<B, Sino A>B, con Si A=B */
#include<stdio.h>

int main() {
	/*Entradas*/
	float numero1;
	float Numero2;
	
	/*Procedimiento*/
	printf("Escribir Numero 1    ");
	scanf("%f",&numero1);
	printf("Escribir Numero 2    ");
	scanf("%f",&Numero2);
	
	/*Salidas*/
	if (numero1>Numero2) {
		printf("El numero1 es mayor que el Numero2");
	}
	else
		if(numero1==Numero2)
			printf("Ambos numeros son iguales");
	else{
				printf("El Numero2 es mayor que el numero1");
	}
	
	return 0;
}


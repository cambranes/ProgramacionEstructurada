/*
Autor:Equipo 4 Jose Antonio Barrera Morales 29/Enero/17
Entradas:Variable numero
Salidas:mayor, menor
Procedimiento general: Uso de do while para seguir insertando numeros distintos a la serie
con condicionales para asignar a las variable mayor y menor su numero correspondiente

*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	float numero,mayor,menor;
	/* Procedimiento*/
	printf("inserta un numero\n");
	scanf("%f",&numero);
	/*Se inicializan las variable con un elemento de la lista*/
	mayor = numero;
	menor = numero;
	do{
		/*se acomodan los elementos de acuedo a su lugar*/
		if(numero>mayor){
			mayor=numero;
		}
		if(numero<menor){
			menor=numero;
		}
		printf("inserta un numero (999 para dejar de insertar)\n");
		scanf("%f",&numero);
	}while(numero!=999);
	
	
	/*Salidas*/
	printf("el numero mayor= %f\n el numero menor= %f",mayor,menor);
	return 0;
}

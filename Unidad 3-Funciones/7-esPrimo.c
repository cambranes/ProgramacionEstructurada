/*
Creado por: Rodrigo Moguel Gamboa 15/02/18
Funcion para saber si un numero es primo o no 
@param numero del que se quiere saber si es primo
@return 0 si no es primo o 1 si lo es
*/
#include <stdio.h>

int esPrimo(int);

void lectura (int *);

int main(){
	int x;
/* Funcion de lectura
@param N/A
@return numero con el que se va a trabajar */
	lectura(&x);
/* Funcion para saber si un numero es primo o no 
@param numero del que se quiere saber si es primo
@return 0 si no es primo o 1 si lo es */
	esPrimo(x);
	return 0;
}

void lectura(int *variable){
	printf("Escriba el numero del que desea saber si es primo:\n");
	scanf("%d",variable);
}

int esPrimo(int x){
	int i, residuo, bandera;
	if (x==1){
		bandera=0;
		printf("%d (el numero no es primo)", bandera);
		return 0;
	}
	for(i=x-1;i>1;i=i-1){
		residuo=x%i;
		if (residuo==0){
			bandera=0;
			printf("%d (el numero no es primo)", bandera);
			return 0;
		}
	}
	bandera=1;
	printf("%d (el numero es primo)", bandera);
	return 0;
}

/*
Creado por: Rodrigo Moguel Gamboa 15/02/18
Programa para calcular la paridad de un numero 
@param numero del que se busca su paridad
@return paridad del numero
*/

#include <stdio.h>

int parImpar (int n);

void lectura (int *);

void imprimirPar (int);

void imprimirImpar (int);


int main(int argc, char *argv[]) {
	int numero, paridad;
	/* Funcion de lectura
	@param numero del que se busca su paridad
	@return N/A */
	lectura(&numero);
	/* Funcion principal de paridad
	@param numero del que se busca su paridad
	@return paridad del numero */
	parImpar(numero);
	return 0;
}

int parImpar (int n){
	int paridad;
	if(n%2==0){
		paridad=0;
		imprimirPar(n);
	}
	else{
		paridad=1;
		imprimirImpar(n);
	}
	return (paridad);
}

void lectura(int *variable){
	printf("Escriba el numero del que desea saber la paridad:\n");
	scanf("%d",variable);
}

void imprimirPar(int valor){
	printf("El numero %d es par\n",valor);
}

void imprimirImpar (int valor){
	printf("El numero %d es impar\n",valor);
}


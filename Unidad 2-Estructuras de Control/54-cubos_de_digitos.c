#include <stdio.h>
/* 54.Calcular todos los números de tres dígitos tales que la suma de los cubos de
los dígitos es igual al número. 
 Entradas
	numero
	auxiliar
	centenas
	decenas
	unidades
	sumaDeCubos
 */

void lectura(int *);
int potencia(int,int);
void imprimir(int);

int main() {
	int numero;
	int auxiliar;
	int centenas;
	int decenas;
	int unidades;
	int sumaDeCubos;
	for(int numero=100;numero<1000;numero++){
		auxiliar=numero;
		centenas=auxiliar%10;
		auxiliar=auxiliar/10;
		decenas=auxiliar%10;
		auxiliar=auxiliar/10;
		unidades=auxiliar%10;
		sumaDeCubos=potencia(centenas,3)+potencia(decenas,3)+potencia(unidades,3);
		if(sumaDeCubos==numero){
			imprimir(numero);
		}
	}
	return 0;
}
/* 
Funcion para la lectura de variables
@param variable, 
*/
void lectura(int* variable){
	scanf("%i",variable);
}
/* 
Funcion para la potencia
@param base,exponente
@return potencia
*/
int potencia(int base,int exponente){
	int i, numero=1;
	for(i=1;i<=exponente;i++){
		numero=numero*base;
	}
	return numero;
}
/*
Funcion para imprimir valores
@param valor
*/
void imprimir(int valor){
	printf("%i\n", valor);
}


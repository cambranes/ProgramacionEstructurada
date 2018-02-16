/*
Autor:Francisco Jesus Mac Cetzal
Entradas: 2 numeros enteros
Salidas: el primer numero entero con combertido a la base que es el segundo
Procedimiento general:
*/
#include<stdio.h>

void lect(int *, int *);
int enteroABasen(int , int);
void print(int);

int main(){
	int numero = 0, base = 0, numeroConvertido = 0;
/*Entradas*/
	lect(&numero, &base);
	/*Procedimiento*/
	numeroConvertido = enteroABasen(numero,base);
	/*Salidas*/
	print(numeroConvertido);
	return 0;
}
/*@param lecturaNum, lecturaBase
	@return n/a
	*/
void lect(int *lecturaNum, int *lecturaBase){
	printf("ingrese el numero a convertir y la base a convertir separados con un espacio \n");
	scanf("%i %i", lecturaNum, lecturaBase);
}
/*@param  num, "n" que representa la base
	@returnn_base "el numero convertido"
	*/
int enteroABasen(int num, int n){
	int n_base=0, coef=1;
	while (num!=0) {
		n_base+=coef*(num%n);
		coef*=10;
		num/=n;
	}
	return n_base;
}
/*@param valor(el numero convertido)
	@return n/a
	*/
void print(int valor){
	printf("%i \n", valor);
}

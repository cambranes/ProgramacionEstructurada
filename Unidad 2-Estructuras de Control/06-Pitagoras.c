/*
Autor:Francisco Jesus Mac Cetzal 30/Enero/18
Entradas: tres numeros
Salidas:si pertenece o no a la eccuacion de pitagoras
Procedimiento general: Escribir el programa para un programa en C que reciba tres n�meros
enteros que representan dos catetos y una hipotenusa y que determine si
cumple con la ecuaci�n de pit�goras.
a^2 +b^2 = c^2
*/
#include <stdio.h>

int pot(int);
void lect(int *, int *, int *);
int comp(int , int , int);
void print(int);
int main(int argc, char *argv[]) {
	int catetoA = 0;
	int catetoB = 0;
	int hipotenusa = 0;
	int resultado = 0;
	/*Entradas*/
	lect(&catetoA, &catetoB, &hipotenusa);
	/*Procedimiento*/
	catetoA = pot(catetoA);
	catetoB = pot(catetoB);
	hipotenusa = pot(hipotenusa);
	resultado = comp(catetoA, catetoB, hipotenusa);
	/*Salidas*/
	print(resultado);
	return 0;
}
/*
@param lecturaA "cateto a" lecturaB "cateto b", lecturaH "hipotenusa"
@return
*/
void lect(int *lecturaA, int *lecturaB, int *lecturaH){
	printf("ingrese tres valores separados por un espacio \n");
	scanf("%i %i %i", lecturaA, lecturaB, lecturaH);
	}
/*
@param base "numero a potenciar"
@return potencia "es el numero elevado al cuadrado"
*/
int pot(int base){
	int potencia = 0;
	potencia = base * base;
	return potencia;
}
/*
@param catA "cateto a" catB "cateto b" hipo "hipotenusa"
@return
*/
int comp(int catA, int catB, int hipo){
	int catAB = 0, resuABC = 0;
	catAB = catA + catB;
	if(catAB!=hipo){
		resuABC = 0;
	} else{
		resuABC = 1;
	}
	return resuABC;
}
/*
@param option "corresponde a si los valores ingresados cumplen o no con la eccuacion"
@return
*/
void print(int option){
	if(option!=0){
		printf("si cumple con la eccuacion ");
	} else{
		printf("no cumple con la ecuaccion ");
	};
}

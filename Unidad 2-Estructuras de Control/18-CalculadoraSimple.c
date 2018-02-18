/*
Autor:Francisco Jesus Mac Cetzal 30/Enero/18
Entradas: dos numeroros y un operador
Salidas: el resultado dependiendo a que operacion se quiera realizar
Procedimiento general: Escribir y ejecutar un programa que simule una calculadora simple. Lee dos
enteros y un car�cter. Si el car�cter es un +, se imprime la suma; si es un -,
se imprime la diferencia; si es un * se imrpime el producto; si es un /, se
imprime el cociente; y si es un % se imprime el resto.
*/
#include <stdio.h>
void lect(int *, char *, int *);
void calcular(int, char, int);
int suma(int , int);
int resta(int , int);
int producto(int , int);
int division(int , int);
int modulo(int, int);
void print(int , int);

int main(int argc, char *argv[]){
	int number1 = 0;
	int number2 = 0;
	char operation;
	/*Entradas*/
	lect(&number1, &operation, &number2);
	/*Procedimiento*/
	calcular(number1, operation, number2);
	/*Salidas (las salidas son dentro una funcion )*/
	return 0;
}
/*
@param lecturaA "primer numero" lecturaB "operacion" lecturaC"segundo numero"
@return N/A
*/
void lect(int *lecturaA, char *lecturaB, int *lecturaC){
	printf("ingrese tres valores separados por un espacio \n");
	scanf("%i %c %i", lecturaA, lecturaB, lecturaC);
}
/*
@param num1 "primer numero" oper "operacion" num2"segundo numero"
@return N/A
*/
void calcular(int num1, char oper, int num2){
	int resultado = 0, error = 0;
	if(num2==0&&(oper=='/'||oper=='%')){
		error = 1;
	} else{
		switch(oper){
		case '+':
			resultado = suma(num1, num2);
			break;
		case '-':
			resultado = resta(num1,num2);
			break;
		case '*':
			resultado = producto(num1,num2);
			break;
		case '/':
			resultado = division(num1,num2);
			break;
		case '%':
			resultado = modulo(num1,num2);
			break;
		default:
			error = 2;
			break;
		}
	}
	print(error, resultado);
}
/*
@param valor1"numero 1"  valor2 "numero2"
@return total
*/
int suma(int valor1, int valor2){
	int total = 0;
	total = valor1 + valor2;
	return total;
}
/*
@param valor1"numero 1"  valor2 "numero2"
@return total
*/
int resta(int valor1, int valor2){
	int total = 0;
	total = valor1 - valor2;
	return total;
}
/*
@param valor1"numero 1"  valor2 "numero2"
@return total
*/
int producto(int valor1, int valor2){
	int total = 0;
	total = valor1*valor2;
	return total;
}
/*
@param valor1"numero 1"  valor2 "numero2"
@return total
*/
int division(int valor1, int valor2){
	int total = 0;
	total = valor1 / valor2;
	return total;
}
/*
@param valor1"numero 1"  valor2 "numero2"
@return total
*/
int modulo(int valor1, int valor2){
	int total = 0;
	total = valor1%valor2;
	return total;
}
/*
@param 	errorNum.- es un valor de 0 a 2 que se usa para determinar que se va imprimir
		valor.- es el resultado en caso de que si se realice alguna de las operaciones
@return no regresa nada al main
*/
void print(int errorNum, int valor){
	if(errorNum==0){
		printf("%i \n", valor);
	} else{
		if(errorNum==1){
			printf("No se puede dividir entre 0 \n");
		} else{
			if(errorNum==2){
				printf("Ingrese un operador valido \n");
			}
		}
	}
}

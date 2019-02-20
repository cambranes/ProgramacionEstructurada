//Escribe el programa que estime el valor de la constante matemática e,
//mediante la formula:
//e = 1 + 1/1! + 1 / 2! + 1/3! + ....+ 1/N!
//Leer el valor N que indica la precisión con la que se quiere obtener el
//valor de e

#include <stdio.h>

/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas:numero de precision para e
Salidas: valor aproximado a e
Procedimiento: Calcular el valor de e
*/

float entrada();
float proceso(int);
float factorial(int);
void salida(float);

int main() {
	int numero = 1;
	float precision;
	float e = 1,ePas;
	
	while(precision < 2){
		precision = entrada();
	}
	
	do
	{
		ePas = e;

		e = e + proceso(numero);
	;
		numero++;
	}
	while(numero <= precision);
	salida(ePas);
	return 0;
}

float entrada(){
	float precisions;
	printf("Con que presicion desea calcular la constante e  :");
	scanf("%f",&precisions);
	
	return precisions;
}

float proceso(int num){
	float suma = 0;
	float factoriales = factorial(num);
	
	suma = 1/factoriales;
	
	return suma;
}

float factorial(int num){
	float factorial = 1,i;
	for(i = 1; i <= num; i++){
		factorial = i * factorial;
	}
	return factorial;
}

void salida(float e){
	printf("El valor de la constante e es: %f",e);
}

/*
QA
Realizó: Guillermo Canto
Entradas:		Salidas:
0			1
-1			1
5			2.708333
15			2.718282
Funciona correctamente, pero recomiendo validar las entradas producen salidas de 1.
*/

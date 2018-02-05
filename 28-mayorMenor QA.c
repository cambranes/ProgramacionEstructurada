#include <stdio.h>
/*
Autor: César González 30/01/2018
Entradas: valoresIngresados (float)
Salidas: mayorValor (float); menorValor (float)
Procedimiento general:
Se lee el primer valor ingresado.
Se inicializan las variables de salida con dicho valor.
Empieza un ciclo while cuya condición es valoresIngresados!=999.
Sabiendo que el valor no es 999, comparamos si es mayor que mayorValor o menor que menorValor.
Antes de salir del ciclo se lee valoresIngresados.
Cuando se ingrese 999, el ciclo while finaliza y se imprime el mayor y el menor valor.
 
QA
Entrada			Salida		Resultado
1.1 56 -5 999		56 y -5		56 y -5
-1 -1 0.5 998 999	998 y -1	998 y -1
0.999 7 1 12 999	12 y 0.999	12 y 0.999
*/
int main(int argc, char *argv[]) {
	float valoresIngresados, mayorValor, menorValor;
	printf("Escribir un valor de la secuencia. Ingrese 999 para salir\n");
	/*Primera lectura*/
	scanf("%f",&valoresIngresados);
	/*Inicialización de variables*/
	mayorValor=valoresIngresados;
	menorValor=valoresIngresados;
	/*El ciclo se repite hasta cumplir la condición de salida*/
	while(valoresIngresados!=999){
		/*Si el valor ingresado es mayor que mayorValor, el segundo toma el valor del primero*/
		if(valoresIngresados>mayorValor){
			mayorValor=valoresIngresados;
		}
		/*Si el valor ingresado es menor que menorValor, el segundo toma el valor del primero*/
		if(valoresIngresados<menorValor){
			menorValor=valoresIngresados;
		}
		/*Lectura de todas las entradas*/
		printf("Escribir un valor de la secuencia. Ingrese 999 para salir\n");
		scanf("%f",&valoresIngresados);
	}
	/*Se imprimen los valores obtenidos*/
	printf("El mayor es %f, y el menor %f",mayorValor,menorValor);
	return 0;
}

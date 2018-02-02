/*Carlos Eduardo Avila Criollo
  Este programa imprime las posciciones de una matriz de nxn*/
#include<stdio.h>
int main() {
	
	/*Declaracion de variables*/
	int filas[100][100], columnas[100][100], b, c, i, h, dimensionmatriz;
	
	/*Limites del programa*/
	printf("la matriz funciona correctamente hasta 100, despues de 10 la impresion de la matriz se comienza a correr \n\n");
	
	/*datos de entrada*/
	printf("dame la dimension de la matriz\n");
	scanf("%d",&dimensionmatriz);
	
	/*proceso:
	  en esta parte se da el valor a las posciociones
	  a la matriz con el valor de los contadores de los
	clicos for, uno para las filas y otro para las columnas*/
	for (b=1;b<=dimensionmatriz;b+=1) {
		for (c=1;c<=dimensionmatriz;c+=1) {
			columnas[c-1][b-1] = b-1;
			filas[b-1][c-1] = c-1;
		}
	}
	
	/*salida de datos:
	  aqui se imprimen las posciciones de la matriz*/
	printf("la diagonal superior de la matriz es \n\n");
	for (i=1;i<=dimensionmatriz;i+=1) {
		for (h=1;h<=dimensionmatriz;h+=1) {
			if (i<=h) {
				printf("%d%d ", filas[h-1][i-1], columnas[i-1][h-1]);
			} else {
				printf("   ");
			}
		}
		printf(" \n");
	}
	return 0;
}

/*
QA Carlos Alvares
Si despues de 10 se comienza a duplicar ese debria ser el valor maximo
Lee los valores negativos y no imprime nada, despues del 10 comienza a correr la impresion erroneamente 
como dice en los limites del programa
Prueba 1:
Entrada:
-9
Salida:

Prueba 2:
Entrada:
10
Salida

00 01 02 03 04 05 06 07 08 09
   11 12 13 14 15 16 17 18 19
	  22 23 24 25 26 27 28 29
		 33 34 35 36 37 38 39
			44 45 46 47 48 49
			   55 56 57 58 59
				  66 67 68 69
				     77 78 79
						88 89
						   99
Prueba 3 
Entrada:
5
Salida:
00 01 02 03 04
   11 12 13 14
	  22 23 24
	     33 34
		    44


*/

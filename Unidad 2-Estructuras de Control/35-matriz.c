/*Carlos Eduardo Avila Criollo
  Este programa imprime las posciciones de una matriz de nxn*/
  
  /*QA: el programa se probo con los valor de entrada 9,10 y 13
        con los valores de entrada 9, 10 se imprime correctamente
		la diagonal superior con sus posciciones pero con el valor
		de entrada 13 la impresion se comienza a correr pero las 
		posiciones siguen siendo las correctas*/
#include<stdio.h>
void matriz (int x);
int main() {
	
	/*Declaracion de variables*/
	int dimensionmatriz;
	
	/*Limites del programa*/
	printf("la matriz funciona correctamente hasta 10, despues de 10 la impresion de la matriz se comienza a correr \n\n");
	
	/*datos de entrada*/
	printf("dame la dimension de la matriz\n");
	scanf("%d",&dimensionmatriz);
	/*esta funcion calcula e imprime una 
	matriz con sus posciciones a partir
	de un valor de entrada antes dado*/
	
	matriz(dimensionmatriz);
	return 0;
}

void matriz(int x){
	/*declaracion de variables*/
	int filas[100][100], columnas[100][100], b, c, i, h;
	/*proceso:
	en esta parte se da el valor a las posciociones
	a la matriz con el valor de los contadores de los
	clicos for, uno para las filas y otro para las columnas*/
	for (b=1;b<=x;b+=1) {
		for (c=1;c<=x;c+=1) {
			columnas[c-1][b-1] = b-1;
			filas[b-1][c-1] = c-1;
		}
	}
	
	/*salida de datos:
	aqui se imprimen las posciciones de la matriz*/
	printf("la diagonal superior de la matriz es \n\n");
	for (i=1;i<=x;i+=1) {
		for (h=1;h<=x;h+=1) {
			if (i<=h) {
				printf("%d%d ", filas[h-1][i-1], columnas[i-1][h-1]);
			} else {
				printf("   ");
			}
		}
		printf(" \n");
	}
}

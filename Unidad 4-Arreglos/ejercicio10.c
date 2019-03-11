/*
Autor: Guillermo Canto
Entradas: Un  número  natural  impar   menor  o  igual  a  11
Salidas: Imprime si se trata de un cuadrado magico o no el arreglo que se produce.
Procedimiento general: Lee n conforme a las especificaciones, llena un arreglo de
dimension n*n con los numeros del 1 al n*n, cambia el orden de estos de forma 
aleatoria, verifica si se trata de un cuadrado magico o no.
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100

int leer_n(); 
void llenarArreglo(int arreglo[][N], int n);
void barajarArreglo(int arreglo[][N], int n);
int checkIfMagic(int arreglo[][N], int n);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int flag,n;
	n = leer_n();
	int arreglo[n][n];
	llenarArreglo(arreglo, n);
	barajarArreglo(arreglo, n);
	flag = checkIfMagic(arreglo, n);
	
	if (flag == 1){
		printf("Se trata de un cuadrado magico");
	}else{
		printf("No es un cuadrado magico");
	}
	
	return 0;
}
int leer_n(){
	int n;
	do{
		scanf("%d", &n);
	}while (n%2!=0 && n<=11);
	return n;
}
void llenarArreglo(int arreglo[][N], int n){
	int contador = 1;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			arreglo[i][j] = contador;
		}
		contador++;
	}
}

void barajarArreglo(int arreglo[][N], int n){
	for (int i = 0; i < n; i++)
	{
		int r = rand()% n-1;
		for (int j = 0; j < n; j++)
		{
			int temp =  arreglo[i][j];
			arreglo[i][j] =  arreglo[r][j];
			arreglo[r][j] = temp;
		}
	}
}
int checkIfMagic(int arreglo[][N], int n){
	int i,j;
	int flag = 0;
	int sumFilas = 0;
	int totalFilas = 0;
	int sumColumnas = 0;
	int totalColumnas = 0;
	for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			sumFilas = sumFilas + arreglo[i][j];
		}
		totalFilas = totalFilas + sumFilas;
		if (j!=n && i!=n){
			sumFilas = 0;
		}
	}
	for(j=0; j < n; j++){
		for(i=0; i < n; i++){
			sumColumnas = sumColumnas + arreglo[i][j];
		}
		totalColumnas = totalColumnas + sumColumnas;
		if (j!=n && i!=n){
			sumColumnas = 0;
		}
	}
	if (totalFilas/n == sumFilas && totalColumnas/n == sumColumnas){
		flag = 1;
	}
	return flag;
}

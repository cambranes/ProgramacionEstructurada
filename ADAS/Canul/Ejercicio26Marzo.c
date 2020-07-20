#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

//ADA 4 visualizar region (2 y 4) y region (1 y 3)
//Autor: Pamela Canul Chacon

void asignarArreglo (int arr [][N]);
void imprimirArreglo (int arr [][N]);
void recorrerMatriz24 (int arr [][N]);
void recorrerMatriz13 (int arr [][N]);

int main () {
	int arreglo[N][N];
	time_t t; 
	/* inicializacion del generador de numeros random*/
	srand((unsigned) time(&t));
	
	asignarArreglo(arreglo);
	imprimirArreglo(arreglo); 
	recorrerMatriz24 (arreglo); 
	recorrerMatriz13 (arreglo); 
	
	return(0);
}

/*asignar valores a la matriz*/
void asignarArreglo(int arr[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			arr[i][j] = rand() % 10;
		}
	}
}
	
/*Imprimir la matriz */	
void imprimirArreglo (int arr[][N]){
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf(" %d ",  arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
	
/*Recorrer Matriz 24 */ 
void recorrerMatriz24 (int arr [][N]) {
	printf("Region 2 y 4\n");
	for(int i = 0; i<N; i++) {
		for(int j=0; j<N;j++){
			if(j<N-i && j>=i) { 
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else if (i>(N-1)/2 && j>=N-1-i && j<=i) {
				printf("%d", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}

/*Recorrer Matriz 24 */ 
void recorrerMatriz13 (int arr [][N]) { 
	printf("Region 1 y 3\n");
	for(int i=0; i<N; i++){
		for(int j=0;j<N;j++){
			if (j<=N/2){
				if (j<=(N-1)/2 && j<=i && j<=N-1-i) {
					printf("%d", i,j, arr[i][j]);
					printf("\t");
				}
				else { 
					printf("\t");
				}
			}
			else {
				if ( j>=i && j>=N-1-i && j>=(N-1)/2){
					printf("%d",  arr[i][j]);
					printf("\t");
				}
				else { 
					printf("\t");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

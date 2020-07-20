#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5


void asignarArreglo (int arr [][N]);
void imprimirArreglo (int arr [][N]);
void recorrerDiagonalPrincipal (int arr [][N]);
void recorrerDiagonalInvertida (int arr [][N]);
void recorrerMatriz12Ascendente (int arr [][N]);
void recorrerMatriz12Descendente (int arr [][N]);
void recorrerMatriz34Ascendente (int arr [][N]);
void recorrerMatriz34Descendente (int arr [][N]);
void recorrerMatriz14Ascendente (int arr [][N]);
void recorrerMatriz14Descendente (int arr [][N]);
void recorrerMatriz23Ascendente (int arr [][N]);
void recorrerMatriz23Descendente (int arr [][N]);
void recorrerMatriz1Ascendente (int arr [][N]);
void recorrerMatriz1Descendente (int arr [][N]);
void recorrerMatriz2Ascendente (int arr [][N]);
void recorrerMatriz2Descendente (int arr [][N]);
void recorrerMatriz3Ascendente (int arr [][N]);
void recorrerMatriz3Descendente (int arr [][N]);
void recorrerMatriz4Ascendente (int arr [][N]);
void recorrerMatriz4Descendente (int arr [][N]);

int main () {
	int arreglo[N][N];
	time_t t; 
	/* inicializacion del generador de numeros random*/
	srand((unsigned) time(&t));
	
	asignarArreglo(arreglo);
	imprimirArreglo(arreglo); 
	recorrerDiagonalPrincipal(arreglo);
	recorrerDiagonalInvertida(arreglo);
	recorrerMatriz12Ascendente(arreglo);
	recorrerMatriz12Descendente(arreglo);
	recorrerMatriz34Ascendente(arreglo);
	recorrerMatriz34Descendente(arreglo);
	recorrerMatriz14Ascendente(arreglo);
	recorrerMatriz14Descendente(arreglo);
	recorrerMatriz23Ascendente(arreglo);
	recorrerMatriz23Descendente(arreglo);
	recorrerMatriz1Ascendente (arreglo);
	recorrerMatriz1Descendente(arreglo);
	recorrerMatriz2Ascendente (arreglo);
	recorrerMatriz2Descendente(arreglo);
	recorrerMatriz3Ascendente (arreglo);
	recorrerMatriz3Descendente(arreglo);
	recorrerMatriz4Ascendente (arreglo);
	recorrerMatriz4Descendente (arreglo);
	
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

/*Recorrer la diagonal principal */ 
void recorrerDiagonalPrincipal (int arr[][N]) { 
	printf("Diagonal Principal\n");
	for(int i = 0; i<N; i++) {
		for(int j=0; j<N; j++){
			if(i==j){
				printf(" %d ", arr[j][j]);
				printf("\n");
			}
			else {
				printf(" "); 
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer la diagonal invertida*/ 
void recorrerDiagonalInvertida (int arr[][N]) {
	printf("Diagonal Invertida\n");
	for (int i=0; i<N; i++) {
		for (int j=0; j<(N-i);j++){
			if(j==(N-1-i)){
			printf("%d",arr[i][j]);
			printf("\n");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 1 y 2 de la matriz de forma ASCENDENTE*/
void recorrerMatriz12Ascendente (int arr[][N]){
	printf("Region 1 y 2 Ascendente\n");
	for (int i=0;i<N;i++){
		for (int j=0; j<(N-i);j++){
			printf("%d ", arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");	
}

/*Recorrer las regiones 1 y 2 de la matriz de forma DESCENDENTE*/
void recorrerMatriz12Descendente (int arr [][N]) {
	printf("Region 1 y 2 Descendente\n");
	for (int i=N-1;i>=0;i--){
		for (int j=0; j<(N-i);j++){
			printf("%d ", arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 3 y 4 de la matriz de forma ASCENDENTE*/
void recorrerMatriz34Ascendente (int arr [][N]){
	printf("Region 3 y 4 Ascendente\n");
	for(int i=0; i<N;i++) {
		for(int j=0;j<N ;j++) {
			if(j>=(N-1-i)){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 3 y 4 de la matriz de forma DESCENDENTE*/
void recorrerMatriz34Descendente (int arr [][N]){
	printf("Region 3 y 4 Descendente\n");
	for(int i=N-1; i>=0;i--) {
		for(int j=N-1; j>=0 ;j--) {
			if(j>=(N-1-i)) {
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 1 y 4 de la matriz de forma ASCENDENTE*/
void recorrerMatriz14Ascendente (int arr [][N]){
	printf("Region 1 y 4 Ascendente\n");
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < (1+i); j++) {
			printf("%d ", arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 1 y 4 de la matriz de forma DESCENDENTE*/
void recorrerMatriz14Descendente (int arr [][N]){
	printf("Region 1 y 4 Descendente\n");
	for(int i = (N-1); i>=0; i--) {
		for(int j =0; j<=i; j++) {
			printf("%d ", arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer las regiones 2 y 3 de la matriz de forma ASCENDENTE*/
void recorrerMatriz23Ascendente (int arr [][N]) {
	printf("Region 2 y 3 Ascendente\n");
	for(int i = 0; i<N; i++) {
		for(int j =0;j<N ; j++) {
			if (j<=(N-1) && j>=i){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}	
	printf("\n");
}
	
/*Recorrer las regiones 2 y 3 de la matriz de forma DESCENDENTE*/
void recorrerMatriz23Descendente (int arr [][N]){
	printf("Region 2 y 3 Descendente\n");
	for(int i = (N-1); i>=0; i--) {
		for(int j =(N-1); j>=0; j--) {
			if (j<=(N-1) && j>=i){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}

/*Recorrer la region 1 de forma ASCENDENTE*/
void recorrerMatriz1Ascendente (int arr [][N]){
	printf("Region 1 Ascendente\n");
	/*Para imprimir la región se dividira en 2*/
	for(int i=0; i<N; i++){
		if(i<=N/2) {
			for (int j=0;j<(1+i);j++){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
		}
		else {
			for(int j=0;j<=(N-1-i);j++){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer la region 1 de forma DESCENDENTE*/
void recorrerMatriz1Descendente (int arr [][N]){
	printf("Region 1 Descendente\n");
	for(int i=(N-1); i>=0; i--){
		if(i<=N/2) {
			for (int j=0;j<(1+i);j++){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
		}
		else {
			for(int j=0;j<=(N-1-i);j++){
				printf("%d ", arr[i][j]);
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}
/*Recorrer la region 2 de forma ASCENDENTE*/
void recorrerMatriz2Ascendente (int arr [][N]) {
	printf("Region 2 Ascendente\n");
	for(int i = 0; i<=N/2; i++) {
		for(int j=0; j<N;j++){
			if(j<N-i && j>=i) { 
				printf("%d ", arr[i][j]);
				printf("\t");
			}
			else {
			printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer la region 2 de forma DESCENDENTE*/
void recorrerMatriz2Descendente (int arr [][N]) {
	printf("Region 2 Descendente\n");
	for(int i =N/2; i>=0; i--) {
		for(int j=0; j<N;j++){
			if(j<N-i && j>=i) { 
				printf("%d", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}
	
/*Recorrer la region 3 de forma ASCENDENTE*/
void recorrerMatriz3Ascendente (int arr [][N]) {
	printf("Region 3 Ascendente\n");
	for(int i = 0; i <N; i++) {
		for(int j=0;j<N;j++){
			if(j>=i && j>=N-1-i && j>=(N-1)/2){
				printf("%d", arr[i][j]);
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}	
	
/*Recorrer la region 3 de forma DESCENDENTE*/
void recorrerMatriz3Descendente (int arr [][N]) {
	printf("Region 3 Descendente\n");
	for (int i=(N-1); i>=0;i--){
		for(int j=0; j<N; j++){
			if(j>=(N-1)/2 && j>=N-1-i && j>=i){
				printf("%d", arr[i][j]);				
				printf("\t");
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/*Recorrer la region 4 de forma ASCENDENTE*/
void recorrerMatriz4Ascendente (int arr [][N]){
	printf("Region 4 Ascendente\n");
	for(int i =0; i < N; i++) {
		for(int j=0; j<N;j++){
			if (i>=(N-1)/2 && j>=N-1-i && j<=i){
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

/*Recorrer la region 4 de forma DESCENDENTE*/
void recorrerMatriz4Descendente (int arr [][N]) {
	printf("Region 4 Descendente\n");
	for(int i =(N-1); i>=0;i--){
		for(int j=0;j<N;j++){
			if(j<=i && i>=(N-1)/2 && j>=N-1-i) { 
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

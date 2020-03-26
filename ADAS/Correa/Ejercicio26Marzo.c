#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
//ADA 4 visualizar region 2-4 y region 1-3
//Autor Audny Desiree Correa Ceballos
void asignarValores(int arr[][M]);
void imprimirArreglo(int arr[][M]);
void imprimirR2R4(int arr[][M]);
void imprimirR1R3(int arr[][M]);

int main(){
	int arreglo[M][M];
	time_t t;
	srand((unsigned) time(&t));
	asignarValores(arreglo);
	imprimirArreglo(arreglo);
	imprimirR2R4(arreglo);
	imprimirR1R3(arreglo);
	
}

void asignarValores(int arr[][M]){
	int i, j;
	for(j=0; j<M; j++){
		for(i=0; i<M; i++){
			arr[i][j]= rand()%10;
		}
	}
}

void imprimirArreglo(int arr[][M]){
	int i,j;
    for(i = 0; i < M; i++){
    	for(j = 0; j < M; j++){
    		printf("(%d,%d:%d)\t",i,j, arr[i][j]);
		}
		printf("\n");
   }  
}



void imprimirR2R4(int arr[][M]){
	int i, j;
	// fila 0 hasta (M-1)/2
	printf("Region 2-4\n");
	for(i=0; i<=(M-1)/2/* Este es mi (M-1)/2*/; i++){
		for(j=0;j<M; j++){
			if(j>= i && j<M-i){
				printf("(%d,%d:%d)\t",i,j, arr[i][j]);	
			}else{
				printf("\t");
			}	
		}
		printf("\n");
	}
	for(i=((M-1)/2)+1; i<M; i++){
		for(j=0;j<M;j++){
			if(j>=M-i-1 && j<=i){
				printf("(%d,%d:%d)\t",i,j, arr[i][j]);	
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

void imprimirR1R3(int arr[][M]){
	int i,j;
	printf("Region 1-3\n");
	for(i=0; i<=(M-1)/2; i++){
		for(j=0; j<M; j++){
			if(j<=i || j>=M-1-i){
				printf("(%d,%d:%d)\t",i,j, arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	for(i=((M-1)/2)+1; i<M;i++){
		for(j=0; j<M;j++){
			if (j<=M-1-i || j>=i){
				printf("(%d,%d:%d)\t",i,j, arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

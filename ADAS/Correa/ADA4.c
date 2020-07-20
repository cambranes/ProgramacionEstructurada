#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
//ADA 4
//Autor Audny Desiree Correa Ceballos
void asignarValores(int arr[][M]);
void imprimirArreglo(int arr[][M]);
void imprimirR1R2(int arr[][M]);
void imprimirR2R1(int arr[][M]);
void imprimirR3R4(int arr[][M]);
void imprimirR4R3(int arr[][M]);
void imprimirDiagonalPrincipal(int arr[][M]);
void imprimirDiagonalInversa(int arr[][M]);
void imprimirR1R4(int arr[][M]);
void imprimirR4R1(int arr[][M]);
void imprimirR2R3(int arr[][M]);
void imprimirR3R2(int arr[][M]);
void imprimirRegion1(int arr[][M]);
void imprimirRegion1Descendente(int arr[][M]);
void imprimirRegion2(int arr[][M]);
void imprimirRegion2Descendente(int arr[][M]);
void imprimirRegion3(int arr[][M]);
void imprimirRegion3Descendente(int arr[][M]);
void imprimirRegion4(int arr[][M]);
void imprimirRegion4Descendente(int arr[][M]);


int main(){
	int arreglo[M][M];
	time_t t;
	srand((unsigned) time(&t));
	asignarValores(arreglo);
	imprimirArreglo(arreglo);
	imprimirR1R2(arreglo);
	imprimirR2R1(arreglo);
	imprimirR3R4(arreglo);
	imprimirR4R3(arreglo);
	imprimirR1R4(arreglo);
	imprimirR4R1(arreglo);
	imprimirR2R3(arreglo);
	imprimirR3R2(arreglo);
	imprimirDiagonalPrincipal(arreglo);
	imprimirDiagonalInversa(arreglo);
	imprimirRegion1(arreglo);
	imprimirRegion1Descendente(arreglo);
	imprimirRegion2(arreglo);
	imprimirRegion2Descendente(arreglo);
	imprimirRegion3(arreglo);
	imprimirRegion3Descendente(arreglo);
	imprimirRegion4(arreglo);
	imprimirRegion4Descendente(arreglo);
	
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
    		printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
   }  
}

void imprimirR1R2(int arr[][M]){
	int i, j;
	// va desde la fila 0 hasta M-1
	printf("Region 1-2\n");
	for(i=0; i<M; i++){
		for(j=0; j<(M- i); j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR2R1(int arr[][M]){
	int i, j;
	//Va desde la fila M-1 hasta 0 
	printf("Region 2-1\n");
	for(j=0; j<M; j++){
		for(i=M-1; i>=(M-j-1); i--){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR3R4(int arr[][M]){
	int i,j;
	// va desde la fila 0 hasta M-1
	printf("Region 3-4\n");
	for(i=0; i<M;i++){
		for(j=(M-1-i);j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR4R3(int arr[][M]){
	int i,j;
	//Va desde la fila M-1 hasta 0
	printf("Region 4-3\n");
	for(i=(M-1);i>=0;i--){
		for(j=(M-1-i);j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}
void imprimirR1R4(int arr[][M]){
	int i, j;
	//Va de la fila 0 hasta M-1
	printf("Region 1-4\n");
	for(i=0; i<M; i++){
		for(j=0; j<=i;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR4R1(int arr[][M]){
	int i,j;
	//Va de la fila M-1 hasta 0
	printf("Region 4-1\n");
	for(i=(M-1);i>=0;i--){
		for(j=0;j<=i;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR2R3(int arr[][M]){
	int i, j;
	//va dede la fila M-1 hasta la fila 0
	printf("Region 2-3\n");
	for(i=0; i<M; i++){
		for(j=i; j<=(M-1); j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirR3R2(int arr[][M]){
	int i,j;
	// va desde la fila 0 hasta M-1
	printf("Region 3-2\n");
	for(i=(M-1);i>=0;i--){
		for(j=i;j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirDiagonalPrincipal(int arr[][M]){
	int i, j;
	printf("Diagonal Principal\n");
	for(i=0; i<M;i++){
		for(j=0;j<M;j++){
			if (i==j){
				printf("(%d,%d:%d)",i,j, arr[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void imprimirDiagonalInversa(int arr[][M]){
	int i, j;
	printf("Diagonal inversa\n");
	for(i=0; i<M;i++){
		for(j=0;j<(M-i);j++){
			if(j==(M-i-1)){
				printf("(%d,%d:%d)",i,j, arr[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void imprimirRegion1(int arr[][M]){
	int i,j;
	// desde fila 0 hasta M-1
	printf("Region 1\n");
	for(i=0;i<=2;i++){
		for(j=0; j<=i; j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);	
		}
		printf("\n");
	}
	for(i=3;i<=4;i++){
		for(j=0;j<=(M-i-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);	
		}
		printf("\n");
	}
}

void imprimirRegion1Descendente(int arr[][M]){
	int i,j;
	//fila M-1 hasta 0
	printf("Region 1 descendente\n");
	for(i=(M-1);i>=2;i--){
		for(j=0;j<=(M-i-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}	
	for(i=1;i>=0;i--){
		for(j=0;j<=i;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion2(int arr[][M]){
	int i, j;
	// fila 0 hasta (M-1)/2
	printf("Region 2\n");
	for(i=0; i<=2/* Este es mi (M-1)/2*/; i++){
		for(j=i;j<(M-i); j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion2Descendente(int arr[][M]){
	int i,j;
	//fila (M-1)/2 hasta 0
	printf("Region 2 descentente\n");
	for (i=((M-1)/2);i>=0;i--){
		for(j=i;j<(M-i);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion3(int arr[][M]){
	int i,j;
	//fila 0 hasta M-1
	printf("Region 3\n");
	for(i=0;i<=2;i++){
		for(j=(M-1-i);j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
	for(i=3;i<=4;i++){
		for(j=i;j<=4;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion3Descendente(int arr[][M]){
	int i,j;
	//Fila M-1 hasta 0
	printf("Region 3 descendente\n");
	for(i=(M-1);i>=2;i--){
		for(j=i;j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
	for(i=1;i>=0;i--){
		for(j=(M-1-i);j<=(M-1);j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion4(int arr[][M]){
	int i, j;
	//fila (M-1)/2 hasta M-1
	printf("Region 4\n");
	for(i=((M-1)/2); i<M; i++){
		for(j=(M-i-1);j<=i;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
}

void imprimirRegion4Descendente(int arr[][M]){
	int i,j;
	//fila M-1 hasta (M-1)/2
	printf("Region 4 descentente\n");
	for(i=(M-1);i>=((M-1)/2);i--){
		for(j=(M-1-i);j<=i;j++){
			printf("(%d,%d:%d)",i,j, arr[i][j]);
		}
		printf("\n");
	}
	
}

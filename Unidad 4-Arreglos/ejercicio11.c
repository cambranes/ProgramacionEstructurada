/*
Autor: Guillermo Canto
Entradas: Un entero N igual al numero de filas a imprimir.
Salidas: Imprime un triangulo de pascal de n filas invertido.
*/
#include <stdio.h>
#define N 100
int leer_n();
void pascal(int arreglo[][N], int n);
void imprimirInversa(int arreglo[][N], int n);
int main(int argc, char *argv[]) {
	int n = leer_n(); 
	int trianguloPascal[n][n];
	pascal(trianguloPascal, n);
	imprimirInversa(trianguloPascal,n);
	return 0; 
}

void pascal(int arreglo[][N], int n){ 

 	//int arreglo[n][n];  
	
	for (int linea = 0; linea < n; linea++){ 

		for (int i = 0; i <= linea; i++){ 
			// El primer y ultimo valor de cada linea es 1
			if (linea == i || i == 0) 
				arreglo[linea][i] = 1; 
			 //Los otros son la suma del valor de arriba a la izquierda y arriba a la derecha;
			else 
				arreglo[linea][i] = arreglo[linea-1][i-1] + arreglo[linea-1][i]; 
				//printf("%d ", arr[linea][i])
		} 
		//printf("\n"); 
	} 
} 
void imprimirInversa(int arreglo[][N], int n){
	for(int i = n; i >= 0; i--){
		for(int j = 0; j < n; j++ ){
			printf("%d ", arreglo[i][j]);
		}
		printf("\n");
	}
}
int leer_n(){
	int n;
	do{
		scanf("%d", &n);
	}while (n <= 0);
	return n;
}

/* QA                                    
Por: Eyder Antonio Concha Moreno

Entradas: 2
Salidas:
766623139 32765 
1 1 
1 32765
INCORRECTO

Entradas: 4
Salidas:
0 0 0 0 
1 3 3 1 
1 2 1 32767 
1 1 1077835936 32767 
1 32632 0 0 
INCORRECTO

El algoritmo no funciona adecuadamente
*/
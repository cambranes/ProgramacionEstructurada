/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño de la matriz.
	Salidas: La suma de los elementos excepto los de la diagonal principal e inversa.
	Procedimiento general: Lee una matriz cuadrada 4x4 y suma las posiciones que no formen parte
	de la diagonal principal o la diagonal inversa, siendo que si la fila es igual a la columna significa que
	se esta en la diagonal principal, y si la fila mas la columnas es igual a la cantidad de columnas menos uno significa
	que se esta en la diagonal inversa.
*/
#include <stdio.h>
#define N 100

int entrada();
int validarEntrada(int, int, int);
void leerMatriz(int [][N], int, int);
int sumarMatrizSinDiagonales(int [][N], int, int);
void imprimirMatriz(int [][N], int, int);

int main(){
	// Entrada
	int matriz[N][N];
	int sum = 0;
	int tam = 0;
	printf("Ingrese la medida de la matriz: ");
	scanf("%d", &tam);
	leerMatriz(matriz, tam, tam);

	// Proceso
	sum = sumarMatrizSinDiagonales(matriz, tam, tam);

	// Salida
	printf("\n\nMatriz ingresada: \n");
	imprimirMatriz(matriz, tam, tam);
	printf("La suma sin las diagonales es: %d", sum);
	return 0;
}
int entrada(){
    //QA:Funciona pero: no es aleatorio!!!!
	int num = 0;
	do{
		printf("Ingresa un numero entre 0 y 999: ");
		scanf("%d", &num);
	}while(validarEntrada(num, 0, 999));
	return num;
}

int validarEntrada(int num, int limiteInferior, int limiteSuperior){
    //QA: Entradas: 1, 0, 999, 678, -12, 1001
    //Salidas: 0, 0, 0, 0, 1, 1.               Funciona
	int validar = 1;
	if(num >= limiteInferior && num <= limiteSuperior){
		validar = 0;
	}
	return validar;
}

void leerMatriz(int matriz[][N], int filas, int columnas){
    //QA:Funciona pero: No es aleatorio!!!
	printf("Ingrese los valores para la matriz %d x %d.\n", filas, columnas);
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("Matriz[%d][%d]:\n ", i, j);
			matriz[i][j] = entrada();
		}
	}
}

int sumarMatrizSinDiagonales(int matriz[][N], int filas, int columnas){
    //QA: Entradas: Matriz 2x2, matriz 1x1, matriz 3x3 (1,2,3,4,5,6,7,8,9), matriz 0x0
    //salidas: 0 (ya que no suma nada en readlidad), 0 (igual), 20, 0.
    //Funciona correctamente
	int suma = 0;
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			if(!(i + j == columnas - 1) && i != j){
				suma += matriz[i][j];
			}
		}
	}
	return suma;
}

void imprimirMatriz(int matriz[][N], int filas, int columnas){
    //Imprime correctamente
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
}
//QA: Jorge Chí

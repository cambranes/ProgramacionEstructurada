/**
 * @file ADA 4.c
 * @author Giovanni Quintal
 * Salida: Secciones acordadas
 * @brief Determinar la matriz y secciones
 * @version 0.1
 * @date 2020-03-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

/**
* @brief Se inicializan los prototipos de las funciones
*/

void asignarMatriz(int arr[][N]);
void imprimirMatriz(int arr[][N]);
void recorrerMatriz1_2Ascendente(int arr[][N]);
void recorrerMatriz1_2Descendente(int arr[][N]);
void recorrerMatriz3_4Ascendente(int arr[][N]);
void recorrerMatriz3_4Descendente(int arr[][N]);
void recorrerMatriz1_4Ascendente(int arr[][N]);
void recorrerMatriz1_4Descendente(int arr[][N]);
void recorrerMatriz2_3Ascendente(int arr[][N]);
void recorrerMatriz2_3Descendente(int arr[][N]);
void recorrerMatriz1Ascendente(int arr[][N]);
void recorrerMatriz1Descendente(int arr[][N]);
void recorrerMatriz2Ascendente(int arr[][N]);
void recorrerMatriz2Descendente(int arr[][N]);
void recorrerMatriz3Ascendente(int arr[][N]);
void recorrerMatriz3Descendente(int arr[][N]);
void recorrerMatriz4Ascendente(int arr[][N]);
void recorrerMatriz4Descendente(int arr[][N]);
void recorrerDiagonalPrincipal(int arr[][N]);
void recorrerDiagonalInvertida(int arr[][N]);


/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo.
 * @return 
 */

int main() 
{
	int arreglo[N][N];
	time_t t;
	
	/* Intializes random number generator */
	srand((unsigned) time(&t));
	
	asignarMatriz(arreglo);
	imprimirMatriz(arreglo);
	recorrerMatriz1_2Ascendente(arreglo);
	recorrerMatriz1_2Descendente(arreglo);
	recorrerMatriz3_4Ascendente(arreglo);
	recorrerMatriz3_4Descendente(arreglo);
	recorrerMatriz1_4Ascendente(arreglo);
	recorrerMatriz1_4Descendente(arreglo);
	recorrerMatriz2_3Ascendente(arreglo);
	recorrerMatriz2_3Descendente(arreglo);
	recorrerMatriz1Ascendente(arreglo);
	recorrerMatriz1Descendente(arreglo);
	recorrerMatriz2Ascendente(arreglo);
	recorrerMatriz2Descendente(arreglo);
	recorrerMatriz3Ascendente(arreglo);
	recorrerMatriz3Descendente(arreglo)
	recorrerMatriz4Ascendente(arreglo);
	recorrerMatriz4Descendente(arreglo);
	recorrerDiagonalPrincipal(arreglo);
	recorrerDiagonalInvertida(arreglo);
	
	
	return 0;
}
	
	/**
	 * @brief 
	 * En esta función se agrega valores aleatorios a la matriz
	 * @param arr 
	 */
	void asignarMatriz(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				arr[i][j] = rand() % 9;
			}
		}
	}
	/**
	 * @brief 
	 * Impresión de la matriz
	 * @param arr 
	 */

	void imprimirMatriz(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++){
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}  
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 1-2 Ascendente
	 * @param arr 
	 */
	void recorrerMatriz1_2Ascendente(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < (N-i); j++ ){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 1-2 Descendente
	 * @param arr 
	 */
	void recorrerMatriz1_2Descendente(int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = 0; j <= (N-1-i); j++ ){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Matriz 3-4 Ascendente
	 * @param arr 
	 */
	void recorrerMatriz3_4Ascendente(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = (N-1-i); j < N; j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 3-4 Descendente
	 * @param arr 
	 */
	void recorrerMatriz3_4Descendente(int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = (N-1-i); j < N; j++){
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Matriz 1-4 Ascendente
	 * @param arr 
	 */
	void recorrerMatriz1_4Ascendente(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j <= i; j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 1-4 Descendente
	 * @param arr 
	 */
	void recorrerMatriz1_4Descendente(int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = 0; j <= i; j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

    /**
     * @brief 
     * Matriz 2-3 Ascendente
     * @param arr 
     */
	void recorrerMatriz2_3Ascendente(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = i; j < N; j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 2-3 Descendente
	 * @param arr 
	 */
	
	void recorrerMatriz2_3Descendente(int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = i; j < N; j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Matriz 1 Ascendente
	 */
	void recorrerMatriz1Ascendente((int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j <= i && j <(N-i); j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	
	/**
	 * @brief 
	 * Matriz 1 Descendente
	 */
	void recorrerMatriz1Descendente((int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = 0; j <= i && j <= (N-1-i); j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Matriz 2 Ascendente
	 */
		void recorrerMatriz2Ascendente((int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = i; j < N && j < (N-i); j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 2 Descendente
	 */
	void recorrerMatriz2Descendente((int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = i; j < N && j <= (N-1-i); j++){
				printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Matriz 3 Ascendente
	 */
	void recorrerMatriz3Ascendente((int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++ ){
				if(i+j >= N-1 && j-i >= 0){
					printf("%d ", arr[i][j]);
				}
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 3 Descendente
	 */
	void recorrerMatriz3Descendente((int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = 0; j < N; j++ ){
				if(i+j >= N-1 && j-i >= 0){
					printf("%d ", arr[i][j]);
				}
			} 
			printf("\n");
		}
		printf("\n");
	}


	/**
	 * @brief 
	 * Matriz 4 Ascendente
	 */
		void recorrerMatriz4Ascendente((int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j = (N-1-i); j <= i; j++){
					printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}
	
	/**
	 * @brief 
	 * Matriz 4 Descendente
	 */
	void recorrerMatriz4Descendente((int arr[][N]) {
		for(int i = N-1; i >= 0; i--) {
			for (int j = (N-1-i); j <= i; j++){
					printf("%d ", arr[i][j]);
			} 
			printf("\n");
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Diagonal Principal
	 */
	void recorrerDiagonalPrincipal((int arr[][N]) {
		for(int i = 0; i < N; i++) {
			printf("%d ", arr[i][i]);
		}
		printf("\n");
	}

	/**
	 * @brief 
	 * Diagonal Invertida
	 * @param arr 
	 */
	void recorrerDiagonalInvertida(int arr[][N]) {
		for(int i = 0; i < N; i++) {
			for (int j= 0; j < N; j++){
				if(i+j== N-1){
					printf("%d ", arr[i][j]);
				}
			}
		}
		printf("\n");
	}
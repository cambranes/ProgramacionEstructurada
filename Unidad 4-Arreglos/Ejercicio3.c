/*
Autor: Eyder Concha Moreno 09/Marzo/19
Entradas: Ninguna
Salidas: Impresion de numeros pares, y cantidad de impares
Procedimiento general:
1.-Asignamos numeros aleatoriamente al arreglo
2.-Iteramos atraves de cada elemento del arreglo, de ser divisible entre 2 sin residuo, lo imprimimos
3.-Iteramos atraves de cada elemento del arreglo, de no ser divisible entre 2 sin residuo, a�adimos 1 al contador de impares
4.- Imprimimos la cantidad de impares
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void llenarMatriz(int[SIZE][SIZE]);
int cantidadImpares(int[SIZE][SIZE]);
void imprimirPares(int[SIZE][SIZE]);

int main()
{
    int matriz[SIZE][SIZE];
    llenarMatriz(matriz);

    // Imprimimos los numeros con valor par
    printf("Los pares son: \n");
    imprimirPares(matriz);

    // Determinamos la cantidad de impares
    printf("\n la cantidad de impares es de: %d", cantidadImpares(matriz));

	return 0;
}

void llenarMatriz(int matriz[SIZE][SIZE]){
    // Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria
    //ya que toma el tiempo como parametro
    srand( time(NULL));
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            // Generamos numero del 0 al 100
            matriz[i][j] = rand() % 101;
        }
    }
}

int cantidadImpares(int matriz[SIZE][SIZE]){
    int numeroImpares = 0;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            // De no ser divisible entre dos, le agregamos el valor de verdad (1), de otra forma, le agregamos 0
            numeroImpares += ((matriz[i][j] % 2) != 0);
        }
    }
    return numeroImpares;
}

void imprimirPares(int matriz[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            // De ser divisible entre dos sin residuo (par), lo imprimimos
            (matriz[i][j] % 2) == 0 ? printf("%d\n",matriz[i][j]) : 0;
        }
    }
}

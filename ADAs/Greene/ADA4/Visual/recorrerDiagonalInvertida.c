/**
 * @file recorrerDiagonalInvertida.c
 * @author Carlos Enrique Greene Mex (greenecarlos17@gmail.com)
 * @brief Programa que recorre la diagonal inversa de forma visual de una matriz de NxN
 * @version 0.1
 * @date 2020-03-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Se define el valor de N como constante
#define N 3

/**
 * @brief Prototipos de las funciones
 * 
 * @param arr 
 */
void asignarArreglo(int arr[][N]);
void recorrerDiagonalInvertida(int arr[][N]);

/**
 * @brief Main donde inicia el programa
 * 
 */
int main()
{
    int arreglo[N][N];
    time_t t;

    srand((unsigned) time(&t));

    asignarArreglo(arreglo);

    recorrerDiagonalInvertida(arreglo);

    return 0;
}

/**
 * @brief Función donde asigna los valores que va contener la matriz
 * 
 * @param arr 
 */
void asignarArreglo(int arr[][N])
{
    for(int i=0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j]=rand() % 50;
        }
    }
}

/**
 * @brief Funcion que imprime la diagonal inversa de forma visual de la matriz
 * 
 * @param arr 
 */
void recorrerDiagonalInvertida(int arr[][N])
{
    for(int i=0; i<N; i++)
    {   
        for(int j=0; j<N-i-1; j++)
        {
            printf("\t");
        }
        printf("%d,%d: %d\t", N-i-1, i, arr[N-i-1][i]);  
        printf("\n");
    }
}
/**
 * @file recorrerMatriz2Ascendente.c
 * @author Carlos Enrique Greene Mex (greenecarlos17@gmail.com)
 * @brief Programa que recorre la zona 4 de forma ascendente de una matriz de NxN
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
void recorrerMatriz4Ascendente(int arr[][N]);

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

    recorrerMatriz4Ascendente(arreglo);

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
 * @brief Función que imprime la zona 4 forma de ascendente de la matriz
 * 
 * @param arr 
 */
void recorrerMatriz4Ascendente(int arr[][N])
{
    for(int i=0; i<N; i++)
    {
        for (int j=N-i-1; j<N; j++)
        {
            if (i>=j)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
        }
        printf("\n");
    }
}
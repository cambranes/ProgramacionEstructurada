/**
 * @file recorrerMatriz2Ascendente.c
 * @author Carlos Enrique Greene Mex (greenecarlos17@gmail.com)
 * @brief Programa que recorre la zona 4 de forma descendente y visual de una matriz de NxN
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
void recorrerMatriz4Descendente(int arr[][N]);

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

    recorrerMatriz4Descendente(arreglo);

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
 * @brief Función que imprime la zona 4 forma de descendente y visual de la matriz
 * 
 * @param arr 
 */
void recorrerMatriz4Descendente(int arr[][N])
{
    int aux;
    for(int i=N-1; i>=0; i--)
    {
        for (int j=0; j<N; j++)
        {
            aux=i+j;
            if (i>=j && aux>=N-1)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
            else if(i>=(N-1)/2)
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
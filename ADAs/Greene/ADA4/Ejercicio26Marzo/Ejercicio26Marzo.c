/**
 * @file recorrerMatriz1-2Ascendente.c
 * @author Carlos Enrique Greene Mex (greenecarlos17@gmail.com)
 * @brief Programa que imprime la zona 2-4 0 1-3 de una matriz de NxN según a elección del usuario
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
void elegirFuncion(int arr[][N]);
void recorrerMatriz2_4(int arr[][N]);
void recorrerMatriz1_3(int arr[][N]);

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

    elegirFuncion(arreglo);    

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
 * @brief Función que le dá la opción al usuario de elegir la zona que quiera escoger
 * 
 * @param arr 
 */
void elegirFuncion(int arr[][N])
{
    int opcion;

    printf("\n Elige el numero de las opciones:");
    printf("\n\t1. Sección 2-4");
    printf("\n\t2. Sección 1-3");
    printf("\n Opcion número: ");

    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        recorrerMatriz2_4(arr);
    break;

    case 2:
        recorrerMatriz1_3(arr);
    break;

    default:
        printf("Opción no válido, intentalo de nuevo");
    break;
    }
}

/**
 * @brief Función que imprime la zona 2-4 de la matriz
 * 
 * @param arr 
 */
void recorrerMatriz2_4(int arr[][N])
{
    int aux;
    for(int i=0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            aux=i+j; 
            if (i<=j && aux<=N-1)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
            else if (aux>=N-1 && i>=j)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
            else
            {
                printf("\t");
            }
            
        }
        printf("\n");
    }
}

/**
 * @brief Función que imprime la zona 1-3 de la matriz
 * 
 * @param arr 
 */
void recorrerMatriz1_3(int arr[][N])
{
    int aux;
    for(int i=0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            aux=i+j; 
            if (i>=j && aux<=N-1)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
            else if (aux>=N-1 && i<=j)
            {
                printf("%d,%d: %d\t", i, j, arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
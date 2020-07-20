#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 3

//Prototipado:
void generarMatriz(int arr[][N]);
void imprimirMatriz(int arr[][N]);
void sleccionarOpcion(int arr[][N]);
void nuevoCuadro(int arr[][N]);

//Opciones del usuario:
void opcion1(int arr[][N]);
void opcion2(int arr[][N]);

//Main
int main()
{
    //Generar:
    int matriz[N][N];
    time_t t;
    srand((unsigned)time(&t));

    generarMatriz(matriz);
    imprimirMatriz(matriz);
    sleccionarOpcion(matriz);

    return (0);
}

// FUNCIONES
void generarMatriz(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 51;
        }
    }
}

void imprimirMatriz(int arr[][N])
{
    printf("Matriz:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void sleccionarOpcion(int arr[][N])
{
    bool check = true;
    int opc;
    while (check)
    {
        printf("\n Opciones: \n\t0. Terminar");
        printf("\n\t1. Crear nuevo cuadro");
        printf("\n\t2. Opción 1");
        printf("\n\t3. Opción 2\n");

        scanf("%d", &opc);
        switch (opc)
        {
        case 0:
            check = false;
            break;
        case 1:
            nuevoCuadro(arr);
            break;
        case 2:
            opcion1(arr);
            break;
        case 3:
            opcion2(arr);
            break;
        default:
            printf("Sigue participando <3");
        }
    }
}

void nuevoCuadro(int arr[][N])
{
    system("clear");
    generarMatriz(arr);
    imprimirMatriz(arr);
    sleccionarOpcion(arr);
}

void opcion1(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < N - i && j >= i)
            {
                printf("%d \t", arr[i][j]);
            }
            else if (i >= ((N - 1) / 2) && j <= i && j >= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

void opcion2(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= (N / 2))
            {
                if (j >= i && j >= (N - 1) - i)
                {
                    printf("%d \t", arr[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }
            else if (j <= i && j <= (N - 1) - i)
            {
                printf("%d \t", arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

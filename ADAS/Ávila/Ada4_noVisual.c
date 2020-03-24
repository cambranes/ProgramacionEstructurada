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
void recorrerDiagonalInvertida(int matriz[][N]);

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
            arr[i][j] = rand() % 25;
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
    int opc;
    bool check = true;
    while (check)
    {
        printf("\n Opciones: \n\t0. Terminar");
        
        printf("\n\t1. Crear nuevo cuadro");
        printf("\n\t2. Sección 1-2 Ascendiente");
        printf("\n\t3. Sección 1-2 Descendente");
        printf("\n\t4. Sección 3-4 Ascendente");
        printf("\n\t5. Sección 3-4 Descendente");
        printf("\n\t6. Sección 1-4 Ascendente");
        printf("\n\t7. Sección 1-4 Descendente");
        printf("\n\t8. Sección 2-3 Ascendente");
        printf("\n\t9. Sección 2-3 Descendente");
        printf("\n\t10. Sección 1 Ascendiente");
        printf("\n\t11. Sección 1 Descendiente");
        printf("\n\t12. Sección 2 Ascendiente");
        printf("\n\t13. Sección 2 Descendiente");
        printf("\n\t14. Sección 3 Ascendiente");
        printf("\n\t15. Sección 3 Descendiente");
        printf("\n\t16. Sección 4 Ascendiente");
        printf("\n\t17. Sección 4 Descendiente");
        printf("\n\t18. Diagonal principal");
        printf("\n\t19. Diagonal principal invertida\n");

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
            recorrerMatriz1_2Ascendente(arr);
            break;
        case 3:
            recorrerMatriz1_2Descendente(arr);
            break;
        case 4:
            recorrerMatriz3_4Ascendente(arr);
            break;
        case 5:
            recorrerMatriz3_4Descendente(arr);
            break;
        case 6:
            recorrerMatriz1_4Ascendente(arr);
            break;
        case 7:
            recorrerMatriz1_4Descendente(arr);
            break;
        case 8:
            recorrerMatriz2_3Ascendente(arr);
            break;
        case 9:
            recorrerMatriz2_3Descendente(arr);
            break;
        case 10:
            recorrerMatriz1Ascendente(arr);
            break;
        case 11:
            recorrerMatriz1Descendente(arr);
            break;
        case 12:
            recorrerMatriz2Ascendente(arr);
            break;
        case 13:
            recorrerMatriz2Descendente(arr);
            break;
        case 14:
            recorrerMatriz3Ascendente(arr);
            break;
        case 15:
            recorrerMatriz3Descendente(arr);
            break;
        case 16:
            recorrerMatriz4Ascendente(arr);
            break;
        case 17:
            recorrerMatriz4Descendente(arr);
            break;
        case 18:
            recorrerDiagonalPrincipal(arr);
            break;
        case 19:
            recorrerDiagonalInvertida(arr);
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

void recorrerMatriz1_2Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < N - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz1_2Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < N - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz3_4Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= N - i - 1)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz3_4Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= N - i - 1)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz1_4Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz1_4Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz2_3Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz2_3Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz1Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= ((N - 1) / 2) && j <= i && j <= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz1Descendente(int arr[][N])
{
    for (int i = N; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= ((N - 1) / 2) && j <= i && j <= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz2Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < N - i && j >= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz2Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < N - i && j >= i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz3Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= ((N - 1) / 2) && j >= i && j >= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz3Descendente(int arr[][N])
{
    for (int i = N; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= ((N - 1) / 2) && j >= i && j >= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz4Ascendente(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= ((N - 1) / 2) && j <= i && j >= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerMatriz4Descendente(int arr[][N])
{
    for (int i = N - 1; 0 <= i; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= ((N - 1) / 2) && j <= i && j >= N - 1 - i)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerDiagonalPrincipal(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        // printf("\n");
    }
}

void recorrerDiagonalInvertida(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == N - i - 1)
            {
                printf("%d \t", arr[i][j]);
            }
            // else
            // {
            //     printf("\t");
            // }
        }
        printf("\n");
    }
}

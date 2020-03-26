#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
//Prototios
void separadorTablas();
void asignarValores(int arr[][N]);
void imprimirTabla(int arr[][N]);
void areaUnoDos(int arr[][N]);
void areaDosUno(int arr[][N]);
void areaTresCuatro(int arr[][N]);
void areaCuatroTres(int arr[][N]);
void areaUnoCuatro(int arr[][N]);
void areaCuatroUno(int arr[][N]);
void areaDosTres(int arr[][N]);
void areaTresDos(int arr[][N]);
void diagonalPrincipal(int arr[][N]);
void diagonalInversa(int arr[][N]);
void areaUno(int arr[][N]);
void areaUnoInversa(int arr[][N]);
void areaDos(int arr[][N]);
void areaDosInversa(int arr[][N]);
void areaTres(int arr[][N]);
void areaTresInversa(int arr[][N]);
void areaCuatro(int arr[][N]);
void areaCuatroInversa(int arr[][N]);

//Main

int main(){
    int tablaValores[N][N];
    time_t t;
    //Inicializa el asignador de numeros aleatorios
    srand((unsigned) time(&t));

    asignarValores(tablaValores);
    imprimirTabla(tablaValores);
    separadorTablas();
    areaUnoDos(tablaValores);
    separadorTablas();
    areaDosUno(tablaValores);
    separadorTablas();
    areaTresCuatro(tablaValores);
    separadorTablas();
    areaCuatroTres(tablaValores);
    separadorTablas();
    areaUnoCuatro(tablaValores);
    separadorTablas();
    areaCuatroUno(tablaValores);
    separadorTablas();
    areaDosTres(tablaValores);
    separadorTablas();
    areaTresDos(tablaValores);
    separadorTablas();
    areaUno(tablaValores);
    separadorTablas();
    areaUnoInversa(tablaValores);
    separadorTablas();
    areaDos(tablaValores);
    separadorTablas();
    areaDosInversa(tablaValores);
    separadorTablas();
    areaTres(tablaValores);
    separadorTablas();
    areaTresInversa(tablaValores);
    separadorTablas();
    areaCuatro(tablaValores);
    separadorTablas();
    areaCuatroInversa(tablaValores);
    separadorTablas();
    diagonalPrincipal(tablaValores);
    separadorTablas();
    diagonalInversa(tablaValores);

    return 0;
}

//Funciones
/*Funcion que separa las distintas impresiones de las areas de la matriz*/
void separadorTablas(){
    printf("----------------------------------------------------------------\n");
}

/*Funcion para asignar valores a la matriz*/
void asignarValores(int arr[][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand()%50;
        }
        
    }
    
}
/*Funcion para imprimir la matriz*/
void imprimirTabla(int arr[][N]){
    printf("Matriz principal:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

/*Funcion para imprimir el primer y segundo sector de la matriz*/
void areaUnoDos(int arr[][N]){
    printf("Area uno y dos:\n");
    for (int i = 0; i <= N-1 ; i++)
    {
        for (int j = 0; j <= (N-1-i); j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion para imprimir el primer y segundo sector de la matriz de forma inversa*/
void areaDosUno(int arr[][N]){
    printf("Area uno y dos inversa:\n");
    for (int i = N-1; i >= 0 ; i--)
    {
        for (int j = 0; j <= (N-1-i); j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion para imprimir la diagonal principal de la matriz*/
void diagonalPrincipal(int arr[][N]){
    printf("Diagonal principal:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i==j)
            {
                printf("%d\t",arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
/*Funcion para imprimir la diagonal Inversa de la matriz*/
void diagonalInversa(int arr[][N]){
    printf("Diagonal inversa:\n");
    int j = N-1;
    for (int i = 0; i < N; i++){
        for (int k = N-1; k > i; k--)
        {
            printf("\t");
        }
        j = N - 1 - i;
        printf("%d\n",arr[i][j]);
    }
}
/*Funcion para imprimir los sectores tres y cuatro de la matriz*/
void areaTresCuatro(int arr[][N]){
    printf("Area tres y cuatro:\n");
    for (int i = 0; i < N; i++)
    {
        for (int k = i; k < N-1; k++)
        {
            printf("\t");
        }
        for (int j = N-1-i; j < N; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion para imprimir los sectores tres y cuatro de la matriz de manera inversa*/
void areaCuatroTres(int arr[][N]){
    printf("Area tres y cuatro inversa:\n");
    for (int i = N-1; i >= 0; i--)
    {
        for (int k = i; k < N-1; k++)
        {
            printf("\t");
        }
        for (int j =N-1-i ; j < N; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
/*Funcion para imprimir los sectores uno y cuatro de la matriz*/
void areaUnoCuatro(int arr[][N]){
    printf("Area uno y cuatro:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion para imprimir los sectores uno y cuatro de la matriz de forma inversa*/
void areaCuatroUno(int arr[][N]){
    printf("Area uno y cuatro inversa:\n");
    for (int i = N-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
/*Funcion para imprimir los sectores dos y tres de la matriz*/
void areaDosTres(int arr[][N]){
    printf("Area dos y tres:\n");
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("\t");
        }
        for (int j = i; j < N; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion para imprimir los sectores dos y tres de la matriz de forma inversa*/
void areaTresDos(int arr[][N]){
    printf("Area dos y tres inversa:\n");
    for (int i = N-1; i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            printf("\t");
        }
        for (int j = i; j < N; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
/*Funcion que imprime el area uno de la matriz*/
void areaUno(int arr[][N]){
    printf("Area uno:\n");
    for (int i = 0; i < N; i++)
    {
        if (i < N/2)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d\t",arr[i][j]);
            } 
            printf("\n");
        }
        else
        {
            for (int j = 0; j <= N-1-i ; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    }   
}
/*Funcion que imprime el area uno de la matriz de forma inversa*/
void areaUnoInversa(int arr[][N]){
    printf("Area uno inversa:\n");
    for (int i = 0; i < N; i++)
    {
        if (i < N/2){
            for (int k = 0; k < N-i-1; k++)
            {
                printf("\t");
            }    
        }
        else{
            for (int k = 0; k < i; k++)
            {
                printf("\t");
            }     
        }
        
        if (i < N/2)
        {
            for (int j = i; j >= 0; j--)
            {
                printf("%d\t",arr[i][j]);
            } 
            printf("\n");
        }
        else
        {
            for (int j = N-i-1; j >= 0 ; j--)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    } 
}
/*Funcion que imprime el area dos de la matriz*/
void areaDos(int arr[][N]){
    printf("Area dos:\n");
    for (int i = 0; i <= N/2; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("\t");
        }
        for (int j = i; j < N-i; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

/*Funcion que imprime el area dos de la matriz de forma inversa*/
void areaDosInversa(int arr[][N]){
    printf("Area dos inversa:\n");
    for (int i = N-1; i >= 0 ; i--)
    {
        if (i > N/2)
        {
            for (int k = i-1; k >= 0; k--)
            {
                printf("\t");
            }
            printf("\n");
        }
        else
        {
            for (int k = i-1; k >= 0; k--)
            {
                printf("\t");
            }
            for (int j = i ; j <= N-1-i; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    }
}
/*Funcion que imprime el area tres de la matriz*/
void areaTres(int arr[][N]){
    printf("Area tres:\n");
    for (int i = 0; i < N; i++)
    {
        if (i < N/2){
            for (int k = 0; k < N-i-1; k++)
            {
                printf("\t");
            }    
        }
        else{
            for (int k = 0; k < i; k++)
            {
                printf("\t");
            }     
        }
        
        if (i < N/2)
        {
            for (int j = N-i-1; j < N; j++)
            {
                printf("%d\t",arr[i][j]);
            } 
            printf("\n");
        }
        else
        {
            for (int j = i ; j < N ; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    } 
}
/*Funcion que imprime el area tres de la matriz de forma inversa*/
void areaTresInversa(int arr[][N]){
    printf("Area tres inversa:\n");
    for (int i = 0; i < N; i++)
    {
        if (i < N/2)
        {
            for (int j = N-1; j >= N-1-i; j--)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = N-1; j >= i; j--)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    
}
/*Funcion que imprime el area cuatro de la matriz*/
void areaCuatro(int arr[][N]){
    printf("Area cuatro:\n");
    for (int i = 0; i < N; i++)
    {
        for (int k = 1; k < N-i; k++)
        {
            printf("\t");
        }
        if (i >= N/2)
        {
            for (int  j = N-i-1; j <= i ; j++)
            {
               printf("%d\t",arr[i][j]); 
            }
        }
        printf("\n");
    }
}
/*Funcion que imprime el area cuatro de la matriz de forma inversa*/
void areaCuatroInversa(int arr[][N]){
    printf("Area cuatro inversa:\n");
    for (int i = N-1; i > 0; i--)
    {
        for (int k = i; k < N-1; k++)
        {
            printf("\t");
        }
        for (int j = N-i-1; j <= i; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    }
    
}
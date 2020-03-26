#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
//Prototipos
void asignarValores(int arr[][N]);
void imprimirTabla(int arr[][N]);
void separadorTablas();
void areaUnoTres(int arr[][N]);
void areaDosCuatro(int arr[][N]);

//Main
int main(){
    int tablaValores[N][N];
    time_t t;
    //Inicializa el asignador de numeros aleatorios
    srand((unsigned) time(&t));

    asignarValores(tablaValores);
    imprimirTabla(tablaValores);
    separadorTablas();
    areaUnoTres(tablaValores);
    separadorTablas();
    areaDosCuatro(tablaValores);

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

/*Funcion para imprimir el area uno y tres de la matriz*/
void areaUnoTres(int arr[][N]){
    for (int i = 0; i < N; i++)
    {
        if (i < N/2)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d\t",arr[i][j]);
            } 

            for (int k = i+1; k < N-i-1; k++)
            {
                printf("\t");
            }
            
            for (int j = N-i-1; j < N; j++)
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
            
            for (int k = N-i; k < i; k++)
            {
                printf("\t");
            }
            
            for (int j = i ; j < N ; j++)
            {
                printf("%d\t",arr[i][j]);
            }

            printf("\n");
        }
    }     
}
/*Funcion para imprimir el area dos y cuatro de la matriz*/
void areaDosCuatro(int arr[][N]){
    for (int i = 0; i < N; i++)
    {
        if (i < N/2)
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
        else
        {
            for (int k = 0; k <= (N-2-i); k++)
            {
                printf("\t");
            }
            for (int  j = N-i-1; j <= i ; j++)
            {
               printf("%d\t",arr[i][j]); 
            }
            printf("\n");
        }
        
    }
}
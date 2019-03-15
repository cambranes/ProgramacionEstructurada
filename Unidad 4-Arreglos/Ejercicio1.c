//1. Escribe un programa que lea una matriz de 15 por 12 y que calcule:
//  a. El menor elemento de la matriz.
//  b. La suma de los elementos que estén en las primeras 5 filas
//  c. La suma de los elementos que estén en las últimas 5 columnas.
//Autor: Rodrigo Hernandez Gongora

#include <stdio.h>
#define SIZE1 15
#define SIZE2 12

void leerMatriz(int [SIZE1][SIZE2]);
int menor(int [SIZE1][SIZE2]);
int suma1(int [SIZE1][SIZE2]);
int suma2(int [SIZE1][SIZE2]);
void ordenar(int [SIZE1][SIZE2]);
void salidas(int x, int y, int z);

int main(){
    int matriz[SIZE1][SIZE2], min=0, sum1=0, sum2=0;
    leerMatriz(matriz);
    min=menor(matriz);
    sum1=suma1(matriz);
    sum2=suma2(matriz);
    salidas(min, sum1, sum2);
}


/*
  Funcion lee correctamente los valores ingresados y los aloja en la matriz 
*/
void leerMatriz(int matriz[SIZE1][SIZE2]){
    int i=0, j=0;
    for (i=0; i<15; i++) {
        for (j=0; j<12; j++) {
            printf("Introduce un numero\n");
            scanf("%d", &matriz[i][j]);
        }
    }
}
/*
  El numero mas grande que se le puede asignar a un int es 2,147,483,647 por lo tanto el codigo es erroneo ya que si alguien
  solo ingresa numero mayores a min no funcionaría de manera correcta
*/
int menor(int matriz[SIZE1][SIZE2]){
// 32767 es el numero mas grande que se le puede asignar a un Int, por lo que se usa como bandera para un numero menor
    int min=32767, i=0, j=0;
    for (i=0; i<15; i++) {
        for (j=0; j<12; j++) {
            if (matriz[i][j]<min) {
                min=matriz[i][j];
            }
        }
    }
    return min;
}

/*
  La funciona suma correctamente las primeras 5 filas
*/
int suma1(int matriz[SIZE1][SIZE2]){
    int suma=0, i=0, j=0;
    for (i=0; i<5; i++) {
        for (j=0; j<12; j++) {
            suma+=matriz[i][j];
        }
    }
    return suma;
}

/*
  La funciona suma correctamente las ultimas 5 columnas
*/
int suma2(int matriz[SIZE1][SIZE2]){
    int suma=0, i=0, j=1;
    for (i=0; i<15; i++) {
        for (j=8; j<12; j++) {
            suma+=matriz[i][j];
        }
    }
    return suma;
}

void salidas(int x, int y, int z){
    printf("El numero menor del arreglo es: %d\n", x);
    printf("La suma de las primeras 5 filas es: %d\n", y);
    printf("La suma de las ultimas 5 columnas es: %d\n", z);
}

/*
  QA: Raul Rivadeneyra
  Todo el codigo funciona bien a excepcion de el limite dentro de la funcion menor(), es un error sencillo de cambiar el limite.
*/

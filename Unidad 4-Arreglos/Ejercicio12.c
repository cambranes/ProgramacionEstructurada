/**
 * @author Luis Gerardo Leon Ortega
Se dice que una matriz tiene un punto silla si alguna posición de la matriz es el menor
de su fila, y a la vez el mayor de su columna. Escribir un programa que llene una matriz
con números aleatorios reales del 0 al 999 y que determine si la matriz tiene a puntos
silla.

 Example:

 Puntos silla: 1

   C
 F 22 | 21  | 20
   45 | 32 | 3
   60 | 32 | 2
*/
#include <stdio.h>
#define X 3
#define Y 3

void entradas(int[X][Y]);
void proceso(int[X][Y], int*);
void salidas(int);

int main(){
    int matriz[X][Y];
    int puntosSilla = 0;
    /* entrada */
    entradas(matriz);

    /*
    for (int i = 0; i < X; ++i) {
        printf("\n");
        for (int j = 0; j < Y; ++j) {
            printf("| %i |", matriz[i][j]);
        }
    } */
    /* proceso */
    proceso(matriz, &puntosSilla);
    /* salidas */
    salidas(puntosSilla);
    return 0;
}
void entradas(int matriz[X][Y]){
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            printf("Ingresa el valor[%i][%i]: \n", i, j);
            scanf(" %i", &matriz[i][j]);
        }
    }
}

void proceso(int matriz[X][Y], int* puntosSilla){
    for (int i = 0; i < X; ++i) {
        int minimum = 1000; //Min value
        int maximum = 0; //Max value
        //Get min val
        for (int j = 0; j < Y; ++j) {
            if(matriz[i][j] < minimum){
                minimum = matriz[i][j];
            }
        }
        //Get max val
        for (int j = 0; j < Y; ++j) {
            if(matriz[i][j] == minimum){
                for (int k = 0; k < X; ++k) {
                    if(matriz[k][j] > maximum){
                        maximum = matriz[k][j];
                    }
                }

            }
        }
        if(minimum == maximum){
            *puntosSilla = *puntosSilla + 1;
            printf("Encontre un punto silla ");
        }
    }
}

void salidas(int puntosSilla){
    printf("\n Cantidad de puntos silla %i", puntosSilla);
}
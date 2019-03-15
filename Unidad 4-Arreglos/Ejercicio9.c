//9. Escribir un programa que llene una matriz de 9 x 9 con números enteros. El programa
//debe determinar si la matriz representa un sudoku.
//Autor: Rodrigo Hernandez Gongora

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9

void llenarMatriz(int [SIZE][SIZE]);
int verificarSudoku(int [SIZE][SIZE]);

int main() {
    int matriz[SIZE][SIZE], flag=0;
    llenarMatriz(matriz);
    flag=verificarSudoku(matriz);
    if (flag==0) {
        printf("El sudoku es valido\n");
    }
    else{
        printf("El sudoku es invalido\n");
    }
    return 0;
}
/*
  Ingresa numeros aleatoreos del 0 al 9 no del 1 al 9
*/
void llenarMatriz(int matriz[SIZE][SIZE]){
    // Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria ya que toma el tiempo como parametro
    srand( time(NULL));
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            // Generamos numero del 0 al 9
            matriz[i][j] = rand() % 10;
            printf("La posicion %d, %d tiene el numero %d\n", i, j, matriz[i][j]);
        }
    }
}
/*
  La funcion checa de manera correcta si no se repiten de manera horizontal, vertical o por cuadrante
*/
int verificarSudoku(int matriz[SIZE][SIZE]){
    int i=0, j=0, columna=0, fila=0, flag=0;
//    Verificamos que las columnas sean diferentes
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            for (columna=0; columna<9; columna++) {
                if (matriz[i][j]==matriz[i][columna] && columna!=j) {
                    flag=1;
                }
            }
        }
    }
//    Verificamos que las filas sean diferentes
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            for (fila=0; fila<9; fila++) {
                if (matriz[i][j]==matriz[fila][j] && fila!=i) {
                    flag=1;
                }
            }
        }
    }
//    Verificamos que los cuadros de 3x3 sean diferentes
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            for (fila=(i/3)*3; fila<(i/3)*3+3; fila++) {
                for (columna=(j/3)*3; columna<(j/3)*3+3; columna++) {
                    if (fila!=1 && columna!=j && matriz[fila][columna]==matriz[i][j]) {
                        flag=1;
                    }
                }
            }
        }
    }
    return flag;
}

/*
QA: Raul Rivadeneyra
El codigo funciona correctamente a excepcion de que tambien se asigna el numero 0
*/

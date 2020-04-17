/**
 * @file Ada6-Sudoku.c
 * @author Giovanni Quintal
 * @brief 
 * @version 0.1
 * @date 2020-04-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tablero{
    int sudoku[3][3];
}tablero;

/**
 * @brief Se inicializan los prototipos de las funciones
 * 
 * @param tableroMenor 
 */
void asignarSudokuRamdom(tablero tableroMenor[][3]);
void imprimirSudoku(tablero tableroMenor[][3]);
void revisarTablerosMenores(tablero tableroMenor[][3], int*CTL);
void revisarAllFilas(tablero tableroMenor[][3], int*CTL);
void revisarAllColumnas(tablero tableroMenor[][3], int*CTL);
void imprimirConfirmacion(int CTL);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
 * 
 * @return int 
 */
int main(){

    int CTL=1;
    tablero tableroMenor[3][3];
 
    asignarSudokuRamdom(tableroMenor);
    imprimirSudoku(tableroMenor);
    revisarTablerosMenores(tableroMenor,&CTL);
    revisarAllFilas(tableroMenor,&CTL);
    revisarAllColumnas(tableroMenor,&CTL);
    imprimirConfirmacion(CTL);
}

/**
 * @brief Se crea el Sudoku con dimension de 9x9.
 * 
 * @param tableroMenor 
 */
void asignarSudokuRamdom(tablero tableroMenor[][3]){
    time_t t;
    srand((unsigned) time(&t));
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            for(int j=0;j<3;j++){
                for(int l=0;l<3;l++){
                    tableroMenor[i][j].sudoku[k][l]=rand()%10;
                }
            }
        }
    }
}

/**
 * @brief Se revisan los 9 tableros menores y asi con la variable CTL se sepa si se repite algún numero.
 * 
 * @param tableroMenor 
 * @param CTL 
 */
void revisarTablerosMenores(tablero tableroMenor[][3], int*CTL){
    int contador;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            contador=0;
            for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                    if(tableroMenor[i][j].sudoku[i][j]==tableroMenor[i][j].sudoku[k][l]){
                        contador++;
                    }
                }
            if(contador>0){
                *CTL=0;
            }     
            }
        }
    }
}

/**
 * @brief Se revisan los 9 filas y asi con la variable CTL se sepa si se repite algún numero.
 * 
 * @param tableroMenor 
 * @param CTL 
 */
void revisarAllFilas(tablero tableroMenor[][3], int*CTL){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                   if(tableroMenor[0][j].sudoku[i][j]==tableroMenor[1][j].sudoku[k][j] || tableroMenor[0][j].sudoku[i][j]==tableroMenor[2][j].sudoku[k][j]){
                    *CTL=0;
                }
                }  
        }
    } 
}

/**
 * @brief Se revisan los 9 columnas y asi con la variable CTL se sepa si se repite algún numero.
 * 
 * @param tableroMenor 
 * @param CTL 
 */
void revisarAllColumnas(tablero tableroMenor[][3], int*CTL){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                for(int l=0;l<3;l++){
                   if(tableroMenor[i][0].sudoku[i][j]==tableroMenor[i][1].sudoku[i][l] || tableroMenor[i][0].sudoku[i][j]==tableroMenor[i][2].sudoku[i][l]){
                    *CTL=0;
                }
                }  
        }
    } 
}

/**
 * @brief Se imprime el sudoku completo.
 * 
 * @param tableroMenor 
 */
void imprimirSudoku(tablero tableroMenor[][3]){
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            for(int j=0;j<3;j++){
                for(int l=0;l<3;l++){
                    printf("%d  ",tableroMenor[i][j].sudoku[k][l]);
                }
            }
            printf("\n");
        }
    }
}

/**
 * @brief Se verifica si es un sudoku.
 * 
 * @param CTL 
 */
void imprimirConfirmacion(int CTL){
    if (CTL==0){
        printf("\n No es un sudoku--^");
    } else {
        printf("\n Es un sudoku--^");
    }
}
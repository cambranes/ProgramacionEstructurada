#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Verificar si un Sudoku generado automaticamente cumple con las reglas del Sudoku: 
//Reglas: 
//que solo sean números del 1 al 9
//Que los numeros no se repitan, horizontal, vertical y en la submatriz
//Autor: Pamela Canul 

//Definicion de las estructuras de datos
typedef struct submatriz
{
    int matrizMenor[3][3];    
}submatriz;

typedef struct sudoku
{
    submatriz matrizMayor[3][3];
}sudoku;

//Prototipos de las funciones
void asignarValores (sudoku* tablero);
void imprimirSudoku (sudoku* tablero);
int checarVertical (sudoku* tablero); 
int checarHorizontal (sudoku* tablero); 
int checarSubmatriz (sudoku* tablero); 
void resultado (sudoku* tablero); 

int main ( ){

    time_t t; 
	/* inicializacion del generador de numeros random*/
	srand((unsigned) time(&t));

    sudoku sudok; 

    //Asignar valores al sudoku e imprimirlo
    asignarValores(&sudok); 
    imprimirSudoku(&sudok);

    //Imprimir si se trata de un Sudoku o no
    resultado (&sudok); 

    return 0; 
}

//Funcion para asignar los valores al Sudoku
void asignarValores (sudoku* tablero){
    //La i y la j son para el tablero mayor
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            //La p y la q son para el tablero menor
            for (int p=0;p<3; p++){
                for(int q=0;q<3;q++){
                    (*tablero).matrizMayor[i][j].matrizMenor[p][q]= rand() % 9 + 1;
                }
            }
        }
    }
}

//Funcion para imprimir los valores del Sudoku
void imprimirSudoku (sudoku* tablero){
    //La i y la j son para el tablero mayor
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            //La p y la q son para el tablero menor
            for (int p=0;p<3; p++){
                printf(" ");

                for(int q=0;q<3;q++){
                    printf("%d",(*tablero).matrizMayor[i][p].matrizMenor[j][q]);
                    printf(" ");
                }
                printf("\t");
            }
            printf("\n");
        }
        printf("\n");
    }
}

//Funcion para verificar los valores del Sudoku de manera vertical
int checarVertical (sudoku* tablero){
    //Se usa una bandera para dar valores verdaderos o falsos
    int verificar=1; 
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            int num=0;
            int N[9];
            for (int p=0;p<3; p++){
                for(int q=0;q<3;q++){
                    N[num]=(*tablero).matrizMayor[j][i].matrizMenor[q][p];
                    num++;
                }
            }
            //Se ferifica que no se repita el numero del lugar p,q
            for (int e=0; e<9;e++){
                for (int f=0;f<9;f++){
                    if(N[e]==N[f] && f!=e){
                        verificar=0;
                    }
                }
                num=0;
            }
        }
    }
    return verificar;
}

//Funcion para verificar los valores del Sudoku de manera horizontal
int checarHorizontal (sudoku* tablero){
    //Se usa una bandera para dar valores verdaderos o falsos
    int verificar=1; 
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            int num=0;
            int N[9];
            for (int p=0;p<3; p++){
                for(int q=0;q<3;q++){
                    N[num]=(*tablero).matrizMayor[i][p].matrizMenor[j][q];
                    num++;
                }
            }
            //Se ferifica que no se repita el numero del lugar p,q
            for (int e=0; e<9;e++){
                for (int f=0;f<9;f++){
                    if(N[e]==N[f] && f!=e){
                        verificar=0;
                    }
                }
                num=0;
            }
        }
    }
    return verificar;
}

//Funcion para verificar los valores del Sudoku en toda la submatriz donde se encuentra
int checarSubmatriz (sudoku* tablero){
    //Se usa una bandera para dar valores verdaderos o falsos
   int verificar=1; 
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            int num=0;
            int N[9];
            for (int p=0;p<3; p++){
                for(int q=0;q<3;q++){
                    N[num]=(*tablero).matrizMayor[i][j].matrizMenor[p][q];
                    num++;
                }
            }
            //Se ferifica que no se repita el numero 
            for (int e=0; e<9;e++){
                for (int f=0;f<9;f++){
                    if(N[e]==N[f] && f!=e){
                        verificar=0;
                    }
                }
                num=0;
            }
        }
    }
    return verificar;
} 

//Funcion de impresion del resultado
void resultado (sudoku* tablero){
    //Se asigna los valores de las banderas de las funciones para que se puedan analizar
    int horizontal=checarHorizontal(tablero);
    int vertical=checarVertical(tablero); 
    int submatriz=checarSubmatriz(tablero);
    //Se analizan las banderas
    if (horizontal==1 && submatriz==1 && vertical==1){
        //Si el resultado es positivo se le notifica al usuario
        printf("\tFelicidades es un SUDOKU\t");
    }
    else {
        //Si el resultado es negativo se le notifica al usuario
        printf("\tLo siento, no es un SUDOKU\t");
    }
}

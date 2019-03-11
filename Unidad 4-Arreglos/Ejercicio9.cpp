/*
Autor: Alejandro Torre Reyes
Entradas: ninguna
Salida: una matriz y verifica si esta es un sudoku valido
Proceso: Escribir un programa que llene una matriz de 9 x 9 con números enteros. El programa
debe determinar si la matriz representa un sudoku.
La matriz es un sudoku si un numero no se encuentra repetido en su misma fila y columna.
Si en la matriz se admiten numeros del 1 al 9 y no se deben repetir quiere decir que en
una misma fila deben estar todos los numeros del 1 al 9 (ordenados o no). Por lo que se
decidio sumar todos los elementos de las filas y si todas estas suman 45 (1+2+3+4+5+6+7+8+9)
se toma la matriz como un sudoku.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int tam = 9;

void llenar_matriz(int arr[tam][tam]){
    srand(time(0));
    int i,j;
    for(i=0;i<tam;i++){ //Ingresar valores a la matriz
        cout << "\n\n";
        for(j=0;j<tam;j++){
            arr[i][j] = 1 + (rand()%9); //ingresar valores a la matriz del 1 al 9
            cout << arr[i][j] << "  ";
        }
    }
    cout << endl;
}
void sudoku(){ //Funcion para verificar si la matriz creada es un sudoku
    int matriz[tam][tam];
    int sum[tam];
    int i,j,suma,val;
    llenar_matriz(matriz); //llamar a la funcion anterior

    for(i=0;i<tam;i++){ //ciclo para sumar las filas
            suma = 0;
        for(j=0;j<tam;j++){
            suma = suma + matriz[i][j];
        }
        sum[i] = suma;
    }
    for(i=0;i<tam;i++){ //validar si todas sumaron 45
        if(sum[i]==45){
            val++;
        }
    }
    if(val == tam){ //
        cout << "Es un SUDOKU";
    }else{
        cout << "No es un SUDOKU";
    }
}
int main()
{
    sudoku();
    return 0;
}

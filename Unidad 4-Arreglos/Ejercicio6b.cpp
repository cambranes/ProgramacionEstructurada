/*
Autor: Alejandro Torre Reyes
Entradas: un numero n filas y un numero m de columnas
Salidas: una matriz y su transpuesta
Proceso: Escribir un programa que calcule la transpuesta de una matriz. Dada una matriz A de orden n
x m, con elementos en la posición (i, j), entonces la transpuesta de A es de orden m x n, y
los elementos correspondientes (j, i).
*/

#include <iostream>
#include <cstdlib>

using namespace std;
const int tam = 20;

int entrada_fila(){ //Metodo para leer el numero de filas
    int x;
    cout << "Introduzca numero de filas\n";
    cin >> x;
    return x;
}
int entrada_columna(){ //Metodo para leer el numero de columnas
    int y;
    cout << "Introduzca numero de columnas\n";
    cin >> y;
    return y;
}
void fill_matriz(int fila, int col){ //Metodo para crear la matriz y transponerla
    int matriz[tam][tam];
    int i,j;
    cout << "MATRIZ ORIGINAL";
    for(i=0;i<fila;i++){
            cout << "\n\n";
        for(j=0;j<col;j++){
            matriz[i][j] = (rand()%10);
            cout << matriz[i][j] << "  ";
        }
    }
    cout << endl;
    cout << "MATRIZ TRANSPUESTA"; //ciclo para transponer la matriz
    cout << endl;
    for(i=0;i<col;i++){
            cout << "\n\n";
        for(j=0;j<fila;j++){
            cout << matriz[j][i]<< "  ";
        }
    }
}

int main()
{
    int n,m;
    int arr[tam][tam];
    n = entrada_fila();
    m = entrada_columna();
    fill_matriz(n,m);

   return 0;
}

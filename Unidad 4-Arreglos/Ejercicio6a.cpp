
/*
Autor: Alejandro Torre Reyes
Entradas: un numero n.
Salida: la suma de los elementos de la matriz n*n que no pertenecen a la diagonal principal ni a la diagonal inversa.
Proceso: Escribir un programa que lea una matriz cuadrada n x n llena con números aleatorios del
0 al 999. El programa debe calcular la suma de todos los números de la matriz excepto los
que se encuentran en la diagonal principal y la diagonal inversa.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
const int nmax=10;

int entradas(){ //Funcion para leer las entradas
    int x;
    cout << "Ingrese n\n";
    cin >> x;
    return x;
}
void FillMatriz(int y){ //Funcion para sumar los elementos que no se encuentran en las diagonales.
    int i,j,suma = 0;
    int matriz[nmax][nmax];

    for(i=0;i<y;i++){ //ciclo para asignar los elementos a la matriz
            cout << "\n\n";
        for(j=0;j<y;j++){
          matriz[i][j] = 1+(rand()%999);
          cout << matriz[i][j] << "  ";
        }
    }
    cout << "\n\n";
    for(i=0;i<y;i++){ //ciclo para hacer 0 a los elementos que pertenecen a las diagonales
            cout << "\n\n";
        for(j=0;j<y;j++){
            if((i==j)||(i+j==y-1)){ //si pertenecen a las 2 diagonales se hacen 0
                matriz[i][j] = 0;
            }
            suma = suma + matriz[i][j]; //suma los elementos de la matriz
            cout << matriz[i][j] << "  ";
            }
        }
        cout << "\n\n";
        cout << "La suma de los elementos es de " << suma;
    }

int main()
{
    int n;
    n = entradas();
    FillMatriz(n);

    return 0;
}

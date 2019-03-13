/*
Autor: Alejandro Torre Reyes
Entradas: un numero n natural impar menor o igual a 11
Salidas: una matriz de n*n y verifica si es un cuadrado magico.
Proceso: Escribir una programa que lea un número natural impar n menor o igual a 11. El
programa debe llenar la matriz con los números del 1 al n*n seleccionando las posiciones
en forma aleatoria. El programa debe verificar después del llenado si la matriz es un
cuadrado mágico. Un cuadrado mágico cumple con la condición de que la sema de los
valores almacenados en cada fila y columna coincide.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int entrada(){ //Funcion para leer n
    int x;
    cout << "Ingrese un numero impar menor o igual a 11\n";
    cin >> x;
    return x;
}
int validar_cuadrado(int num, int fila, int col){ //Funcion para validar la suma de las filas y columnas
    int val;
    if((num==fila)&&(num==col)){
        val = 1;
    }else{
        val = 0;
    }
    return val;
}
void cuadrado_magico(int n){ //Funcion para crear la matriz y sumar sus filas y columnas
    int matriz[n][n];
    int i,j,validate;
    int numMagico = 0;
    int sumFil = 0;
    int sumCol = 0;
    srand(time(0));

    for(i=0;i<n;i++){ //Asignar valores a la matriz de 1 a n*n
            cout << "\n\n";
        for(j=0;j<n;j++){
            matriz[i][j] = 1 +(rand()%(n*n));
            cout << matriz[i][j] << "  ";
        }
    }
    for(i=0;i<n;i++){ //Sumar los elementos de la fila 1 para obtener el numero magico
        numMagico = numMagico + matriz[0][j];
    }
    for(i=0;i<n;i++){ //sumar todas las filas y columnas
        for(j=0;j<n;j++){
            sumFil = sumFil + matriz[i][j];
            sumCol = sumCol + matriz[j][i];
        }
    }
    validate = validar_cuadrado(numMagico,sumFil,sumCol); //validar la suma de filas y columnas es igual al numero magico
    if(validate == 1){
        cout << "Es un cuadrado magico";
    }else{
        cout << "No es un cuadrado magico";
    }
}

int main()
{
    int n = entrada();
    cuadrado_magico(n);
    return 0;
}

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
/*
QA: Hector A. V. Cosgalla
Las primeras 4 pruebas se hicieron sin entradas los resultados fueron los siguientes:
Primera matriz generada aleatoriamente:
6  9  5  4  7  9  6  7  9

5  9  1  1  5  4  2  8  5

2  2  4  7  7  8  5  6  7

8  5  3  4  9  7  2  9  7

7  3  5  4  4  5  5  3  4

5  1  1  7  9  5  5  3  2

4  4  2  9  6  3  1  3  9

1  2  3  4  2  2  3  8  4

3  8  2  6  5  6  8  4  1
Salida: No es un sudoku. (funciona correctamente)
-------------------------
Segunda matriz generada aleatoriamente:
2  1  3  7  7  7  2  2  1

8  6  7  1  9  2  6  5  9

9  4  5  9  3  7  5  3  3

3  1  4  3  9  4  8  6  4

6  6  4  7  4  3  9  4  7

2  7  7  7  3  6  3  5  2

2  4  9  2  7  2  9  7  3

9  4  7  8  8  6  7  7  5

7  2  8  3  1  7  8  9  3
Salida: No es un sudoku. (funciona correctamente)
-------------------------
Tercera matriz generada aleatoriamente:
8  6  3  2  9  3  8  7  4

6  7  6  9  1  1  7  2  5

8  3  4  3  1  6  7  9  7

6  7  5  2  1  3  3  8  9

4  9  9  8  9  2  7  5  4

2  7  5  2  1  6  2  3  4

3  3  7  4  4  1  4  6  4

3  7  5  4  6  6  6  2  3

3  7  5  7  4  6  7  4  3
Salida No es un sudoku. (funciona correctamente)
-------------------------
Cuarta matriz generada aleatoriamente:

6  3  2  8  1  8  5  2  7

3  8  4  9  2  7  7  9  2

7  1  3  6  8  5  9  4  1

1  5  6  1  3  2  8  9  6

3  3  5  9  7  1  6  6  2

3  7  4  6  7  5  2  2  7

3  2  6  5  1  8  7  7  5

7  9  5  1  5  6  6  7  1

7  1  2  2  7  5  6  8  3
Salida: No es un sudoku. (funciona correctamente)

Como en ningun momento genero un sudoku aleatoriamente se modifico el codigo para ingresarle los valores y
comprobar su correcto funcionamiento, los resultados fueron estos:
Primera matriz ingresada manualmente:
1  2  3  4  5  6  7  8  9

4  5  6  7  8  9  1  2  3

7  8  9  1  2  3  4  5  6

9  1  2  3  4  5  6  7  8

3  4  5  6  7  8  9  1  2

6  7  8  9  1  2  3  4  5

8  9  1  2  3  4  5  6  7

5  6  7  8  9  1  2  3  4

2  3  4  5  6  7  8  9  1
Salida: No es un sudoku. (Funciona incorrectamente, debio haber salido "si es un sudoku")
Debido al incorrecto funcionamieto del caso anterior se encontro la falla y la corregi para
que diera la salida correcta, cuando se corrigio procedí a probar con otras opciones y los
resultados fueron estos:
Segunda matriz ingresada manualmente:
1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9
salida: Es un sudoku (Funciona incorrectamente, debio dar como resultado "no es un sudoku")
--------------------------
Tercera matriz ingresada manualmente:
1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  6  9  9

3  2  1  4  5  6  7  8  9

8  9  8  5  5  4  3  2  1

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

2  1  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9

1  2  3  4  5  6  7  8  9
Salida: Es un sudoku (Funciona incorrectamente, debio dar como resultado "no es un sudoku")
*/

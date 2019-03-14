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
/*
QA: Hector A. V. Cosgalla
QA por separado:
Entrada:Se ingreso un numero par (4) y un numero impar (5) ambos los leyo sin problema.
cuadrado_magico: Genera una matriz de n*n numeros con numeros desde 1 hasta n*n, numeros probados:3, 4, 10
QA Completo:
Entrada: La funcion lee los numeros correctamente (3,3,4)
cuadrado_magico:Genera un cuadro de n*n correctamente y lo llena con numeros de 1 hasta n*n
validar_cuadrado: Valida los numeros correctamente, en los tres casos no produjo un cuadrado magico
Comentario general: el problema indica que deben ser numeros naturales impares menores o iguales a 11, en otras
palabras 1,3,5,7,8,9 y 11 si se escribe un numero diferente no deberia funcionar y aunque ingrese un numero par 
sigue trabajando, corrijan eso.
*/
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

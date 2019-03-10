/**
 * @author Luis Gerardo Leon Ortega
Realizar la suma de dos matrices Bidimensionales. Para que se puedan sumar las matrices A[i. j] y
B[i, j] deben de tener las mismas dimensiones la matriz S[i, j], tendrá las mismas dimensiones y
cada elemento tendrá la suma, es decir B[i, j] = A[i, j] + B[i, j]. Crear el pseudocódigo que realice
esto, utilizando notación de arreglos
*/

#include <stdio.h>
//Consts sizes
#define X 3
#define Y 1

int main(){
    int valor[X][Y];
    int valor2[X][Y];

    //Procedimiento
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            printf("1) Ingresa el valor[%i][%i] \n",i,j);
            scanf(" %i", &valor[i][j]);
            printf("2) Ingresa el valor[%i][%i] \n",i,j);
            scanf(" %i", &valor2[i][j]);
            //Procedimiento de la suma
            valor2[i][j] += valor[i][j];
        }
    }
    //Salidas
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            printf("Suma[%i]: \n", valor2[i][j]);
        }
    }
    return 0;
}

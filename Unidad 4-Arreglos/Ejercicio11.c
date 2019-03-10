/*
Autor: Eyder Concha Moreno 09/Marzo/19
Entradas: El tamaño del triangulo de pascal
Salidas: La piramide de pascal inversa
Procedimiento general:
1.-Determinamos la piramida normalmente
    -En caso de que la columna este en la primera o la ultima posicion de la respeciva fila, entonces se introduce un 1
    -De otra forma, el valor se define como el valor de la columna anterior menos una posicion en la fila anterior, mas la columna anterior en la fila anterior
2.-Imprimimos la piramide en orden contrario
*/
#include <stdio.h>

void llenarPiramide(int matrizSize, int matriz[][matrizSize]);

int main()
{
    int piramide[100][100], size;
    printf("Ingresa el tamano de la piramide ");
    scanf("%d", &size);
    llenarPiramide(size, piramide);
    imprimirPiramideInversa(size, piramide);

	return 0;
}

void llenarPiramide(int matrizSize, int matriz[][matrizSize]){
    matriz[0][0] = 1;
    for(int filas = 1; filas < matrizSize; filas++){
        for(int columnas = 0; columnas <= filas; columnas++){
            if(columnas == 0 || columnas == filas){
                matriz[filas][columnas] = 1;
            } else {
                matriz[filas][columnas] = matriz[filas-1][columnas-1] + matriz[filas-1][columnas];
            }
        }
    }
}

void imprimirPiramideInversa(int matrizSize, int matriz[][matrizSize]){
    for(int filas = matrizSize-1; filas >= 0; filas--){
        for(int columnas = 0; columnas <= filas; columnas++){
        printf(" %d ", matriz[filas][columnas]);
        }
        printf("\n");
    }
}




/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: Un numero entero que representa el tama�o de la tabla diagonal
Salidas: Una tabla diagonal de "n" celdas
Procedimiento general:
1.-Leemos el tama�o de la tabla
2.-Imprimimos primero las columnas de cada fila, al imprimir toda, aumentamos el tama�o m�ximo
   de columnas para representar la diagonal
3.-Pasamos a la siguiente fila y repetimos hasta llegar al tama�o establecido para la tabla
*/
#include <stdio.h>

void entradas(int*);
void procedimiento(int);

int main()
{
    int numero;
    entradas(&numero);
    procedimiento(numero);

	return 0;
}

void entradas(int* numero){
    scanf("%i", numero);
}

void procedimiento(int tamanoTablaDiagonal){
    int largo = 1;
    int valorColumna = 0;
    int valorFila = 0;

    // Imprimimos filas
    while(valorFila < tamanoTablaDiagonal){
        valorColumna = 0;
        // Imprimimos las columnas para cada fila, segun la cantidad de columnas
        while(valorColumna < largo){
            printf(" %i%i ", valorFila, valorColumna);
            valorColumna++;
        }
        printf("\n");
        // Aumentamos uno al largo de columnas para representar la diagonal tras cada iteraci�n
        largo++;
        valorFila++;
    }
}





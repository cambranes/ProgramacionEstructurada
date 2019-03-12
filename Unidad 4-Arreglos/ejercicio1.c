/*
  Autor: Raul Rivadenerya
  Entradas: numero enteros
  Salidas: Ninguna
  Procedimiento general: Calcula el numero menor de los ingresados, la sumatoria de las primeras 5 columnas y la sumatoria
  de las primeras 5 filas. 
*/
#include "stdio.h"
#define m 15
#define n 12


int main() {
  int matrix[m][n];
  int min = 0;
  int add_1 = 0;
  int add_2 = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
      if ((min == 0)||(matrix[i][j] < min)){
        min = matrix[i][j];
      }
      if (i < 5){
        add_1 = add_1 + matrix[i][j];
      }
      if (j < 5){
        add_2 = add_2 + matrix[i][j];
      }
    }
  }
  return 0;
}

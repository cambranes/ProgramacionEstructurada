/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Ninguna
  Procedimiento general: Calcula la suma de dos matrices. 
*/
#include "stdio.h"

#define m 4
#define n 4
int main() {
  int A[m][n];
  int B[m][n];
  int S[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      S[i][j] = A[i][j] + B[i][j];
    }
  }
  return 0;
}

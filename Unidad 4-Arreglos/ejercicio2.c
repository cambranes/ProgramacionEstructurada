/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Ninguna
  Procedimiento general: Calcula la suma de dos matrices. 
*/
#include "stdio.h"



#define m 4
#define n 4

void process(int[m][n], int[m][n], int[m][n])

int main() {
  int A[m][n];
  int B[m][n];
  int S[m][n];
  process(A,B,S);
  return 0;
}

void process(int A[m][n], int B[m][n], int S[m][n]){
  for (int i = 0; i < m; i++) {
    for  for (int j = 0; j < n; j++) {
        S[i][j] = A[i][j] + B[i][j];
    }
  }
}
/*QA: Jorge Chí
Entradas:1 y 2 para A[m][n] y B[m][n], Salidas: 3,3,3,3,3,3,3,3...,3.
Entradas:13 y 23 para A[m][n] y B[m][n], Salidas: 36,36,36,36,36,36,36,36...,36.
Entradas:-1 y -4 para A[m][n] y B[m][n], Salidas:-5, -5, -5...,-5.
Funciona correctamente, más, podría tener una función de lectura y definir
la suma como una función y llamarla.
*/

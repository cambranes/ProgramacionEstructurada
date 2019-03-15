/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Los numeros pares generados aleatoreamente en la matriz y la cantidad de numeros impares de la matriz
  Procedimiento general: Aleatoreamente ingresa numero a la matriz y saca el modulo 2 para los pares y agrega a un contador
  los impares
*/
#include "stdio.h"
#include "math.h"
#include "time.h"

#define m 50
#define n 50

void process(int[m][n], int*);

int main() {
  int matrix[m][n];
  int imp = 0;
  process(matrix,&imp);
  printf("imp = %d", imp);
  return 0;
}

void process(int matrix[m][n], int *imp){
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = (rand() % 101);
      if (matrix[i][j] % 2 == 0){
        printf("%d ", matrix[i][j]);
      }
      else{
      	imp++;
      }
    }
  }
}

/* QA                                    
Por: Eyder Antonio Concha Moreno

Entradas: Ninguna - Ok
Salidas: Muchos numeros pares, y la cantidad de numeros impares - Ok

Buen codigo 9/10
Deberia estar modular
*/

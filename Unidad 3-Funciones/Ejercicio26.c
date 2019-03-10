#include "stdio.h"
/*
Autor: Héctor Abraham V. Cosgalla
Entrada: Numero N que representa el limite de sumas
Salida: La suma de los primeros N pares
Proceso: Se inicia un ciclo FOR y se aumenta la variable i en 2 hasta que se alcanza el limite
establecido por el usuario
*/
void SumaNPares(int n,int suma);

int main() {
  int suma = 0, n;
  printf("Ingresa el limite de sumas \n");
  scanf("%d", &n);
  SumaNPares(n, suma);
  return 0;
}

void SumaNPares(int n, int suma) {
  for (int i = 0; i <= n; i = i+2) {
    suma = suma + i;
  }
  printf("La suma de los primeros n pares es: %d \n", suma );
  return;
}
/*
QA: Amílcar Ramírez
entrada():
Los valores numericos validos funcionan, OK
proceso():
Calcula correctamente la suma de los primeros n numeros pares
salida():
Muestra correctamente el dato, Ok
Prueba integral:
El codigo compila correctamente, con las validaciones necesarias
*/

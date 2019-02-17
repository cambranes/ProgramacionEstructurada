/*
Autor: Hector Abraham Valdivieso Cosgalla
Entradas: Un numero n
Salidas:
1
1 2
1 2 3
1 2 3 ... n
Procedimiento: Lee el numero n y empieza un ciclo for para las lineas y dentro
deel lleva otro para contar los numeros, si el numero de linea y el numero es el
mismo se imprime el numero de linea y se brinca a la siguiente linea y se repite
hasta llegar a n.
*/

#include "stdio.h"

void NLineas(int n);

int main() {
  int n;
  printf("Ingrese la cantidad de lineas a imprimir: \n");
  scanf("%d",&n);
  NLineas(n);
  return 0;
}

void NLineas(int n) {
  for (int i = 1; i <= n; i++) {
    for (int m = 1; m <= n; m++) {
      if (i == m) {
        printf("%d  ",i);
        break;
      }
      else{
        printf("%d  ", m);
      }
    }
    printf("\n");
  }
  return;
}

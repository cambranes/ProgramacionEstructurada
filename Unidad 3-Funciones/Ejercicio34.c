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

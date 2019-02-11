/*
Hecho por:Hector A. V. Cosgalla
Entradas:Un numero n
Salidas:La diagonal superior de una tabla de nxn
Procedimiento:Empiza leyendo un numero n y atraves de 2 ciclos for
imprime la primera fila y cuando termina imprime la siguiente fila
*/
#include "stdio.h"

int main() {
  //Entradas: Variables de entrada
  int n, i, m;
  //Entrada: Leer el numero n
  printf("Ingresa un numero:\n");
  scanf("%d", &n);
  //Procedimiento: Ciclos que cuenta desde 0 hasta n-1
  for (i = 0; i < n; i++)
  {
    for (m = 0; m < n; m++)
    {
      //Salida: Si el primer numero dado por el primer ciclo es menor
      //o igual que el dado por el segundo ciclo se imprimen
      //de lo contrario imprime un espacio en blanco
      if ( i <= m ) {
        printf("%d%d  ", i, m );
      }
      else{
        printf("    " );
      }
    }
    printf("\n");
  }
  return 0;
}

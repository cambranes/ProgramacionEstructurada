/*
Autor: Hector Abraham Valdivieso Cosgalla
Entrada: Dos numeros enteros
Salidas: El maximo comun divisor
Procedimiento: dados los dos numeros enteros primero comprueba si son divisibles
entre los primeros numeros primos, si es asi entra a un ciclo "mientras" que los
va descomponiendo entre sus primeros primos y cuando son iguales los multiplica
entre elllos y posteriormente muestra cual es su maximo comun divisor, si no son
divisibles entre los primeros numeros primos entonces muestra a su maximo comun
divisor como 1
*/

#include "stdio.h"

void MCD(int a, int b);

int main() {
  int a, b;
  printf("Ingrese el primer numero: \n");
  scanf("%d", &a);
  printf("Ingrese el segundo numero: \n");
  scanf("%d", &b);
  MCD(a, b);
  return 0;
}
void MCD(int a, int b) {
  int PrimosA=0, PrimosB=0, MaxComDiv=1;
  if ((a%2==0 || a%3==0) && (b%2==0 || b%3==0) ) {
    while ( b>1 || a>1) {
      if (PrimosA > PrimosB) {
        if (b%2==0) {
          PrimosB = 2;
          b = b / 2;
        }
        else {
          if (b%3==0) {
            PrimosB =  3;
            b = b / 3;
          }
          else{
            if (b%5==0) {
              PrimosB = 5;
              b = b / 5;
            }
          }
        }
      }
      else {
        if (PrimosA < PrimosB) {
          if (a%2 == 0) {
            PrimosA = 2;
            a = a / 2;
          }
          else{
            if (a%3 == 0) {
              PrimosA = 3;
              a = a / 3;
            }
            else{
              if (a%5 == 0) {
                PrimosA = 5;
                a = a / 5;
              }
            }
          }
        }
        else {
          if (a%2 == 0) {
            PrimosA = 2;
            a = a / 2;
          }
          else{
            if (a%3 == 0) {
              PrimosA = 3;
              a = a / 3;
            }
            else{
              if (a%5 == 0) {
                PrimosA = 5;
                a = a / 5;
              }
            }
          }
          if (b%2==0) {
            PrimosB = 2;
            b = b / 2;
          }
          else {
            if (b%3==0) {
              PrimosB =  3;
              b = b / 3;
            }
            else{
              if (b%5==0) {
                PrimosB = 5;
                b = b / 5;
              }
            }
          }
        }
      }
      if (PrimosB == PrimosA) {
        MaxComDiv = MaxComDiv * PrimosA;
      }
    }
  }
  printf("El maximo comun divisor es: %d\n", MaxComDiv);
}

/*
Autor: Chan Gongora Carlos 03/2/2019
Entradas: Un numero entero positivo mayor a cero
Salidas: El valor de e
Procedimiento general: Va calculando el factorial hasta el numero ingresado mientras hace la operacion 1/factorial
                        en cada iteracion
*/

#include "stdio.h"

int main() {
  //Inputs
  int value;
  float factorial = 1.0;
  float e = 1.0;

  do{
    printf("\nEnter a positive integer number greater than 0: ");
    scanf("%d", &value);
  }while(value < 1);

  //Process
  for(int i = 1; i <= value; i++){
    factorial = factorial * i;
    e += (1 / factorial);
  }

  //Outputs
  printf("\nThe value of e for precision %d is: %f", value, e);
  getch();
  return 0;
}
/*
  Autor: Raul Rivadeneyra
  Entradas: numeros positivos
  Salidas: la adicion al numero ingresado respecto a ciertos factores
  Proceso general: si el numero ingresado es mayor a 1000 o 3000 o 5000 aumenta cierta cantidad respectivamente
 */
#include "stdio.h"

void getNumber(float*);
void moreThan1K(float*);
void moreThan3K(float*);
void moreThan5K(float*);

int main() {
  float number;
  getNumber(&number);
  moreThan1K(&number);
  moreThan3K(&number);
  moreThan5K(&number);

  printf("The outcome is: %f\n", number);
  return 0;
}

void getNumber(float *number) {
  printf("Insert a positive number: ");
  scanf("%f", number);
  while (number <= 0) {
    printf("The number isn\'t positive, try again: ");
    scanf("%f", number);
  }
}

void moreThan1K(float *number) {
  if (*number > 1000){
    *number += (*number * 0.05);
  }
}

void moreThan3K(float *number) {
  if (*number > 3000){
    *number += (*number * 0.1);
  }
}

void moreThan5K(float *number) {
  if (*number > 5000){
    *number += (*number * 0.05);
  }
}
/*
QA: Hector Abraham V. Cosgalla
TODO MAL!!
*/

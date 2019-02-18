/*
Autor: Raul Rivadeneyra 2/2/2019 
Entradas:(n € N | n < 2147483648)
Salidas: Numero de cuantos multiplos de 5 hay entre 1 y n
Procedimiento general: Saca el numero entero de la division de n - 1 entre 5
*/
#include "stdio.h"

int main() {
  //Inputs
  int n = 0;
  scanf("%d", &n);

  //Process
  int multiplier = (n - 1)  / 5;
  //Outputs
  printf("There are %d multipliers of 5 between 1 and %d\n", multiplier, n);

  return 0;
}
/*
QA: Realizó: Jose Mendez
Entradas: 4 , 20 , -9
Salidas: 0 , 3 , -2???
Funciona bien para numeros positivos, en numeros negativos, no funciona correctamente
*

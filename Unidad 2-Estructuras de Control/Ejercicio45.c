/*
Autor: Raul Rivadeneyra 2/2/2019
Entradas:(n € N | n < 2147483648)
Salidas: Texto el cual dice si es primo o no
Procedimiento general: Saca el modulo de todos lo numeros menores al ingresado, si alguno da 0 entonces rompe el loop
*/

#include "stdio.h"

int main() {
  //Inputs
  int n;
  int isPrime = 1;
  scanf("%d", &n);
  //Process
  for (int i = 2; i < n; i++){
    if ((n % i) == 0){
      isPrime = 0;
      break;
    }
  }
  //Outputs
  if (isPrime == 1){
    printf("El numero %d es primo\n", n);
  }
  else{
    printf("El numero %d no es primo\n", n);
  }
  return 0;
}

/*
QA: Realizó: Jose Mendez
Entradas: 7, 5, 9, -2 
Salidas: OK, OK, OK, Error
Funciona bien, solamente no detecta si se da un numero negativo
*/

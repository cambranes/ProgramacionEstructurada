/* Escribir el programa para un programa que reciba un numero positivo, si este numero es mayor a 1000 se le sumara un 5%, si el numero es mayor a 3000 se le sumara otro 10% adicional y si el numero es mayor a 5000 se le sumara otro 5% adicional. */

#include <stdio.h>

/* GLOBAL VARIABLES */

int number;

/* Functions */

void entrada() {
  scanf("%d", &number);
}

void proceso(int num) {
  int result = num;
  if(num > 1000) {
    result += result * .05;
  }
  if(num > 3000) {
    result += result * .1;
  }
  if(num >5000) {
    result += result *.05;
  }
  number = result;
}

void salida() {
  printf("%d", number);
}

/* MAIN */

int main() {

  entrada();
  proceso(number);
  salida();

  return 0;
}

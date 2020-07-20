/* Escribir un programa que reciba tres números enteros que representan dos catétos y una hipotenusa y que determine si cumple con la ecuación de pitágoras. */

#include <stdio.h>

// Variables Globales
int c1,c2,h,resultado;

// Entrada de los números
void entrada() {
  scanf("%d %d %d", &c1, &c2, &h);
}

// Comprobación 
void proceso(){
  if((c1*c1)+(c2*c2) == (h*h)) {
    resultado = 1;
  } else {
    resultado = 0;
  }
}

// Impresion de los resultados
void salida(){
  printf("%d", resultado);
}

// MAIN 
int main() {
  entrada();
  proceso();
  salida();
}

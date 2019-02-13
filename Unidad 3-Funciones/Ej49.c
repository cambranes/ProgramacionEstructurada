/*
    Autor: Carlos Chan Gongora 13/02/2019
    Entradas: Ninguna.
    Salidas: Las tablas de multiplicar desde la tabla del 2 hasta la del 9.
    Procedimiento general: Utiliza un for dentro de otro para ir imprimiendo las multiplicaciones.
*/
#include <stdio.h>

void imprimirTabla();

int main(){
  imprimirTabla();
  return 0;
}

void imprimirTabla(){
  int multiplicacion = 0;
  // El numero de la izquierda de la multiplicacion
  for(int n = 2; n <= 9; n++){
    // El numero de la izquierda de la multiplicacion
    for(int i = 1; i <= 10; i++){
      // Se calcula la multipicacion
      multiplicacion = n * i;
      // Se imprime
      printf("%d * %d = %d \n", n, i, multiplicacion);
    }
    printf("\n");
  }
}

/*
Autor: Chan Gongora Carlos 03/2/2019
Entradas: Un numero entero positivo
Salidas: El factorial del numero ingresado
Procedimiento general: Multiplica el valor de i por el valor de la variable factorial, i se incrementa de 1 en 1 hasta
                       llegar al numero que ingreso el usuario
*/

#include "stdio.h"

int main() {
  //Inputs
  int value;
  int factorial = 1;

  do{
    printf("\nEnter a positive integer number: ");
    scanf("%d", &value);
  }while(value < 0);

  //Process
  if(value != 0){
    for(int i = 1; i <= value; i++){
      factorial = factorial * i;
    }
  }

  //Outputs
  printf("\nThe factorial of %d is: %d", value, factorial);
  getch();
  return 0;
}

/*
QA: Realizó: Jose Mendez
Entradas: 5 , -9, 0
Salidas: 120, Ok, 1
Funciona bien, solo que ocupa una instruccion (getch) de una libreria que no viene incluida
*/

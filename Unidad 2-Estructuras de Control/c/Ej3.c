/*
Autor: Chan Gongora Carlos 03/2/2019
Entradas:(n € Z | 1 <= n <= 7)
Salidas: El dia de la semana correspondiente al numero ingresado
Procedimiento general: Compara el valor ingresado entre 1 y 7 e imprime su respectivo dia
*/

#include "stdio.h"

int main() {
  //Inputs
  int value;

  do{
    printf("\nEnter a value between 1 and 7: ");
    scanf("%d", &value);
  }while(value < 1 || value > 7);

  //Process
  switch(value){
    case 1: printf("\nThe day is Monday");
      break;
    case 2: printf("\nThe day is Tuesday");
      break;
    case 3: printf("\nThe day is Wednesday");
      break;
    case 4: printf("\nThe day is Thursday");
      break;
    case 5: printf("\nThe day is Friday");
      break;
    case 6: printf("\nThe day is Saturday");
      break;
    case 7: printf("\nThe day is Sunday");
      break;
    default: printf("\nError");
  }

  //Outputs
  getch();
  return 0;
}
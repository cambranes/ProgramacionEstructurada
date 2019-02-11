#include <stdio.h>
/*
Hecho por: Hector A. V. Cosgalla
Entradas: Un numero n
Salidas: Todos los factores de n
Procedimiento: Se Comprueba si el numero es mayor que el divisor despues se comprueba si
n es divisible entre el divisor, de ser asi  imprime el divisor y comprueba el siguiente
numero hasta encontrar todos sus factores.
*/
int main() {
  //declaracion de variables de entrada
  int Numero, Divisor = 2;
  //Entradas: Lectira del numero n
  printf("Dame un numero:\n" );
  scanf("%d", &Numero);
  //Proceso: Comprobar si el n es mayor que el divisor y si n es divisible entre el Divisor
  //se repite el proceso hasta que n sea 1
  while (Numero>=Divisor)
  {
    while (Numero%Divisor == 0)
    {
      //Salida: Todos los factores de n
      printf("%d x ", Divisor);
      Numero = Numero/Divisor;
    }
    Divisor = Divisor+1;
  }
  //Salida: El resultado cuando n es 1
  printf("%d", Numero);
  return 0;
}

//49.Escribe el programa para que imprima la tabla de multiplicar completa. Es decir empezando con la tabla del 2, del 3, 4, hasta la del 9. Empieza practicando con la tabla del 2 con una estructura de repetición, nada más y posteriormente utiliza dos ciclos para obtener la tabla completa.
//Autor: Jorge Pinto
//Entradas: No se introduce ningun dato
#include <stdio.h>
int main(){
    //Proceso:
  int i, numero = 2, j;

  printf("La tabla de multiplicar es : \n\n", numero );
  for (i = 2; i <=9; i++) {
    printf("La tabla del %d \n\n" ,i );
    for (j = 1; j <= 10; j++) {
      numero = j * i;
      printf("%d * %d = %d \n", i, j, numero);
    }
  }
    //Salidas: Las tablas de multiplicar del 2 al 9
return 0;
}
/*
QA: Hector Cosgalla
Entradas: No se introduce ningun dato
Salidas: Las tablas de multiplicar del 2 al 9
Comentario: Funciona perfecto!
*/

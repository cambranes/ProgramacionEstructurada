//32.Dados dos números que representan dos años, determinar la cantidad de años bisiestos que hay entre los dos años.
//Autor: Jorge Pinto
//Entradas: Dos numeros enteros (años)
#include <stdio.h>

//Proceso:
int main()
{
  int anio, anio2, resta, bisiesto;

  printf( "\n   Introduzca un a%co: ", 164 );
    scanf( "%d", &anio );

  printf( "\n   Introduzca otro a%co: ", 164 );
    scanf( "%d", &anio2 );

  resta = anio - anio2;
  bisiesto = resta / 4;

  printf("\n El total de a%cos bisiestos son: %d", 164, abs(bisiesto) );

return 0;
}
//Salidas: El numero de años bisiestos en el período dado
/*
QA: Hector A. V. Cosgalla
Entradas: Dos numeros enteros (años)
Salidas: El numero de años bisiestos en el período dado
Comentario: Use de ejemplo del año 2000 al 2004 y solo me leyo 1 año de los 2 bisiestos
*/

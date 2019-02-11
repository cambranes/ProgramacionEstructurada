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

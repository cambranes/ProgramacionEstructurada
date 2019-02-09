#include <stdio.h>


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

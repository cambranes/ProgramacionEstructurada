#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 1 ; numero <= 100 ; numero++ )
    {
        printf( "%.f ", pow( numero, 2 ) );
    }

    getch(); /* Pausa */

    return 0;
}
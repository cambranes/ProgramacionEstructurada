#include <math.h>
#include <stdio.h>

int main() 
{
    double cateto1, cateto2, hipotenusa, hipotenusareal;
     printf("Introduzca el valor del primer cateto: ");
     scanf("%lf", &cateto1);

     printf("Introduzca el valor del segundo cateto: ");
     scanf("%lf", &cateto2);

     printf("Introduzca el valor de la hipotenusa: ");
     scanf("%lf", &hipotenusa);


hipotenusareal= sqrt((cateto1*cateto1) + (cateto2*cateto2));


if (hipotenusa==hipotenusareal) {

       printf("si cumple");
}

else {

    printf("no cumple");
}


}
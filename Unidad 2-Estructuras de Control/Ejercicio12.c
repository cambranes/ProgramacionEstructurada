#include <stdio.h>
#include <math.h>
int main() 
{
    double num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%lf", &num2);

if ( num1>num2) {

    printf (" %lf, %lf. \n",num1, num2);

} else {
    
     printf (" %lf, %lf. \n",num2, num1);

}
    }

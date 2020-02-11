//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.2
//Este programa recibe dos numeros y nos dice cual es mayor, menor o si ambos son iguales.

#include <stdio.h>

 int main () {

     //Entrada: Declaración de variables y lectura de dos numeros
    int a = 0, b = 0;

    scanf("%d %d",&a,&b);

     //Proceso: Comparacion de numeros
     //Salida: impresion de quien es mayor, menor o si son iguales
    if (a > b) {
        printf("%d > %d",a,b);
    } else
    {
        if (b > a){
            printf("%d > %d",b,a);
        } else
        {
            printf("Son iguales");
        }   
    }
}
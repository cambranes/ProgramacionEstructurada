#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Proceso: Calcular el Máximo Común Divisor entre 2 números enteros.
Entradas: 2 números enteros
Salidas: El MCD correspondiente
*/

int main()
{
    int a,b;
    printf("Ingrese dos numeros enteros");
    scanf("%d", &a);
    scanf("%d", &b);

    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    printf("%d", a);
    return 0;
}

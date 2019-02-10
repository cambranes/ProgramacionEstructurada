#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Entradas: un numero n natural
Salida: la suma de 1/2^1 + 2/2^2...+ n/2^n
Proceso: Calcular la suma de los terminos 1/2^1 + 2/2^2...+ n/2^n
*/

int power(); //Declarar la función de potencia
int main()
{
    int n;
    int i;
    float sum = 0.0;
    int pot;
    float rec;
    printf("Ingresar n");
    scanf("%d",&n);

    for(i = 1.0; i<=n; i++){ //Ciclo para sumar la division entre el valor y la potencia 2 de ese valor
        pot = (power(2,i));
        rec = (1.0/pot);
        sum = (sum + (rec*i));
    }

    printf("%f", sum); //imprimir resultado final
    return 0;
}

int power(int base, int x){ //funcion de potencia
    int j;
    int p = 1;
    for(j = 1; j<=x; j++){
        p = p * base;
    }
    return p;
}

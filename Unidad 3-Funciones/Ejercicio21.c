#include <stdio.h>
#include <stdlib.h>

/*
Autor:. Alejandro Torre Reyes
Entradas: Un numero n entero positivo
Salidas: El factorial de n
Proceso: Dado un numero entero n determina su factorial.
*/
int fact();
int read();

int main()
{
    int n;
    int res;
    n = read(); //llamar a la funcion de entrada
    res = fact(n); //llamar a la funcion para calcular factorial
    printf("El factorial de %d es %d", n, res);
    return 0;
}

int read(){ //funcion para leer la entrada
    int leer;
    printf("Ingrese n para calcular su factorial \n");
    scanf("%d", &leer);
    return leer;
}

int fact(int x){ //funcion de factorial
    int factorial = 1;
    int i;
    if(x != 0){
        for(i=1; i<=x; i++){
            factorial = factorial * i;
        }
    }
    return factorial;
}




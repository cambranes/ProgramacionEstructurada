#include <stdio.h>
#include <stdlib.h>

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un numero N
Salidas: Determinar si es par o impar
Proceso: Dado un numero entero n determina si es par o impar.
*/

int determinarSiUnNumeroEsPar(int,int);
int main(){
    int numero,paridadNumero,paridad;

    printf ("Ingresa un numero entero \n");
    scanf("%d",&numero);//Lee la entrada
    paridadNumero=determinarSiUnNumeroEsPar(numero,paridad);//Llama a la función determinarSiUnNumeroEsPar
    if (paridadNumero==0) {
        printf("El numero %d es impar",numero);
    } else {
        printf("El numero %d es par",numero);
    }
    return 0;
}

int determinarSiUnNumeroEsPar(int numero,int paridad) {
    if (numero % 2 == 0) {
        paridad=1;
    } else {
        paridad=0;
    }
    return paridad;
}

/*
Autor:RONSSON RAMIRO MAY SANTOS
Entradas: numero ("N").
Salidas: multiplo (de 7), numeroMultiplo (posición de multiplos de 7)
Procedimiento general: Se ingresa un número N (numero) y se imprimen los primeros N multiplos de 7 (numeroMultiplo y multiplo).
Si se ingresa 0 o menor que 0, se imprime ERROR y se pide de nuevo el número.
*/


#include <stdio.h>

int main(){
int numero;
numero=getN();
getMultiplo(numero);
//printf("%d",getMultiplo());


return 0;
}

int getN(){ // funcion numero 1 ; valida que el numero introducido sea mayor a cero
    int n,numero;
    do{
    printf("Ingresa un numero mayor que 0:\n");
    scanf("%d",&numero);
    if (numero<1){
        printf("El numero debe ser mayor a Cero :\n");
    }
    }while(numero<=0);
    return numero;

}

int getMultiplo(int x){ // procesa numero introducido por el usuario para obtener su respectivo multiplo
    int multiplo,numeroMultiplo;
    for(int contador=0;contador<x;contador++){

    numeroMultiplo=contador+1;
    multiplo= 7 * numeroMultiplo;
    printf("El multiplo #%i es %i\n", numeroMultiplo, multiplo);

    }

return multiplo;
}

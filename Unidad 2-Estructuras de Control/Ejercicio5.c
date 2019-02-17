#include <stdio.h>
#include <stdlib.h>

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un año
Salidas: Determinar si es bisiesto o no
Proceso: Dado un año cualquiera determina si es bisiesto o no.
*/

int determinarSiUnAnioEsBisiesto(int,int);
int main(){
    int anio,anioBisiesto,multiploDe4;

    printf ("Ingresa un anio \n");
    scanf("%d",&anio);//Lee la entrada
    anioBisiesto=determinarSiUnAnioEsBisiesto(anio,multiploDe4);//Llama a la función determinarSiUnAnioEsBisiesto
    if (anioBisiesto==1) {
        printf("El anio %d es anio bisiesto",anio);
    } else {
        printf("El anio %d no es anio bisiesto",anio);
    }
    return 0;
}

int determinarSiUnAnioEsBisiesto(int anio,int multiploDe4) {
    if (anio % 4 == 0) {
        multiploDe4=1;
    } else {
        multiploDe4=0;
    }
    return multiploDe4;
}

#include <stdio.h>
#include <stdlib.h>

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un numero N
Salidas: Numero multiplos de 5 que se encuentren entre 1 y N
Proceso: Dado un numero N halla los multiplos de 5 entre 1 y N.
*/

int multiplosDe5 (int,int,int);
int main(){
    int numeroN,i,numeroMultiploDe5,cantidadNumerosMultiplosDe5;
    printf("Ingresa un numero entero \n");
    scanf("%d",&numeroN);//Lee las entradas
    cantidadNumerosMultiplosDe5=multiplosDe5(i,numeroN,numeroMultiploDe5);//Llama a la función multiplosDe5 
    printf("Se encontraron %d numeros multiplos de 5 entre 1 y %d",cantidadNumerosMultiplosDe5,numeroN);
    return 0;
}

int multiplosDe5 (int i,int numeroN,int numeroMultiploDe5) {
    numeroMultiploDe5=0;
    for (i=1;i<=numeroN;i++) { //Verifica por cada número entre 1 y N si es múltiplo de 5
        if (i % 5 ==0){
            numeroMultiploDe5=numeroMultiploDe5+1;
            printf("%d es multiplo de 5 \n",i);
        }
    }
    return numeroMultiploDe5;
}
//QA realizado por Rodrigo Hernandez Gongora
//Entradas probadas: 1, 5, 10, 100, 98
//Salidas: 0, 0, 1, 19, 19
//El algoritmo funciona parcialmente, porque te marca un numero menos si el numero final es multiplo de 5

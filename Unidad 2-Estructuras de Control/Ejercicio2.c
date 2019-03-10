//Escribe un programa que reciba 2 numeros y te imprima cual es el numero mayor, cual es el numero menor o si son iguales en caso de que sea necesario.
//Autor: Rodrigo Hernandez Gongora
//Entradas:Dos numeros enteros
#include <stdio.h>
int main(){
int a,b;
//Proceso
printf("Introduce dos numeros: ");
scanf("%d", &a);
scanf("%d", &b);
if(a>b){
    printf("El numero mayor es %d", a);
    printf(" y el numero menor es %d", b);
}else if(a<b){
        printf("El numero mayor es %d", b);
        printf(" y el numero menor es %d", a);
}else printf("Ambos numeros son iguales");
//Salidas: la comparacion de ambos numeros
return 0;
}

//QA//
//Por: Amaury Morales Cerecedo
//Entradas: -10 y 10, 1 y 1, 0 y 1.
//Salida: -10 menor, 10 mayor.  1 igual que 1.  0 menor que 1.
//Notas: Funciona correctamente. Las variables necesitan tener nombres especificos.

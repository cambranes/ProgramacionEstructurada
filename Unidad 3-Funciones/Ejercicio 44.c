/*Autor: Diego De Gante Pérez
*Entradas: dos numeros enteros a dividir num, num2
*Salidas: El MCD de dos números con el algoritmo de Euclides
*Proceso:
a. Dividir el mayor de los dos números por el más pequeño
b. A continuación dividir el divisor por el resto
c. Continuar el proceso de dividir el último resto hasta que la división sea exacta.
d. El último divisor es el MCD
*/

#include <stdio.h>

void entradas(int*, int*);
void proceso(int*, int*);
void salida(int);

int main() {

    //Entrada
    int num,num2;
    entradas(&num,&num2);

    //Procedimiento
    proceso(&num, &num2);
    
    //Salida donde el ultimo divisor es MCD
    salida(num);
    return 0;
}

//Solicitar los números
void entradas(int* num, int* num2){
    printf("Ingresa el número");
    scanf("%d", num);
    printf("Ingresa tu segundo numero:");
    scanf("%d", num2);
}

//Desarrollo donde compara y va restando
void proceso(int* num, int* num2){
    while(*num != *num2){
        if(*num > *num2){
            *num = *num - *num2;
        }else{
            *num2 = *num2 - *num;
        }
    }
}

//Salida
void salida(int num){
    printf("resultado: %i", num);
}
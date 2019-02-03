/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: un numero n
 * Salida general: MCD de dos numeros con algoritmo de Euclides
 * Proceso general:
 * a. Dividir el mayor de los dos números por el más pequeño
 * b. A continuación dividir el divisor por el resto
 * c. Continuar el proceso de dividir el último resto hasta que la división
 * sea exacta.
 * d. El último divisor es el MCD
 */
#include <stdio.h>

int numero, numero2;

int main() {
    /* entrada */
    printf("Ingresa un numero: ");
    scanf_s("%d", &numero);
    printf("Ingresa tu segundo numero: ");
    scanf_s("%d", &numero2);

    /* procedimiento */
    while(numero != numero2){
        if(numero > numero2){
            numero = numero - numero2;
        }else{
            numero2 = numero2 - numero;
        }
    }

    /* salida */
    printf("resultado: %d", numero);
    return 0;
}
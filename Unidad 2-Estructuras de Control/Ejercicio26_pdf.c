/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: un numero n
 * Salida general: una suma de los primero n numeros pares
 * Proceso general:
 * - La suma de los primeros n numeros pares
 */
#include <stdio.h>

int numero, suma;

int main() {
    /* entrada */
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    /* procedimiento */
    for (int i = 2; i <= numero; ++i) {
        if((i%2) == 0){
            suma = suma + i;
        }
    }

    /* salida */
    printf("Resultado: %d",suma);
    return 0;
}
/*
* QA: Hector A. V. Cosgalla
* Entrada: un numero n
* Salida general: una suma de los primero n numeros pares
* Proceso general:
* - La suma de los primeros n numeros pares
* Comentario: Problema al compilar "scanf_s" y las variabes deben ser locales
*/

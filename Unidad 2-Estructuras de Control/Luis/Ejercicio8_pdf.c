/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: dos numero n
 * Salida general: un string con el resultado
 * Proceso general:
 * - El programa reciba 2 números y te indique si el 1er numero es múltiplo del segundo.
 */
#include <stdio.h>

int numero, numero2;
char* resultado;

int main() {
    /* entrada */
    printf("Ingresa un numero: ");
    scanf_s("%d", &numero);

    printf("Ingresa tu segundo numero: ");
    scanf_s("%d", &numero2);

    /* procedimiento */
    if((numero%numero2) == 0){
        resultado = "Es multiplo";
    }else{
        resultado = "No es multiplo";
    }

    /* salida */
    printf(resultado);
    return 0;
}
/**
 * @author: Luis Gerardo Leon Ortega | ejercicio 44
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

void entradas(int*, int*);
void proceso(int*, int*);
void salida(int);

int main() {
    /* entrada */
    int x,y;
    entradas(&x,&y);
    /* procedimiento */
    proceso(&x, &y);
    /* salida */
    salida(x);
    return 0;
}

/**
 * Entradas
 */
void entradas(int* x, int* y){
    printf("Ingresa un numero: ");
    scanf("%d", x);
    printf("Ingresa tu segundo numero: ");
    scanf("%d", y);
}

/**
 * Proceso
 */
void proceso(int* x, int* y){
    while(*x != *y){
        if(*x > *y){
            *x = *x - *y;
        }else{
            *y = *y - *x;
        }
    }
}

/**
 * Salidas
 */
void salida(int x){
    printf("resultado: %i", x);
}

/*QA: Amaury Morales Cerecedo

Funcion: main()
Entradas: printf despues de cada linea.
Salidas: El codigo se ejecuta.

Funcion: entradas()
Entradas: 250, 12
Salidas: ninguna, solo sobreescribir

Funcion: proceso()
Entradas: 250, 12
Salidas: el MCM.

Funcion: salida()
Entradas: el resultado del proceso
Salidas: solo imprime el mcm, en este caso fue 2.

 Final: El codigo funciona correctamente.
*/

/**
 * @author: Luis Gerardo Leon Ortega | ejercicio 32
 * Entrada: Dos años
 * Salida general: Los años biciestos comprendidos entre ellos
 * Proceso general:
 *  - calcula la diferencia de años y en un for al mas pequeño se le suma 1 hasta llegar al mas grande
 *  - si el año es divisible por 4 y no es divisible por 100 o el numero es divisible por 400 es biciesto
 */
#include <stdio.h>

void entradas(int*, int*);
void proceso(int*, int*);
void salidas(int);

int main() {
    /* entradas */
    int x,y;
    entradas(&x, &y);
    /* proceso */
    proceso(&x, &y);
    /* salidas */
    salidas(x, y);

}

/*
 * Entradas
 */
void entradas(int* x, int* y){
    printf("Ingresa el primer año");
    scanf("%i", x);
    printf("Ingresa el segundo año");
    scanf("%i", y);
}

/*
 * Proceso
 */
void proceso(int* x, int* y){
    int temp;
    if(*x < *y){
        temp = *x; *x = *y; *y = temp;
    }
    temp = 0;
    for (int i = 1; i < (*x-*y); ++i) {
        if( ((*y+i)%4 == 0 && (*y+i)%100 != 100) || ((*y+i)%400 == 0)){
            temp++;
        }
    }
    *x = temp;
}

/*
 * salidas
 */
void salidas(int x){
    printf("Cantidad de años biciesto entre ellos %i", x);
}



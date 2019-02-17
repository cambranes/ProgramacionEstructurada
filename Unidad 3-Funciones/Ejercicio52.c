/**
 * @author: Luis Gerardo Leon Ortega | ejercicio 52
 * Entrada:  valor futuro, valor presente invertido, tasa de interés expresada como fracción decimal y número de períodos de inversión
 * Salida general:  el valor futuro de la inversión.
 * Proceso general:
 *  - se calcula F = P ( 1 + i / 100 ) n y acaba el programa cuando se escribe un 0
 */
#include <stdio.h>

void entradas(float*, float*, float*);
void proceso(float*, float*, float*, float*);
void salidas(float, int*);

int main() {
    float x, y, z, inversion;
    int salida = 1;
    while (salida){
        /* entradas */
        entradas(&x, &y, &z);
        /* proceso */
        proceso(&inversion, &x, &y, &z);
        /* salidas */
        salidas(inversion, &salida);
    }
    return 0;
}
/*
 * Entradas
 */
void entradas(float* x, float* y, float* z){
    printf("Ingresa una cantidad de dinero \n");
    scanf("%f", x);
    printf("Ingresa el PORCENTAJE de interes al que sera sometida tu inversion \n");
    scanf("%f", y);
    printf("Por cuantos meses \n");
    scanf("%f", z);
}

/*
 * Proceso
 */
void proceso(float* inversion, float* x, float* y, float* z){
    *inversion = (*x)*((1 + *y)/ 100)*(*z);
}

/*
 * Salidas
 */
void salidas(float inversion, int* salida){
    printf("La inversion a futuro sera: %f \n", inversion);
    printf("¿Desea continuar calculado inversiones a futuro? presione 1 para si, y 0 para no \n");
    scanf("%i", salida);
}
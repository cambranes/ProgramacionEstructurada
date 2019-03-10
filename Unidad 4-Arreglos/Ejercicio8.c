/**
 * @author Luis Gerardo Leon Ortega
Escribir un programa que llene un vector de tamaño n llena con números aleatorios del 0
al 100. El programa debe calcular:
a. La media de los datos
b. La desviación estandar
c. La varianza
*/

#include <stdio.h>
#define SIZE 6

float alCuadrado(float);
float recursiveSum(int*,int, float);
float sqrt(float);

int main(){
   /* entradas */
    int n[SIZE];
    float media = 0.0;
    float varianza = 0.0;
    float desviacionEstandar = 0.0;

    //Get the values
    for (int i = 0; i < SIZE; ++i) {
        scanf(" %i", &n[i]);
        media += n[i];
    }

    media /= SIZE; //Media
    varianza = recursiveSum(n, SIZE-1, media);
    varianza /= SIZE-1; //Varianza
    desviacionEstandar = sqrt(varianza); //Desviacion estandar

    printf("La media es: %f La varianza es: %f La desviacion estandar es: %f",media,varianza,desviacionEstandar);
    return 0;
}

float alCuadrado(float val){
    return val * val;
}

float sqrt(float entrada) {
    float raizCuadrada = entrada/ 2, t;
    do {
        t = raizCuadrada;
        raizCuadrada = (t + (entrada/ t)) / 2;
    } while ((t - raizCuadrada) != 0);

    return raizCuadrada;
}

float recursiveSum(int* n, int size, float media){
    if(size == 0){
        return alCuadrado(n[size]  - media);
    }
    return alCuadrado(n[size]-media) + recursiveSum(n, size-1, media);
}

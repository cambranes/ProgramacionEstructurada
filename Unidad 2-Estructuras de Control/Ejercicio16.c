//Equipo 4//
//Fecha: 02/02/2020//
//Un programa que calcule la media de una serie de números pósitivos leidos desde una terminal, donde al ingresar 0 se termina el ciclo de lectura de entradas//
#include <stdio.h>

int main(void) {
    //Entrada//
    float  entrada = 0, salida = 0, cont = 0, sum = 0;
    scanf_s("%f", &entrada);
    //Proceso//
    do {
        cont = cont++;//se suma un ciclo al contador//
        sum = sum + entrada;//se guarda el valor de la entrada en una variable para usarse mas tarde//
        scanf_s("%f", &entrada);
    } while (entrada <0|entrada>0);
    salida = (sum / cont);//se realiza el calculo de la media//
    //Salida//
    printf("%f", salida);
}
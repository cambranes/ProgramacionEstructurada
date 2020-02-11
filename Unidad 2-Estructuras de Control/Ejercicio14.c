//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.5
//Este programa lee una velocidad y determina si es mayor a 100, imprime "muy rapido" y si es cero, imprime "detenido"

#include <stdio.h>

int main(){

//Entrada: Un número flotante vel
float vel=0;

scanf("%f", &vel);

//Proceso: Checar si la velocidad es mayor a 100 o igual a 0
//Salida: "Muy rapido" o "Detenido" o nada si no es cero o mayor a cien

if (vel<0) {
    printf("Ingrese una velocidad válida");
} else {
    if (vel>100) {
        printf("Muy rápido");
    } else {
        if (vel==0) {
            printf ("Detenido");
        }
    }
}
}
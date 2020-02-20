#include <stdio.h>

int hora();
int traducirHora(int);
void imprimirHora(int);

int main(){
   // Entrada de la hora
    int horaOriginal;
    horaOriginal = hora();
    traducirHora(horaOriginal);
    imprimirHora(horaOriginal);
}




// Leer la hora
int hora(){
    int horaOriginal = 0;
    scanf("%d",&horaOriginal);
    return horaOriginal;
}

// Traduce la hora
int traducirHora(int horaOriginal){
    char amPm = " ";
    int horas = 0;
    int minutos = 0;
    //Define am/pm
    amPm = 'am';

    //Se obtienen los primeros 2 números
    horas = horaOriginal % 100;

    // Se optienen los últimos 2 números
    minutos = horaOriginal - (horaOriginal % 100 ) * 100;

    // Traduce al formato
    if (horas > 12)
        horas = horas - 12;
        amPm = 'pm';
    return ("%d : %d %c",horas, minutos, amPm);
} 

//Imprimir hora traducida
void imprimirHora(int horaOriginal){
    printf(horaOriginal);
}
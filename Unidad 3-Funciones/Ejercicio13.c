//Autor Irving Eduardo Poot Moo
//Version 1.0
//Program who translate a militar hour to a normal hour

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




// Reeds the hour
int hora(){
    int horaMilitar = 0;
    scanf("%d",&horaMilitar);
    return horaMilitar;
}

// Translate the hour
int traducirHora(int horaOriginal){
    int amPm = 0;
    int horas = 0;
    int minutos = 0;
    //Determinate am/pm
    amPm = 'am';

    //Gets the firts 2 numbers
    horas = horaOriginal % 100;

    // Gets the las 2 numbers
    minutos = horaOriginal - (horaOriginal % 100 ) * 100;

    // Translate the format
    if (horas > 12)
        horas = horas - 12;
        amPm = 'pm';
    return ("%d : %d %d",horas, minutos, amPm);
} 

//Print the translated hour
void imprimirHora(int horaOriginal){
    printf(horaOriginal);
}
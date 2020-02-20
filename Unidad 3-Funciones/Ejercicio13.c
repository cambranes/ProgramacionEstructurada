//Autor Irving Eduardo Poot Moo
//Version 1.0
//Program who translate a militar hour to a normal hour

#include <stdio.h>

int hora();
int traducirHora(int);
void imprimirHora(int);

int main(){
   // input
    int horaOriginal;
    horaOriginal = hora();
    traducirHora(horaOriginal);
    imprimirHora(horaOriginal);
}




// Reed the hour
int hora(){
    int horaOriginal = 0;
    scanf("%d",&horaOriginal);
    return horaOriginal;
}

// Translate the hour
int traducirHora(int horaOriginal){
    char amPm = " ";
    int horas = 0;
    int minutos = 0;
    //Determinate am/pm
    amPm = 'am';

    //Gets the first two numbers
    horas = horaOriginal % 100;

    // Gets the last two numbers
    minutos = horaOriginal - (horaOriginal % 100 ) * 100;

    // Translate the format
    if (horas > 12)
        horas = horas - 12;
        amPm = 'pm';
    return ("%d : %d %c",horas, minutos, amPm);
} 

//Print the translated hour
void imprimirHora(int horaOriginal){
    printf(horaOriginal);
}
//Autor Irving Eduardo Poot Moo
//Version 1.0
//Program who translate a militar hour to a normal hour

#include <stdio.h>

int readHour(int);
void traduceHour(int, int, float, int);


int main(){
   // Entrada de la hora
    int originalHour, horas, amPm, min;
    originalHour = readHour(originalHour);
    traduceHour(originalHour, horas, min, amPm);
}

// Reeds the hour
int readHour(int originalHour){
    scanf("%d",&originalHour);
    return originalHour;
}

// Translate the hour
void traduceHour(int originalHour, int horas, float min, int amPm){
    
    //Determinate am/pm
    amPm=0;
    //Gets the firts 2 numbers
    horas = originalHour / 100;
    // Gets the las 2 numbers
    min = originalHour - (originalHour / 100 ) * 100;

    // Translate the format
    if (horas > 12) {
        horas = horas - 12;
        amPm=1;
    }
    
    //Print the translated hour 
    if (amPm==0){
     printf("%d : %1.2d am", horas, min);
    } else
    {
        printf("%d : %1.2d pm", horas, min);
    }
    
} 
//Autor Irving Eduardo Poot Moo
//Version 1.0
//Program who translate a militar hour to a normal hour

#include <stdio.h>

int readHour(int);
char traduceHour(int, char);
int translateHour(int)
int translateMinutes(int)
void printHour(int, int, char)


int main(){
   // Entrada de la hora
    int originalHour, hour, amPm, min;
    originalHour = readHour(originalHour);
    hour = traduceHour(originalHour);
    min = translateMinutes(originalHour);
    amPm = traduceHour(amPm, hour);
    printHour(hour, min, amPm);
}

// Reeds the hour
int readHour(int originalHour){
    scanf("%d",&originalHour);
    return originalHour;
}

int translateHour(int originalHour){
    hour = originalHour / 100;
    return hour
}

int translateMinutes(int originalHour){
    min = originalHour - (originalHour / 100 ) * 100
    return min
}

// Translate the hour
char traduceHour(char amPm, int hour){

    amPm= "am";
    if (hour > 12) {
        hour = hour - 12;
        amPm= "pm";
    }
    return amPm
}

void printHour(int hour, int min, char amPm){
    //Print the translated hour 
    printf("%1.2d : %1.2d %c", hour, min, amPm);
    
} 
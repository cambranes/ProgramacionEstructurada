//Autores: Programa realizado por Equipo2_CodePain
//Version 1.1
//Programa que determina la cantidad de años bisiestos que hay entre dos años

#include <stdio.h>
int main(){

//Entrada: Lectura de baseYear y topYear
int baseYear =-1, topYear = -1, place = 0, quantity = 0;
while (baseYear<0 || topYear<0) {
     scanf("%d %d", &baseYear, &topYear);
    if (baseYear>topYear) {
        baseYear=-1;
        topYear=-1;
    }   
} 

place=baseYear%4;

//Proceso: Detecta cuantos años le falta para ser viciesto y encuentra la cantidad presente en el rango
if (place==0) {
quantity=((topYear-baseYear)/4+1);
} else{
    if (place==1) {
    quantity=((topYear+1-baseYear)/4);
    } else {
        if (place==2) {
        quantity=((topYear+2-baseYear)/4);
        } else {
            quantity=((topYear+3-baseYear)/4);
        }
    }   
}

//Salida: La cantidad de años bisiestos en el rango de años
printf("%d", quantity);
}
//Autores: Programa realizado por el Equipo2_CodePain
//version 1.3
//Este programa recibe dos números e indica si el primero es multiplo del segundo

#include <stdio.h>
int main(){

int aMult, bNum;

//Entrada: Dos numeros aMult y bNum 
scanf("%d", &aMult);
scanf("%d", &bNum);

//Proceso: Operacion para determinar si son multiplos (modulo)
//Salida: Impresion de si son o no multiplos
if (aMult==0 & bNum==0) {
    printf("Si es multiplo");
} else {
    if (aMult!=0 & bNum==0){
        printf("No es multiplo");
    } else {
        if (aMult%bNum==0) {
        printf("Si es multiplo");
        } else {printf("No es multiplo");
        }
        } 
    }
}
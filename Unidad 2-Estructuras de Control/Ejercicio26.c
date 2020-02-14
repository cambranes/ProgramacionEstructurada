//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.1
//Programa que suma los primeros n números pares


#include <stdio.h>
int main(){
//Entrada: Lectura de cantidad de numeros
int nNums = -1, totalSuma = 0;

while (nNums<0) {
    scanf("%d", &nNums);
}
//Proceso: Formula de n numeros pares
totalSuma=nNums*(nNums+1);

//Salida: Total de la suma
printf("%d",totalSuma);
}
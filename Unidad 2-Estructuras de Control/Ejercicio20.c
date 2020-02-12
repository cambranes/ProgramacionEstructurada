//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.3
//Programa que determina el valor de una secuencia 1 a N

#include <stdio.h>
int main (){
    
//Entrada: Limite de la secuencia (nNums) (entero)
int nNums = -1, total = 0;

while (nNums<0){
    scanf("%d", &nNums);
}

//Proceso: Se obtiene el valor de la secuencia al sumar cada numero empezando por 1
total= ((nNums*(nNums+1))/2);

//Salida: La suma total de la secuencia de números
printf("%d", total);

}
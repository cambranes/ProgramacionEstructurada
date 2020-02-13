//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.1
//Programa que imprime la tabla de multiplicar del 2 al 9

#include <stdio.h>
#include <math.h>

int main (){

//Entrada: Declaracion de variables
    int prod = 0, x= 0, y = 0;

//Proceso: Inicio de ciclos "for" para imprimir las tablas de multiplicar solicitadas
//Salida: Las tablas de multiplicar del 2 al 9
    for (x = 2; x <=10; x++ ){
        for (y = 1; y <=10; y++ ){
            prod = x * y ;

            printf("%d\n",prod);
        
    }
    }
    return 0;
}
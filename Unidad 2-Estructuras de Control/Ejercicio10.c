//Equipo4
//Autor:Jose Miron
//Programa que reciba un numero N y te de los primeros N multiplos de 7
//Entrada: Numero entero
//Salida: Multiplos de 7
#include <stdio.h>

int main() 
{   //Entrada
    int numMulti; //Entrada
    scanf("%d", &numMulti);//Se lee numero de multiplos
    
    //Proceso
    for(int i=7; i <=(7*numMulti); i+=7)//Ciclo para limite N
    { //Salida, impresion de N multiplos
        printf("%d \n", i);    
    }
return 0;
}

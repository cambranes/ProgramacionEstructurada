//Autor: Deyberth Carrillo
//Entrada: El numero del cual se desean conocer los factoriales
//Salida: Los factoriales del numero ingresado

#include <stdio.h>
int main(){
    //Se establecen las variables
    int numero,posibleFactor;

    //Se solicita el numero a evaluar
    scanf("%d",&numero);

    //Se evaluan los factores del numero que se ingreso y se imprimen
    for (posibleFactor = 0; posibleFactor < numero+1; posibleFactor++)
    {
        if (numero%posibleFactor == 0)
        {
            printf("%d",posibleFactor);
        }
        
    }
    
    return 0;
} 

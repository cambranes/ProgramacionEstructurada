//Autor:Deyberth Carrillo
//Entrada:El año a evaluar
//Salida:El resultado de la avaluacion del año ingresado
#include <stdio.h>
int main(){
    //Se declaran las variables
    int bisiesto,year;

    //Se solicita el año a evaluar
    scanf("%d",&year);

    //Evalua si el año es bisiesto
    if (year%4 == 0)
    {
        bisiesto=1;
        if (year%100 == 0)
        {
            bisiesto=0;
            if (year%400 == 0)
            {
                bisiesto=1;
            }
            
        }
        
    }
    
    //imprime si el año es bisiesto o no
    printf("%d",bisiesto);
    
    return 0;
}
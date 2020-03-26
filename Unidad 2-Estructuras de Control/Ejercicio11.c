//Autor: Deyberth Carrillo
//Entrada: Cantidad a retirar
//Salida: Saldo restante
#include <stdio.h>
int main(){
    //Se declaran las variables
    float saldo=3000,retiro;
    //Se solicita la cantidad a retirar
    scanf("%f",&retiro);
    //Se evalua si la cantidad a retirar es valida y se efectua el retiro
    if (retiro <= saldo)
    {
        saldo=saldo-retiro;
    }
    
    //Se imprime la cantidad restante de saldo
    printf("%f",saldo);

    return 0;
}




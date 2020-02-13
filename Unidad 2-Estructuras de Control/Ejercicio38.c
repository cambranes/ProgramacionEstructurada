//Autores: Programa realizado por el Equipo2_CodePain
//Version 1.1
//Programa que imprime numeros de tres digitos cuyos digitos al ser elevados a la tercera potencia
//y sumados dan lo mismo a su numero original

#include <stdio.h>
#include <math.h>

int main (){

     //Entrada: Variables de almacenamiento para checar el numero
    int num = 100, numTemp =  0, aDig = 0, bDig = 0, cDig = 0, total = 0;
     
     //Proceso: Obtencion de digitos, elevarlos al cubo y sumarlos, despues evaluar si es igual al original
     //Salida: Numeros cuyos digitos al cubo y sumados, dan igual al numero original
    while (num < 1000){

        numTemp = num;

        cDig = numTemp%10;
        numTemp = (numTemp-numTemp%10)/10;

        bDig = numTemp%10;
        numTemp = (numTemp-numTemp%10)/10;
        
        aDig = numTemp;

        total = pow(aDig,3) + pow(bDig,3) + pow(cDig,3);

        if (total == num) {
            printf("%d\n", num);
        }
        
        num = num + 1;

    }
    return 0;
}
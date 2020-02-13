//Autores: Programa realizado por Equipo2_CodePain
//Version 1.1
//Programa que calcula el MCD de dos números enteros mediante el algoritmo de Euclides

#include <stdio.h>
#include <math.h>

int main (){
//Entrada: Dos números enteros aNum y bNum
    int aNum = -1, bNum =  -1, res = 1, save = 0;

    while (aNum < 0 || bNum < 0){
        scanf("%d",&aNum);
        scanf("%d",&bNum);
    }
//Proceso: Usando el algoritmo de Euclides se determina el MCD de los números
    if (aNum < bNum){

        save = bNum;
        bNum = aNum;
        aNum = save;

    }

    while (res != 0){

        res = aNum%bNum;
        aNum = bNum;
        bNum = res;

    }
//Salida: El MCD de los dos números
    printf("%d\n", aNum);

    return 0;
}
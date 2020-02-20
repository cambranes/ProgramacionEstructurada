#include <stdio.h>

float entrada1();
float entrada2();
float entrada3();
float comparacion(float, float, float);
void imprimirMayor(float);

float main(){
    //Entradas
    float num1, num2, num3;
    float numMayor;
    num1 = entrada1();
    num2 = entrada2();
    num3 = entrada3();
    // Proceso
    comparacion(num1, num2, num3);
    // Impresion del numero
    imprimirMayor(numMayor);
}


float entrada1(){
    float numero = 1;
    scanf("%d",&numero);
    return numero;
}

float entrada2(){
    float numero = 1;
    scanf("%d",&numero);
    return numero;
}

float entrada3(){
    float numero = 1;
    scanf("%d",&numero);
    return numero;
}

float comparacion(float num1, float num2, float num3){
    float numMayor = 0;
    if (num3 < num1 > num2)
    {
        numMayor = num1;
    }
    else if (num3 < num2 > num1)
    {
        numMayor = num2;
    }
    else
    {
        numMayor = num3;
    }
    return numMayor;
}

void imprimirMayor(float numMayor){
    printf("El numero mayor es: %d", numMayor);
}

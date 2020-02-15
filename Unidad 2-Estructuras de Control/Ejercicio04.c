//Equipo4
//Fecha 10/02/2020
//Autor: Carlos Greene
//Programa que redondea un número a la centena próxima
//Entrada: Numero entero positivo
//Salida: Número redondeado a la centena próxima
#include <stdio.h>

int main()
{

    int entrada = 0, r = 0, aux=0, salida = 0;
    //entrada: número introducido, d: residuo de módulo 100, salida: número redondeado a la centena próximo, aux: Auxiliar

    scanf("%d", &entrada); //Se lee la entrada
    aux = entrada;

    r = entrada%100; //Se hace módulo 100 de la entrada para obtener el residuo

    if(aux<0)
    {//Si el auxiliar es negativo, se procede a volver positivo el residuo y la entrada
        r = r*-1;
        entrada = entrada*-1;
    }

    //Proceso
    if(r>=50) //Se compara si el residuo es mayor que 50
    {   //Si es mayor a 50 entonces
        salida = ((entrada/100)+1)*100; //Se divide la entrada entre 100, se suma 1 y se mutiplica por 100 
    }                                   //para rendear el número a centena mayor
    else
    {   //Si es menor o igual a 20
        salida = (entrada/100)*100; //Se divide la entrada entre 100 y se divide entre 100
    }                               //para redondearlo a la centena menor


    if(aux<0)
    { //Si el auxiliar es negativo, se procede volver negativo la salida
        salida = salida*-1;
    }

    //Salida
    printf("%d", salida); //Se imprime el número redondeado

    return 0; 

}
#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Entradas: una letra, minuscula o mayuscula
Salidas: El codigo ASCII para esa letra
Proceso: Escribir un programa para mostrar los códigos ASCII de las letras
mayúsculas y minúsculas.
*/
int main()
{
    //Entradas
    char letra;
    int cod;
    printf("Ingresa una letra \n");
    scanf("%c",&letra);

    //Proceso
    cod=("%d",letra);

    //Salida
    printf("El codigo ASCII para %c es %d",letra,cod);
    return 0;
}
//QA realizado por Rodrigo Hernandez Gongora
//Entradas probadas: r, a, T, F
//Salidas: 114, 97, 84, 70
//El algoritmo funciona, pero no es modular, que es lo que se solicito para esta entrega, por lo que esta mal

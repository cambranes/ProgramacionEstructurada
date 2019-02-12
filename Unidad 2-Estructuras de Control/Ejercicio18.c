/*ejercicio 18.-.Escribir y ejecutar un programa que simule una calculadora simple. Lee dos
enteros y un carácter. Si el carácter es un +, se imprime la suma; si es un -,
se imprime la diferencia; si es un * se imrpime el producto; si es un /, se
imprime el cociente; y si es un % se imprime el resto. */

#include<stdio.h> //librerias
#include<stdlib.h>
#include<math.h>

int main(){

    int Resultado;
    int a;
    int b;
    int opcion;

    do{
        printf("\n--CALCULADORA--");
        printf("\n\n1 .-SUMAR--");
        printf("\n2 .-RESTAR--");
        printf("\n3 .-MULTIPLICAR--");
        printf("\n4 .-DIVIDIR--");
        printf("\n5 .-RESIDUO--");
        printf("\n6 .-SALIR--");

        printf("\n\nELIGE UNA OPCION: ");
        scanf("%i",&opcion);

        switch(opcion){
            case 1: /*SUMA*/
                printf("\nINTRODUCE EL PRIMER NUMERO: ");
                scanf("%i",&a);
                printf("\nINTRODUCE EL SEGUNDO NUMERO: ");
                scanf("%i",&b);
                Resultado= a+b;
                printf("\nLA SUMA DE %i + %i es igual a : %i",a,b,Resultado);
                break;
            case 2: /*RESTA*/
                printf("\nINTRODUCE EL PRIMER NUMERO: ");
                scanf("%i",&a);
                printf("\nINTRODUCE EL SEGUNDO NUMERO: ");
                scanf("%i",&b);
                Resultado=a-b;
                printf("\nLA RESTA DE %i - %i ES IGUAL A : %i ",a,b,Resultado);
                break;

            case 3: /*MULTIPLICACION*/
                printf("\nINTRODUCE EL PRIMER NUMERO: ");
                scanf("%i",&a);
                printf("\nINTRODUCE EL SEGUNDO NUMERO: ");
                scanf("%i",&b);
                Resultado=a*b;
                printf("\nLA MULTIPLICACION DE %i * %i ES IGUAL A : %i ",a,b,Resultado);
                break;

            case 4: /*DIVISION*/
                printf("\nINTRODUCE EL PRIMER NUMERO: ");
                scanf("%i",&a);
                printf("\nINTRODUCE EL SEGUNDO NUMERO: ");
                scanf("%i",&b);
                Resultado=a/b;
                printf("\nLA DIVISION DE %i / %i ES IGUAL A : %i ",a,b,Resultado);
                break;

            case 5: /*RESIDUO*/
                printf("\nINTRODUCE EL PRIMER NUMERO: ");
                scanf("%i",&a);
                printf("\nINTRODUCE EL SEGUNDO NUMERO: ");
                scanf("%i",&b);
                Resultado=a%b;
                printf("\nEL RESIDUO DE %i modulo %i ES IGUAL A :%i",a,b,Resultado);
                break;

            case 6:/*SALIR*/
                break;


        }
    }while(opcion != 6);



return(EXIT_SUCCESS);
}
//Prueba QA//
/*
Autor QA: Daniel Eduardo Gutiérrez Delfin
Entradas:(1,587,361)(2,846,2654)(3,58,23)(4,1584,100)(5,184,5)(6)
Salidas:(948)(-1808)(1334)(15)(4)(Fin del programa)
Proceso:Todo Correcto
/*

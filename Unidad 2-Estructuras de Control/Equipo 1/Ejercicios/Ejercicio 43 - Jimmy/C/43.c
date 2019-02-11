/*
Ejercicio 43 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Jimmy Nathan Ojeda Arana
Fecha: 3 de Febrero 2019
Entradas: N valores
Salidas: La cantidad de números positivos y números negativos
---------------------------------------
Instrucción:
Escribe el programa que lea N valores y que cuente cuantos de ellos son
negativos y cuantos son positivos (cero se condición de fin de lectura).
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se solicita un número diferente a 0
2.-Se comprueba si es positivo o negativo (Si el número ingresado es 0, el programa se cerrará inmediatamente)
3.-Se le agrega un 1 al contador correspondiente (contador de negativos o contador de positivos)
4.-Se solicita que se ingrese un nuevo número (Si el número ingresado es 0, procede al siguiente paso)
5.-Imprime la cantidad de números positivos y negativos encontrados
---------------------------------------
*/
#include <stdio.h>

int main()
    {
    /*Entradas*/
    //Se definen los tipos de variables a utilizar
    int positivos=0,negativos=0;
    float numero;
    
    //Se solicita un primer número
    printf("Ingresa un numero real diferente de 0, (Ingresa 0 para salir).  \n");
    scanf("%f",&numero);
    /*Procedimiento*/
    //Si el número ingresado es 0 el programa se cerrará
    while (numero!=0){
        //Si el número ingresado es mayor que 0 se sumará un 1 al contador de positivos
        if (numero>0){
            positivos++;
        } else {
            //Si el número ingresado no es mayor que 0 se sumará un 1 al contador de negativos
            negativos++;
        }
        //Se solicita otro número para analizar, en caso de no necesitar otro número se ingresa el 0 para terminar
        printf("Ingresa otro numero real diferente de 0, (Ingresa 0 para salir). \n");
        scanf("%f",&numero);
    }
    /*Salidas*/
    //Se imprime la cantidad de números positivos encontrados y seguidamente la cantidad de negativos encontrados
    printf("Se encontraron %i positivos \n",positivos);
    printf("Se encontraron %i negativos",negativos);

    return 0;
    }
    /*Pruebas*/
/*
Autor QA: Alejandro Torre Reyes
Entrada: 1,2,3,4,-1,-2,-3,-4,0
Salida: Se encontraron 4 números positivos y 4 números negativos
Proceso: OK
*/

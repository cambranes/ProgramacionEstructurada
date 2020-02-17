//Equipo4
//Autor:Jose Miron
//Programa que lea una cadena de numeros no determinada y determinar el valor mayor y menor
//terminara cuando el ultimo numero ingresado sea 999
//Entrada: Numeros enteros
//Salida: Numero mayor y menor de la serie
#include <stdio.h>

int main()
{
    //Entrada
    int nmayor; //numero mayor
    int nmenor; //numero menor
    int numero; //entrada de numero
    nmayor = -999;//
    nmenor = 999;

    scanf("%d", &numero);//Ingreso de la serie de numeros

    //Proceso
    do
    {
        if(numero > nmayor)//Si numero ingresado es mayor que el actual numero mayor
        {
            if(numero != 999)//Mientras sea distinto de 999
            {
                nmayor = numero;//Se sustituye el antiguo numero mayor por el actual
            }
        }

        if(numero < nmenor)//Si numero ingresado es menor que el actual numero menor
        {
            if(numero != 999)//Mientras sea distinto de 999
            {
            nmenor = numero;//Se sustituye el antiguo numero menor por el actual
            }
        }
    } 
    while(numero != 999);//Mientras sea distinto de 999

    //Salida
    printf("%d \n", nmayor);//Impresion del mayor numero de la serie de numeros
    printf("%d \n", nmenor);//Impresion del menor numero de la serie de numeros

    return 0;
}


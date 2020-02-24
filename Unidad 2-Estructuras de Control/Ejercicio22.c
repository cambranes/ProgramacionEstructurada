//Equipo4
//Fecha 10/02/2020
//Autor: Carlos Greene
//Programa que hace una suma los factoriales de una serie de n números
//Entrada: Número entero positivo
//Salida: Suma total de la serie de factoriales
#include <stdio.h>

int main()
{
    //Entrada
    int entrada = 0, fact = 1, salida = 0;
    // entrada: número introducido, fact: factorial, salida: La suma de la serie de factoriales

    scanf("%d", &entrada); //Se lee el número de entrada

    //Proceso
    if(entrada == 0) //Se compara si el número introducido es cero
    {
        salida = 1; //Si el número es cero, entonces su factorial será 1 por conveniencia
    }
    else
    { //Si no es igual a cero entonces
        for(int i = 1; i <= entrada; i++) //Se hace un ciclo repetitivo para sumar la serie de factoriales
        {
            fact=1; //Se inicializa la variable fact

            for(int n = 1; n <= i; n++) //Se hace otro ciclo repetitivo para calcular factoriales
            {
                fact = fact*n; //Se calcula factorial multiplicando la variable fact por n del ciclo
            }

            salida = salida + fact; //Se suma los factoriales

        }  
    }

    //Salida
    printf("%d", salida); //Se imprime la suma de serie de factoriales
    return 0;
}
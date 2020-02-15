//Equipo4
//Autor:Jose Miron
//Programa que lea una cadena de numeros no determinada y determinar el valor mayor y menor
//terminara cuando el ultimo numero ingresado sea 999
//Entrada: Numeros enteros
//Salida: Numero mayor y menor de la serie
#include <stdio.h>

int main()
        {
            int nmayor; //numero mayor
            int nmenor; //numero menor
            int numero; //entrada de numero
            nmayor = -999;
            nmenor = 999;

            do
            {

                scanf("%d", &numero);
                if (numero > nmayor)
                {
                    if (numero != 999)
                    {
                        nmayor = numero;
                    }
                }

                if (numero < nmenor)
                {
                    nmenor = numero;
                }
            } while (numero != 999);
            printf(nmayor);
            printf(nmenor);
            return 0;

        }

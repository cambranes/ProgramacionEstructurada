//Equipo4
//Autor:Jose Miron
//Programa que lea una cadena de numeros no determinada y determinar el valor mayor y menor
//terminara cuando el ultimo numero ingresado sea 999
//Entrada: Numeros enteros
//Salida: Numero mayor y menor de la serie
#include <stdio.h>
main(){
int mayor; int menor; int numerouno; int numerodos; int numeros;
do
{
    scanf("%i", &numerouno);//Entrada de numeros enteros
    scanf("%i", &numerodos);//Entrada de numeros enteros

    if(numerouno>numerodos)//Si el primer numero fue mayor que el segundo
    menor=numerodos; mayor=numerouno; menor=numerodos;

    do

    {
        scanf("&i", &numeros);//Ingreso de numeros enteros
        if(numeros>mayor){ mayor=numeros;//
            printf(%mayor);
        }
        else if(numeros<menor){menor=numeros;
        printf(%menor);
        }

    } while (numeros !=999 || numerouno !=999 || numerodos!=999);

    if(numerouno<numerodos)//Si el segundo numero fue mayor que el primero
    menor=numerouno; mayor=numerodos; menor=numerouno;
    do
    {
        scanf("&i", &numeros);
        if(numeros>mayor){ mayor=numeros;
            printf(%mayor);
        }
        else if(numeros<menor){menor=numeros;
        printf(%menor);
        
    } while (numeros !=999 || numerouno !=999 || numerodos!=999);
    
    
} while (numeros != 999 || numerouno !=999 || numerodos!=999);

} while (numeros != 999 || numerouno !=999 || numerodos!=999);
return 0;
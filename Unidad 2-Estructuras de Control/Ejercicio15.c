//Equipo 3
//Diego De Gante
//Programa que lea dos fechas (día-mes-año) con tres cantidades enteras 
//e imprima la mayor, si son la misma imprima son iguales.
//Entrada:diaUno, diaDos, mesUno, mesDos, anioUno, anioDos
//Salida: La fecha mayor o si las fechas son iguales

#include <stdio.h>

int main()
{
    int diaUno = 0, mesUno = 0, anioUno = 0, diaDos = 0, mesDos = 0, anioDos = 0;;
    printf("1ra Fecha\n");
    printf("Ingresa el número del día\n");
    scanf("%i", &diaUno);
    printf("Ingresa el número del mes\n");
    scanf("%i", &mesUno);
    printf("Ingresa el número del año\n");
    scanf("%i", &anioUno);

    printf("2da Fecha\n");
    printf("Ingresa el número del día\n");
    scanf("%i", &diaDos);
    printf("Ingresa el número del mes\n");
    scanf("%i", &mesDos);
    printf("Ingresa el número del año\n");
    scanf("%i", &anioDos);

    if (anioUno > anioDos)
    {
        printf("%i\n",diaUno);
        printf("%i\n",mesUno);
        printf("%i\n",anioUno);

    }else if(anioUno < anioDos)
    {
        printf("%i\n",diaDos);
        printf("%i\n",mesDos);
        printf("%i\n",anioDos);

    }else
    {
        if (mesUno > mesDos)
        {
            printf("%i\n",diaUno);
            printf("%i\n",mesUno);
            printf("%i\n",anioUno);

        }else if (mesUno < mesDos)
        {
            printf("%i\n",diaDos);
            printf("%i\n",mesDos);
            printf("%i\n",anioDos);

        }else
        {
            if (diaUno > diaDos)
            {
                printf("%i\n",diaUno);
                printf("%i\n",mesUno);
                printf("%i\n",anioUno);

            }else if (diaUno < diaDos)
            {
                printf("%i\n",diaDos);
                printf("%i\n",mesDos);
                printf("%i\n",anioDos);

            }else
            {
                printf("Las fechas son iguales\n");
            }
        }
    }
    return 0;
}
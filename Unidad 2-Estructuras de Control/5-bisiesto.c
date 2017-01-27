/*
Autor:Edgar Cambranes 26/Enero/17
Entradas:Ano (int)
Salidas:Impresion
Procedimiento general:
Determinar si dado una entrada entera
representa un anio bisiesto o no.
Se determina inicialmente si es multiplo de 4. 
Dentro de los multiplos de 100 debe cumplir si es multiplo de 400.
Se utiliza una bandera (esBisiesto)
*/

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	/* Entradas 
	bisiesto valor de entrada para verificar
	esBisiesto bandera con dos valores 0/1 F/V
	por defecto esBisiesto se inicia como Falso (0)
	*/
	int bisiesto, esBisiesto = 0;
	scanf("%d", &bisiesto);
	/* Verificacion de multiplo de 4 
	sino esBisiesto tiene valor por defecto falso*/
	if (bisiesto%4 == 0)
	{
		/* Verificacion de multiplo de 100*/
		if (bisiesto%100 == 0)
		{
			if (bisiesto%400 == 0)
			{
				/* Es multiplo de 100 y 400*/
				esBisiesto = 1;
			}			
		}
		/* Es multiplo de 4 pero no de 100*/
		else
		{
		esBisiesto = 1;	
		}
	}
	
	/* Salida*/
	if (esBisiesto)
	{
		printf("%d es bisiesto", bisiesto);
	}
	else 
	{
		printf("%d NO es bisiesto", bisiesto);
	}
	
	return 0;
}




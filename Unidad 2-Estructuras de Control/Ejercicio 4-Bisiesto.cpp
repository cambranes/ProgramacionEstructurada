/*
Autor:Moisés Vinajera 29/Enero/17
Entradas:Valor (float)
Salidas: valorRedondeado (int)
Procedimiento general:
Un condicional para definir el ciclo si el valor es mayor o menor que cero.
Se considera la definición de redondeo de centana hacia el valor mayor más cercano al valor leído.
Luego ciclos respectivos para definir el valor al cual se va a redondear.
*/

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	/* Entradas 
	valor = valor de entrada (float)
	valorRedondeado = La centana más cercana a la cual se va a redondear.
	*/
	float valor;
	int valorRedondeado = 100;
	
	/* Procedimiento */
	printf("Introduzca un valor\n");
	scanf("%f", &valor);
	if (valor < 0)
	{
		valorRedondeado = -100;
		while ((-valor)/valorRedondeado <= -1)
		{
			valorRedondeado = valorRedondeado - 100;
		}
		valorRedondeado = valorRedondeado + 100;
	}
	else 
	{
		while (valor/valorRedondeado >= 1)
		{
			valorRedondeado = valorRedondeado + 100;
		}
	}
	
	/* Salida*/
	printf("El valor redondeado es %d",  valorRedondeado);
	return 0;
}



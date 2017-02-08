/*Autor:Luis Gerardo Vázquez Vera 28/01/17
Entradas:tabla, minimo, maximo
Salidas:multiples impresiones
Procedimiento general:primero se solicita cuantas tablas quiere imprimir el usuario
posteriormente se solicitan los valores minimo y maximo (de j hasta k)
se hacen las operaciones
se realiza el ciclo y el posicionamiento de los contadores para que se entiendan las impresiones
en caso de que coloquen los valores al revez, se notificara que los datos introducidos son erroneos*/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int tabla, minimo, maximo, contador1, contador2, resultado, bandera=0;
	/*entradas*/
	do
		{
	printf("introduzca hasta que tabla quiere realizar la operacion:\n");
	scanf("%d", &tabla);
	if(tabla<0)
	{
		printf("error en la tabla\n");
		bandera=1;
	}
	else
	   {
		bandera=0;
	}
	}
	while(bandera==1);
	do
	{
	printf("introduzca los valores minimo y maximo respectivamente:\n");
	scanf("%d %d", &minimo, &maximo);
	/*procedimiento*/
	if(maximo>minimo)
	{
		for(contador1=0; contador1<=tabla; contador1++)
		{
			for(contador2=minimo; contador2<=maximo; contador2++)
			{
				resultado=contador2*contador1;
				/*impresion*/
				/*se realiza de la siguiente forma para mejor comprension*/
				printf("%d X %d = %d\n", contador2, contador1, resultado);
			}
			printf("\n");
			bandera=0;
		}
	}
	else if (minimo==maximo)
	{
		for(contador1=0; contador1<=tabla; contador1++)
		{
			for(contador2=minimo; contador2<=maximo; contador2++)
			{
				resultado=contador2*contador1;
				/*impresion*/
				/*se realiza de la siguiente forma para mejor comprension*/
				printf("%d X %d = %d\n", contador2, contador1, resultado);
			}
			printf("\n");
			bandera=0;
		}	
	}
	else
	{
		printf("reintroduzca los valores correctamente\n");
		bandera=1;
	}
	}
	while (bandera==1);
	return 0;
	}

/*
Probado por: Irving Baez

Entrada: 4, 1, 7.
Salida: Tablas de multiplicación correctas.

Entrada: -1, -5, 8.
Salida:

Entrada: 1, 8, 5.
Salida: Reintroduzca los valores correctamente.
Nota: el programa no da la oportunidad de reintroducirlos.

Entrada: 1, 5, 5.
Salida: Reintroduzca los valores correctamente.
Nota: el programa no da la oportunidad de reintroducirlos.

Entrada: 0.5.
Salida: Introduzca los valores mínimo y máximo respectivametne, Reintroduzca los valores correctamente.
*/



#include <stdio.h>

/*
Autor:Diego Leonardo Mis Aguilar 30/Enero/17
Entradas: numPrimo (int)
Salidas: Imprimir 
Procedimiento general:
Se imprimen las instrucciones para introducir
un valor para calcular si es primo
Se realiza un contador para saber cuantos divisores
existen desde 2 hasta numPrimo que no tengan residuo
Si el contador numDivisores solo acumulo 1 quiere
decir que el la unica division con residuo 0 fue
al dividirlo entres si mismo
Se realizan un par de condicionales para imprimir
si el valor introdocido es primo o no.
*/

#include <stdio.h>
int global;
int main(int argc, char *argv[]) {
	
	/*Entradas
	numPrimo valor numerico entero
	*/
	int numDivisores = 0,numPrimo,i;
	
	/*Procedimiento
	Se proporcionan las intrucciones para introduccion
	del valor*/
	printf("Introduce un valor numerico: ");
	scanf("%d", &numPrimo);
	
	/*Se ejecuta un acumulador para saber cuantos divisores
	con residuo 0 exiten entre 2 y el valor introducido*/
	for(i=2;i<=numPrimo;i++)
	{
		if((numPrimo%i)==0)
		{
			numDivisores++;
		}
	}
	
	/*Condicionales para impresion*/
	if(numDivisores==1)
	{
		printf("El valor es primo");
	}
	else
	{
		printf("El valor no es primo");
	}
	
	return 0;
}
/* Hay algo mal en el codigo */
/*Casi todo esta bien , hay una falta en el codigo, la variable
numDivisores debe de estar inicializada en 0 para que imprima el resultado
correcto; sin eso el programa muestra que todos los numeros no son primos*/
/*la correcta identacion, saltar una linea despues del if y luego { haria el programa mas claro
Prueba hecha por Shaid Bojorquez del Equipo 2
*/

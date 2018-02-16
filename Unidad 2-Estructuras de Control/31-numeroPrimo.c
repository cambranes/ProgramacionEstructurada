/* Autor:Víctor Ortiz García (16/Febrero/18 - 8:00 AM)

Procedimiento General: Lee un número, y se hace un ciclo for que se repite las mismas veces que el
valor del número, y si el número tiene sólamente 2 divisores, es primo. En cualquier otro caso, no es primo.
*/

#include <stdio.h>
int cuantosDivisores(int);
int siEsPrimo(int);
//Entrada
int main(int argc, char *argv[]) {
	int numero, divisores;
	int esPrimoONo;
	printf("Introducir el numero: \n");
	scanf("%d", &numero);
	
	//Procedimiento
	divisores=cuantosDivisores(numero);
	
	//Salida
	esPrimoONo=siEsPrimo(divisores);

	if(esPrimoONo==1)
	{
		printf("El numero es primo.");
	}
	else
	{
		printf("El numero no es primo.");
	}
	return 0;
}
/*@param:numero: el numero capturado. Será dividido por todos los enteros entre 1 y sí mismo.
@return: divisores: variable que aumenta en 1 por cada vez que el residuo de numero entre i sea cero*/
int cuantosDivisores(int numero)
{
	int i; int divisores=0;
	for (i=1;i<=numero;i++)
	{
		if(numero%i==0)
		{
			divisores++;
		}
	}
	return divisores;
}
/*@param: divisores: variable simple que determinará si el numero es primo o no.
@return:devuelve el valor de siEsPrimoONo, dependiendo del valor de la variable divisores*/
int siEsPrimo(int divisores)
{
	int siEsPrimoONo;
	if (divisores==2)
	{
		siEsPrimoONo=1;
	}
	else
	{
		siEsPrimoONo=2;
	}
	return siEsPrimoONo;
}

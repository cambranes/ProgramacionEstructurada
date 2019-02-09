//Problema 1 - Equipo 1 - Daniel Eduardo Gutiérrez Delfín
#include <stdio.h>

int main() 
{
	int n; //Definimo n como variable//
	
	printf ("\nEscribe un número entero "); //Se da el mensaje al usuario//
	scanf ("%d", &n); //leemos n//
	
	if ( n % 2 == 0) //Si el residuo de n dividido entre 2 es igual a 0//
		printf("Es Par");//Se escribe "Es Par"//
	else //Si no//
		printf ("No Es Par"); //Se escribe "No Es Par"//
	
	return 0;
}


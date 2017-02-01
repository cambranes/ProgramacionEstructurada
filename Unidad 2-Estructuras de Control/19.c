/*
Autor: Daniel Medin 29/Enero/17
Entradas: 3 numeros enteros.
Salidas: el numero mayor.
Procedimiento general:
Comparamos 3 numeros enteros entre si para saber cual es el mayor.
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	/*Entrada*/
	int primerNumero, segundoNumero, tercerNumero, mayor;
	printf("Ingrese el primer numero\n");
	scanf("%d", &primerNumero);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &segundoNumero);
	printf("Ingrese el tercer numero\n");
	scanf("%d", &tercerNumero);
	/*Proceso
	Compramos lo numeros entre si para saber cual es el mayor
	*/
	if(primerNumero > segundoNumero)
	{
		if(primerNumero > tercerNumero)
		{
			mayor = 1;
		}
		else
		{
			mayor = 3;
		}
	}
	else
	{
		if(segundoNumero > tercerNumero)
		{
			mayor = 2;
		}
		else
		{
			mayor = 3;
		}
	}
	/*Salida*/
	switch(mayor)
	{
	case 1:
		printf("El numero %d es el mayor", primerNumero);
		break;
	case 2:
		printf("El numero %d es el mayor", segundoNumero);
		break;
	case 3:
		printf("El numero %d es el mayor", tercerNumero);
		break;
	default:
		break;
	}
	return 0;
}

/*
QA: Kirbey Garcia
Se realizaron los casos de prueba con las siguientes entradas:
60, 34 y 56 dando como salida el numero mayor (60)
2000, 5678, 4567 dando como salida el valor mayor (5678)
-900, -2, -578 dando como salida el numero mayor (-2)
Se realiz� el caso de prueba en que fueran iguales todos los valores, donde
esperabamos que el programa indicara esa igualdad, mas nos informa que ese
valor entre los tres es el mayor, lo cual podria mejorarse incluyendo ese caso
en particular (donde todos los numeros son iguales)
Otro caso mas fue donde dos valores sean iguales, en el cual presenta el detalle
mencionado anteriormente, pudiendose corregir definiendo el caso en particular.

*/

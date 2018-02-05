#include <stdio.h>
/*Ejercicio 2
autor:Carlos Alvarez*/
/*Descripcion general:Algortimo para determinar si un numero es mayor,menor o igual con respecto a otro*/
int main ()
{
	/*Se definen las veriables*/
	int numero,numerodos;
	/*entrada:Se solicita ingrese el valor para la variable*/
	printf("introduzca un numero positivo o negativo:" );
	scanf("%d",&numero);
	printf("introduzca un numero positivo o negativo: " );
	scanf("%d",&numerodos);
	/*proceso:El valor es evaluado en cada una de las condiciones para determinar si es mayor,menor o igual que otro numero*/
	if(numero> numerodos)
	{
		printf("es mayor que %d\n",numero);
	}
	else if(numerodos>numero)
	{
		printf("es mayor que %d\n",numerodos);
	}
	else
	{
		printf("son iguales");
	}
	/*salida:Se muestra en pantalla los valores obtenidos con su respectiva comparacion*/
	return 0;
}

/*Q\A: el programa encuentra correctamente el numero
mayor y si los numeros son iguales pero no genera
una salida para indicar cual es el numero menor
en el caso 1: los datos de entrada fueron 0 y 0 y
los datos de salida fueron que eran iguales, en el 
caso 2: los datos de entrada fueron -10 y 10 y los
datos de salida fueron que 10 era mayor pero no hubo 
un dato de salida para el menor. Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"*/


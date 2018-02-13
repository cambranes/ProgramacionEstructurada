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

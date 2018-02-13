#include <stdio.h>
/*Ejercicio 8
Autor:Carlos Alvarez*/
/*Descripcion general:Algortimo para determinar si un numero es multiplo o no de otro*/
int main(int argc, char *argv[]) {
	/*Se definen las veriables*/
	int numero,numerodos;
	/*entrada:Se solicita ingrese el valor para la variable*/
	printf("introduzca un numero positivo o negativo:" );
	scanf("%d",&numero);
	printf("introduzca un numero positivo o negativo: " );
	scanf("%d",&numerodos);
	/*Proceso: Se obtiene el modulo de los numeros, en donde al ser 0, el numero sera el multiplo del otro*/
	if(numero%numerodos==0)
	{
		printf("es multiplo del primero",numerodos);
	}
	else
	{
		printf("no es multiplo del primero",numerodos);
	}
	/*Salida:muestra el valor obtenido en base a la condicion*/
	return 0;
}

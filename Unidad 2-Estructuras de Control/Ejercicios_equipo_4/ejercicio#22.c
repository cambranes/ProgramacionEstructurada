/*
Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
Entradas:un numero natural
Salidas: la suma de todos los numeros factoriales anteriores hasta 1
Procedimiento general: se suman de los factoriales de 1 hasta n numero
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	
	int sumaFactoriales = 0;
	int numero;
	int factorial = 1;
	
	printf("ingresa hasta que numero se suamaran los factoriales (iniciando desde 1)\n");
	printf("numero: ");
	scanf("%i",&numero);
	//si numero es negativo, se solicita de nuevo
	while(numero<0){
		printf("numero fuera de rango. ingresa otro numero: ");
		scanf("%i",&numero);
	}

	/*Procedimiento*/
	
	//si el numero es diferente a cero, que realize la suma de factoriles, en caso contrario, la suma es 1, ya que 0! = 1
	if(numero != 0)
	{
		for(int i = 1;i <= numero; i ++)
		{
			factorial = 1;
			for(int j = 1; j <= i; j++)
			{
				factorial = factorial * j;
			}
			sumaFactoriales = sumaFactoriales + factorial;
		}
	}
	else 
	{
		sumaFactoriales = 1;
	}
	
	/*Salidas*/
	
	printf("\nla suma de factoriales es: %i",sumaFactoriales);
	return 0;
}

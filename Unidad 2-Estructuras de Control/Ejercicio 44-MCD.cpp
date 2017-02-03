/*
Autor:Moisés Vinajera 29/Enero/17
Entradas: valor1, valor2 (int)
Salidas: MCD (int)
Procedimiento general:

*/

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	/* Entradas 
	valor1= primer valor de entrada (int)
	valor1= segundo valor de entrada (int)

	*/
	int valor1, valor2, mcd=0, divisor=0;
	
	/* Procedimiento */
	printf("Introduzca dos valores enteros diferentes a cero \n");
	scanf("%d %d", &valor1, &valor2);
	if (valor1!=0 && valor2 != 0)
	{	if (valor1 >= valor2)
		{
			while (valor1!=0 && valor2 != 0)
			{
				divisor = valor1%valor2; 
				valor1 = valor2;
				valor2 = divisor;
				mcd = valor1;
			}
		}
		else 
		{
			while (valor1!=0 && valor2 != 0)
			{
				divisor = valor2%valor1;
				valor2 = valor1;
				valor1 = divisor;
				mcd = valor2;
			}
		}
		/* Salida*/
		printf(" El mcd de los numeros es %d ", mcd);	
	}
	else
	{
		/* Salida*/
		printf("Datos incorrectos");
	}
	return 0;
}

#include<stdio.h>

/*Autor: Hugo Pérez - Equipo #7*/
/*Programación estructurada*/

/*Instruccion: Escribir el programa que reciba un numero positivo,
si este numero es mayor a 1000 se le sumara un 5%, si el numero es mayor a 3000
se le sumara otro 10% adicional y si el numero es mayor a 5000 se le sumara
otro 5% adicional*/


int main() {
	/*Se define las variables*/
	float num, percent, percenTwo, total; /*Variables*/
	
	/*Entrada*/
	printf("Escribe numero\n");
	scanf("%f",&num);
	
	/*Procedimiento*/
	if (num<=0)
	{
		/*Salida 1.  En caso de que el numero sea cero o negativo*/
		printf("Tiene que ser un numero positivo\a");
	} else 
	{
		if (num>=5000)
		{
			/*Se hace toda la operacion, si el numero es mayor o igual a 5000*/
			percent = (num*5)/100;
			percenTwo = (num*10)/100;
			total = num+percent+percenTwo+percent;
			/*Salida 2. En caso de que el numero sea mayor a 5000*/
			printf("El total mas el porcentaje agregado es %f\n", total);
		}
		else
		{
			if (num>=3000)
			{
				/*Se hace toda la operacion, si el numero es mayor o igual a 3000*/
				percent = (num*5)/100;
				percenTwo = (num*10)/100;
				total = num+percent+percenTwo;
				/*Salida 3. En caso de que el numero sea mayor a 3000 pero menor a 5000*/
				printf("El total mas el porcentaje agregado es %f\n", total);
			}
			else
			{
				if (num>=1000)
				{
					/*Se hace toda la operacion, si el numero es mayor o igual a 1000*/
					percent = (num*5)/100;
					total = num+percent;
					/*Salida 4. En caso de que el numero sea mayor a 1000 pero menor que 3000*/
					printf("El total mas el porcentaje agregado es %f\n", total);
				}
				else
				{
					/*Salida 5. Este se envia si el numero es mayor a cero pero menor que 1000*/
					printf("Tiene que ser un numero mayor a 1000 para agregarle un porcentaje\a");
				}
			}
		}
	}
	return 0;
}
/*
Bloque de Pruebas
En la prueba se intodujeron los valores 1020, 3000, 10000 y 20
en la salida obtuvimos como resultado 1071, 3450 y 12000 para 1020, 3000 y 10000 respectivamente
para 20 nos pidió introducir un numero mayor a mil.
El codigo lleva una correcta identación
La variable "percentwo" debió escribirse así: percentTwo.

Prueba realizada por Martin Alpuche del equipo 2 
*/

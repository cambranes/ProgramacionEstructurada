/* Ejercicio #19
Escribir un programa que lea tres números y determine el mayor de los tres.
- Pamela C. Canul Chacón (Equipo 'about:blank') */
#include <stdio.h>
int main() 
{
	//Entradas
	int num1; 
	int num2;
	int num3;
	int numMayor; 
	//Solicitud de entrada de datos
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	//Proceso 
	if(num1 > num2 && num1 > num3) //se compara el número 1 con los otros dos números
	{
		numMayor = num1; //Se asigna un valor a la variable del numero mayor
	}
	else if(num2 > num1 && num2 > num3) //se compara el número 2 con los otros dos números
	{
		numMayor = num2; //Se asigna un valor a la variable del numero mayor
	}
	else { //Si no se cumple ninguna de las condiciones se considera que el número 3 es el mayor
		numMayor = num3; //Se asigna un valor a la variable del numero mayor
	}
	
	//Resultados
	printf("%d",numMayor);
	
	return 0; 
}

/* Ejercicio #1
Escribe un programa que reciba un número y te diga si ese número es par o
impar.
- Pamela C. Canul Chacón (Equipo 'about:blank') */
#include <stdio.h>
int main()
{
	//Entradas 
	int num;
	int esPar;
	
	//Solicitud de ingresar datos
	scanf("%d",&num);
	
	//procedimiento
	if (num%2 == 0) //Se compara con el modulo del número y 2 para saber si el número es par
	{
		esPar = 1; //La variable esPar toma valor positivo si el resultado de la división es cero
	}
	else{
		esPar = 0; //La variable esPar toma valor negativo si el resultado de la división no es cero
	}
	
	//Resultados
	printf("%d",esPar);
	
	return 0; 
}

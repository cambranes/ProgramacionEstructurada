/* Ejercicio #1
Escribe un programa que reciba un n�mero y te diga si ese n�mero es par o
impar.
- Pamela C. Canul Chac�n (Equipo 'about:blank') */
#include <stdio.h>
int main()
{
	//Entradas 
	int num;
	int esPar;
	
	//Solicitud de ingresar datos
	scanf("%d",&num);
	
	//procedimiento
	if (num%2 == 0) //Se compara con el modulo del n�mero y 2 para saber si el n�mero es par
	{
		esPar = 1; //La variable esPar toma valor positivo si el resultado de la divisi�n es cero
	}
	else{
		esPar = 0; //La variable esPar toma valor negativo si el resultado de la divisi�n no es cero
	}
	
	//Resultados
	printf("%d",esPar);
	
	return 0; 
}

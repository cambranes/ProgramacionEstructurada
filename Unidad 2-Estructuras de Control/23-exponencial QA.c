/*Sebastian Echeverria
Introduccion:Determinar el valor de una serie */
#include <stdio.h>

int main()	{
	/*entrada*/
	
	int i;
	int j;
	int factorial;
	int potencia;
	int x;
	
	/*Procedimiento*/
	
	float e;
	printf("Introduce el valor de x: ");
	scanf("%d",&x);
	// Calcula los primero 10 valores para e elevado a x.
	e=1.0;
	for (i=1;i<=10;i++)
	{
		//Calcula x elevada a una potencia i
		potencia=1;
		for (j=1;j<=i;j++){
			potencia=potencia*x;
		}
		// Calcula el Factorial de i
		factorial=1;
		for (j=i;j>0;j--) {
			factorial=factorial*j;
		}
		//Acumula el valor de e
		e=e+(potencia/factorial);
	}
	/*salida*/
	printf("El valor de e elevado a x: %f", e);
	
	return 0;
} 
/*QA
Jorge Anzures
El programa recibe de manera correcta los valores pero sigue ejecutandose con numeros mayores a 10
y las salidas no son correctas
prueba 1:
entrada
3
salida
18 (cuando 8.5 es la salida correcta)
prueba2:
2
salida:
6(salida correcta es 5)
prueba 3:
Entrada
1
Salida
2(Correcta)

*/

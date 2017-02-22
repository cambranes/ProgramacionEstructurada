/*
Autores:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 16/Febrero/17
Entradas:numerador, denominador (int)
Salidas:0, 1(int)
Procedimiento general: Se realiza un programa que reciba dos enteros
que representan un numeor racional, y a por medio de una función que 
calcule el máximo comun divisor de los dos numeros se podrá determinar
si la fracción es simplificable marcado con un 0; y si no es mostrará 
un 1
*/

#include <stdio.h>
int estaSimplificada(int numerador, int denominador);

int main(int argc, char *argv[]) {
	/*Entradas
	int numerador
	int denominador*/
	int numerador, denominador;

	printf ("introduce tu fraccion\n");
	printf("numerador:\n");
	scanf("%d", &numerador);
	printf("denominador:\n");
	scanf("%d", &denominador);

	while (denominador==0 || numerador==0)
	{
		printf ("Valor inválido introduce otra fracción\n");
		printf ("introduce tu fraccion\n");
		printf("numerador:\n");
		scanf("%d", &numerador);
		printf("denominador:\n");
		scanf("%d", &denominador);
	}
	
	/*Salidas*/
	//Imprime uno si el mcd es mayor a 1 osea que es simplificable la fraccion
	//Imprime cero si el mcd es 0 osea que no es simplificable la fraccion
	int estaSimplificada(int numerador, int denominador);
	return 0;
}


/*Función estaSimplificada que determina el máximo común divisor de los dos enteros 
de la fracción para dar pauta a si la fracción está simplificada.*/



int estaSimplificada(int numerador, int denominador)
{
	//contador: avanza a partir del 2 hasta llegar al menor de los numeros para encontrar multiplos
	//mcd = maximo comun divisor
	//menor=numero menor de los dos enteros
	int contador =2, mcd = 1, menor;
	//Se determina el menor de los dos numeros
	
	if (numerador>denominador)
	{
		menor =denominador;
	}
	else
	{
		menor = numerador;
	}
	/*Este ciclo for determinará los múltiplos comunes entre ambos números
	acumulandose el mcd hasta que el contador sea igual al numero menor de la fraccion*/
	for (contador =2; contador<= menor; contador++)
	{
		while (numerador%contador ==0 && denominador%contador==0)
		{
			numerador = numerador/contador;
			denominador = denominador/contador;
			mcd = mcd*contador;
		}
	}
	if (mcd > 1)
	{
		
		printf("\nSalida: 0");
	}
	else
	{
		printf("\nSalida: 1");
	}
}	

/*Test
Tester: Equipo 1 16/02/2017

Nombrado de variables: Aceptado

Indentación de bloques: Aceptado.

Documentación: Aceptado.

Testeando codigo:
-Entrada: 5,12
Salida: 1

-Entradas: 12,48
Salida: 0

-Entradas: -15
Salida: 5

*/

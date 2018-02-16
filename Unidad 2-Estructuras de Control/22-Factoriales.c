/*
Autor: Magdiel Pech Menéndez
Entrada: numeroDeElementos
Salida: sumaDeFactoriales
Procedimiento general:
Algoritmo para calcular la suma de números 
factoriales 1! + 2! + 3!...+ n!

*/
#include <stdio.h>
//Prototipo de la funcion Factorial
int factorial(int);

int main(int argc, char *argv[]) {
	
	/*
	Variable entera  de entrada: numeroDeElementos
	Variable entera de salida: sumaDeFactoriales
	Variable entera para iteraciones de ciclo for
	Variable entera llada "factorial" para realizar 
	la multiplicación de los valores de n 
	*/
	int numeroDeElementos;
	/*
	Entrada de datos
	*/
	printf("Ingresa el numero de elementos: ");
	scanf("%d",&numeroDeElementos);
	
	
	/*
	Salida de datos
	*/
	printf("El resultado de la suma de factoriales es: %d",factorial(numeroDeElementos));
	
	
	return 0;
}

/*Funcion int factorial
Realiza la suma de los factoriales anteriores al dado
@param numeroDeElementos
@return sumaDeFactoriales*/
int factorial(int numeroDeElementos)
{
	int factorial =1,i,sumaDeFactoriales=0;
	
	if(numeroDeElementos !=0)
	{
		for(i=1;i<=numeroDeElementos;i++)
		{
			factorial = factorial*i;
			sumaDeFactoriales += factorial;
		}
	}
	
	return sumaDeFactoriales;
}

/*
Autor: Magdiel Pech Menéndez
Entrada: numeroDeElementos
Salida: sumaDeFactoriales
Procedimiento general:
Algoritmo para calcular la suma de números 
factoriales 1! + 2! + 3!...+ n!
 
QA
Entrada	Salida	Resultado
1	1	1
3	9	9
7	5913	5913
*/
#include <stdio.h>
 
int main(int argc, char *argv[]) {
 
	/*
	Variable entera  de entrada: numeroDeElementos
	Variable entera de salida: sumaDeFactoriales
	Variable entera para iteraciones de ciclo for
	Variable entera llada "factorial" para realizar 
	la multiplicación de los valores de n 
	*/
	int i, sumaDeFactoriales = 0 , numeroDeElementos, factorial = 1;
	/*
	Entrada de datos
	*/
	printf("Ingresa el numero de elementos: ");
	scanf("%d",&numeroDeElementos);
 
	/*
	Proceso
	*/
	if(numeroDeElementos != 0)
	{
	 for(i =1;i<=numeroDeElementos;i++)
	 {	
		factorial = factorial*i;
		sumaDeFactoriales += factorial;	
	 }  	
	}
	else
	{
		sumaDeFactoriales =1;
	}
 
	/*
	Salida de datos
	*/
	printf("El resultado de la suma de factoriales es: %d",sumaDeFactoriales);
 
 
	return 0;
}

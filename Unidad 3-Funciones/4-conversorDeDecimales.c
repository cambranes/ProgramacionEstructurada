/*
Autor: Ricardo Serrano
Valor de entrada: n
Valor de salida: modulo de n%2
Descripcion: Programa que convierte de decimal a binario 
por medio de la programacion recursiva  
*/
#include <stdio.h>
/*Prototipo de funcion imprimir*/
void imprimir(int);
/*Prototipo de funcion conversor*/
void conversor(int);
int main(int argc, char *argv[]) {
	int n;
	/*Entrada*/
	printf("Ingresa un numero a convertir: ");
	scanf("%d",&n);
	//Salida
	imprimir(n);
	
	
	return 0;
}
/*Funcion void Imprimir
la funcion realiza la impresion del resultado
de la conversion de decimal a binario
@param numero, Valor decimal

*/
void imprimir(int numero)
{

	if(numero ==0)
	{
		printf("Numero decimal: 0 \n");
		printf("Numero binario: 0");
	}
	if(numero>0)
	{
		printf("El numero en decimal es: %d \n",numero);
		printf("El numero en binario es: ");
		conversor(numero);
	}
}
/*Funcion void conversor
Usando recursividad ciclamos la funcion para obtener la conversion
del numero decimal a binario
@oaram valorBinario, El numero que se sigue ciclando hasta ser 1*/
void conversor(int valorBinario)
{
	
	if(valorBinario>1)
	{
		conversor(valorBinario/2);
		
	}
	printf("%d",valorBinario%2);
	
}

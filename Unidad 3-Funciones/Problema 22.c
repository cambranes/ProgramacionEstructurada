/*
Autor: Daniel Eduardo Guti�rrez Delf�n
Problema:.Determina el valor de la secuencia
1! + 2! + .. +n!
Entrada: un n�mero entero
Salida: la suma de factoriales desde 1 hasta el n�mero seleccionado
Proceso:Introducir un numero para ir sacando el total del factorial de mayor a menor sumando los resultados en una variable he imprimir el resultado.
*/
#include <stdio.h>
#include <conio.h>
void ( int contador, int contador1, int numero, int acumulador, int suma=0, int i, int promedio);

	//entrada//
	int main(){
	printf("De que quiere el factorial: ");{
	scanf("%d",&numero);
	contador=numero;}
	return 0;
	}

	//Proceso//
	{
		while(contador >=1){
			contador1=1;acumulador=1;
			i=1;
			while(contador1 <= contador){
				acumulador=acumulador*contador1;
				contador1=contador1+1;
			}
			printf("El factorial de %d es %lu\n",contador,acumulador);
			suma+=acumulador;
			contador=contador-1;
			i=i+1;
		}
	}

	//salida//
	{
		printf("la suma es: %d\n",suma);{
		}
		};
	}

	/*
	QA: Raul Rivadeneyra
	Funcion no declarada, codigo fuera de main y funcion, llamada a libreria sin usarla.
	Demasiados errores.
	No compila

	Arreglar nombrado del ejercicio
	*/

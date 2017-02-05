/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas:n (int)
Salidas:contador(int)
Procedimiento general: Se utiliza dos ciclos for anidados en 
los que se muestran n filas, en la cual cada fila tiene que contener
los numeros del 1 hasta n, coincidiendo siempre el numero de fila 
con los numeros consecituvos mostrados.
*/
#include <stdio.h>
/*QaPrueba */
/*Las entradas cumplen con el estandar de codificacion*/

int main(int argc, char *argv[]) {
	/*Entradas
	n numero maximo que llega la impresion de numeros
    contador del ciclo for
	fila es numero de filas totales
	*/
	int n,contador=1, fila=1;
	scanf("%d",&n);
	
	/*Procedimiento
	Usando dos ciclos for anidados se mostrara las n filas
	que contengan los n numeros consecutivos empezando con el 1
	hasta el n*/
	for(fila; fila<=n; fila++)
	{
		/*Salidas
		Este ciclo imprimira la primera linea con el 1
		luego regresara al ciclo for de arriba 
		aumentando el valor de las filas y luego se imprimira
		el 1 y 2 en la misma fila, así sucesivamente hasta
		llegar a n.
		*/
		for(contador; contador<=fila; contador++)
		{
			printf("%d  ", contador);
		}
		/*Salto de cada fila*/
			printf("\n");
			contador=1;
	}
	return 0;
}


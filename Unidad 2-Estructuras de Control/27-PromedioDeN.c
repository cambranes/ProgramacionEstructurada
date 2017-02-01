/*
Autor:Francisco Quijano 30/Enero/17
Entradas: Datos numericos.
Salidas:promedio de las entradas
Procedimiento general:
se hara una lectura de datos numericos indefinidos
hasta que la entrada sea igual a 999 para despues
obtener el promedio del total de valores numericos.
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	/*Definición de variables*/
	float numero, promedio=0, suma=0;
	int contador=0;
	/*Entradas*/
	/*Realizamos la lectura de los Datos
	al igual que la suma de los mismos para luego
	obtener el promedio*/
	printf("Porfavor ingresar los datos, 999 tiene que ser el ultimo dato que ingrese\n");
	do
	{
		scanf("%f/n",&numero);
		suma = suma + numero;
		/*El contador nos dara el total de datos leidos*/
		contador++;
	}
	while (numero != 999);
	/*Procedimiento*/
	/*Aqui se obtendra el promedio de la suma realizada
	en la parte de entradas*/
	promedio = suma/contador;
	/*Salidas*/
	/*se imprime el promedio final de los numeros en la lectura*/
	printf("El promedio es: %f", promedio);
	return 0;
}
/*Notas de QA
QA: Kirbey garcia
Entradas y Salidas bien definidas basadas en el estandar de cosificaci�n
Se probaron los casos siguientes:
1, 999 Dando como salida el valor de 500 el cual cumple como solucion
1001, 999 Dando como salida el valor de 1000 lo cual cumple como solucion
0, 999 Dando como salida el valor de 1000 lo cual cumple como solucion
1, 2, 3, 4, 5, 6, 999 dando como salida 175.41 lo cual cumple como solucion

*/

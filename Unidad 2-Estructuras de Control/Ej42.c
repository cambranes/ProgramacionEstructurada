
/*
 42. raiz cuadrada de los primeros 100 numeros naturales
Proceso: Escribe el programa que calcule las raíces cuadradas de los cien primeros
números naturales. Como resultado se desean dos columnas de valores: En
la primera columna se escribirán los números naturales y en la segunda sus
raíces correspondientes

Autor: Emmanuel Azcorra Balam

Entradas: 
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double n;
	for (n=1;n<=100; n++){
	
	double r = sqrt(n);
	printf("Raiz cuadrada de %lf es %lf\n",n,r);
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double n;
	for (n=1;n<=100; n++){
	
	double r = sqrt(n);
	printf("Raiz cuadrada de %lf es %lf\n",n,r);
	}
	return 0;
}

/*
Salida:raiz cuadrada de los primeros 100 numeros naturales
*/

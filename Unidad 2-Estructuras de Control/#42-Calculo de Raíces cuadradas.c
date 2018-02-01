/*Escribir un programa que calcule las raices cuadradas de los primeros 100 numeros enteros y 
escribir en 2 columnas diferentes el numero natural y su raiz cuadrada respectivamente
Autor: Kristian Pantoja
Entrada:Reales,Enteros,Logicos
Salida: Reales, Enteros*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	/*Entradas*/
	int a;
	int b;
	float c;
	bool x;
	
	/*Procedimiento*/
	printf("Poner un valor mayor que 0\n");
	b = 100;
	scanf("%i",&a);
	c = (sqrtf(a));
	
	/*Salidas*/
	if (a<=b) {
		x = sqrtf(a)==(c);
	}
	printf("El numero  %i\n",a);
	printf("Tiene Raiz cuadrada de  %f\n",c);
	return 0;
}


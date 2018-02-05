#include <stdio.h>
/*Ejercicio 14
Autor:Carlos Alvarez
Descripcion general:Algoritmo utilizado para calcular una velocidad e indicar si es muy rapida o esta detenida dada una condicion*/
int main(int argc, char *argv[]) {
	/*se definen las variables*/
    int velocidad,vel;
	/*entrada:se solicitan los valores y se leen*/
	printf("ingrese el valor de la velocidad");
	scanf("%d",&velocidad);
	/*proceso:se evalua el valor proporcionado*/
	if(velocidad>100)
	{
		vel=1;
	}
	else 
	   {
		vel=2;
	}
	/*salida:se imprime el valor obtenido con su tipo de velocidad (muy rapido,detenido)*/
	switch (vel)
	{
	case 1:
		printf("Muy rapido");
		break;
	case 2:
		printf("Detenido");
		break;
	}
	return 0;
 }


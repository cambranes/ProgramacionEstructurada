#include <stdio.h>
/*Ejercicio 14
Autor:Carlos Alvarez*/
/*Descripcion general:Algoritmo utilizado para calcular una velocidad e indicar si es muy rapida o esta detenida dada una condicion*/
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
 
 /*Q\A: El programa detecta correctamente cuando la velocidad es mayor
 a 100 y cuando es cero para dar los respectivos datos de salida 
 pero no genera una salida para cuando la velocidad esta entre 
 estos rangos, en el caso 1: el dato de entrada fue 0 y la 
 salida fue "detenido", en el caso 2: el dato de entrada fue 101
 y el dato de salida fue "demasiado rapido" y en el caso 3: el 
 dato de entrada fue 100 y el dato de salida fue "detenido". Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"*/


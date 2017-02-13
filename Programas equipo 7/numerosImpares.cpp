/*
Autor:Diego Leonardo Mis Aguilar 31/Enero/17
Entradas: contador (int)
Salidas: numImpar (int)
Procedimiento general: Se ejecuta un ciclo for
para calcular los numeros impares que se existen
entre 0 y 10, se hace la suma de estos para despues
ser imprimirlo.
*/

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	/*Entradas
	Se declaran las variables que serviran para
	el ciclo for y para amacenar la suma*/
	int numImpar=0;
	int contador=0;
	/*Procedimiento
	Se crea un ciclo for para encontrar los numeros
	impares que existen entre 0 y 10, para hacerlo
	se determina el modulo de la division del valor
	del acumulador entre 2, si es diferente de 0 este
	es impar, si se cunple a condicion a continuacion
	se asigna e valor de la suma la variable numImpar*/
	for(contador=0;contador<=10;contador++)
	{
		if(contador%2!=0){
			printf("%d es impar\n",contador);
			numImpar=numImpar+contador;
		}
	}
	/*Salidas*/
	printf("La suma de todos los numeros impares es: %d",numImpar);
	return 0;
}

/*
Bloque de Pruebas
El programa funciona correctamente
En la zona de entradas las variables tienen nombres coherentes respecto a su significado
y en la salida cumple con los requisitos establecidos pues imprime unicamente los numeros impares
con la suma de estos.
El programa lleva una identación y los bloques están bien definidos
Prueba realizada por Martin Alpuche del equipo 2
*/


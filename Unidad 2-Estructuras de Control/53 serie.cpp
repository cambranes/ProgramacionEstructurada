/*
Autor:Gabriel Gongora 30/Enero/17
Entradas:enteros n,i y dobles x, serie, factorial, parcial
Salidas:serie
Procedimiento general:
*/

#include <stdio.h>
#include <math.h>

int main(){
	/* Entrada
	se añaden los valores de las variables*/
	int n, i;
	double x, serie = 1, factorial = 1, parcial; 
	
	printf("Da un valor a n\n");
	scanf("%d", &n);
	
	printf("Ingresa el valor de x\n");
	scanf("%lf", &x);
	/* procedimiento 
	se sacan exponenciales y se resuelve  el resto de la ecuacion y se le suma el numero de serie*/
	for(i=1;i<=n; i++)
	{
		factorial = factorial * i;
		serie = serie + pow(-1, i)*(i*pow(x,i)/factorial);
		
	}
	/* Salida
	se imprime el resultado de la serie */
	printf("%f", serie);
	
	return 0;
	
}
/* QA: Use de entradas 5 y 7 
La salida deberia ser 428.625000 */

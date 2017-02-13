#include <stdio.h>

/*
Autor:Diego Leonardo Mis Aguilar 29/Enero/17
Entradas: valorPresente (float)
Salidas: valorFuturo (float)
Procedimiento general:
Se imprimen las instrucciones para introducir
los valores de inversion, interes y cantidad 
de periodos
Se realiza la formula para determinar el valor
futuro de la inversion
Se imprime el resultado de la formula realizada
*/


int main(int argc, char *argv[]) 
{
	
	/*Entradas
	valorPresente para saber la cantidad invertida inicialmente
	tasaInteres para saber el porcentaje de interes de la inversion
	numPeriodos para saber la cantidad de periodos de la inverison
	*/
	float valorFuturo=0,valorPresente;
	int tasaInteres,numPeriodos,termProg=1;
	
	/*Procedimiento
	Se proporcionan las intrucciones para introduccion
	de los valores de entrada*/
	printf("Introduce el valor de a inversion: ");
	scanf("%f",&valorPresente);
	printf("Introduce el porcentaje de interes: ");
	scanf("%d",&tasaInteres);
	printf("Introduce a cantidad de periodos: ");
	scanf("%d",&numPeriodos);
	printf("\nInversion actual: %.2f\nInteres: %d%%\nPeriodos: %d\n",valorPresente,tasaInteres,numPeriodos);
	
	/*Se realiza la formula para determinar el valor
	final de la incersion*/
	valorFuturo=(valorPresente)*(1+(tasaInteres/100))*(numPeriodos);
	
	/*Salida*/
	printf("El valor futuro es: %.2f",valorFuturo); 
	
	return 0;
}
/* el programa realiza de manera correcta el calculo, probe con valores 10,10,4 y 100, 10, 8 en ese orden
Prueba hecha por Shaid Bojorquez del Equipo 2
*/

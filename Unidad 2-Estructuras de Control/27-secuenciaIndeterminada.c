/*
Autor: Alvar Peniche 28/Enero/18
Leer una secuencia de números no determinada (finalizará la lectura cuando 
el último número sea igual a 999) y calcular la media aritmética.

Entradas: números reales

Salidas:La media aritemtica de todos esos números 

*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int  contador=0;	
	float cantidad, promedio=0;
	
	
	while (1){  /*se abre ciclo infinito*/
		contador= contador + 1;
		
		printf("Inserte el numero %d de la serie:", contador);
		scanf("%f", &cantidad );  /*lee número de la serie*/
				
		promedio= promedio + cantidad; 	/*Se suma el nuevo número a la seria*/
		
		
		if (cantidad==999){
			promedio= promedio/contador; /*se calcula e imprime el promedio*/
			printf("%2f", promedio);
			break;                 /*termina el ciclo infinito*/
		}		
	}
	
	return 0;
}


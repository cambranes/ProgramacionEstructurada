#include <stdio.h>
/*
Autor: César González
Entradas: limite
Salidas: jContador
Procedimiento general:
Leer hasta dónde se va a contar.
Se hace un ciclo que determina los valores que tendrá cada línea.
Dentro del ciclo principal, uno secundario se efectuará por cada iteración del primero.
El ciclo secundario contará desde 1 hasta el valor proporcionado por el primer ciclo.
En cada iteración del segundo ciclo se va a imprimir el valor de su contador.
Terminando el segundo ciclo se hace un salto de línea.
 
QA
Entrada		Salida		Resultado
 
0		S/S		S/S
 
		1		1
3		1 2		1 2
		1 2 3		1 2 3
 
		1		1
		1 2		1 2
5		1 2 3		1 2 3
		1 2 3 4		1 2 3 4
		1 2 3 4 5	1 2 3 4 5
 
*/
int main(int argc, char *argv[]) {
	int iContador, jContador, limite;
	printf("Escribir el número hasta donde se va a contar\n");
	/*Lectura*/
	scanf("%d",&limite);
	if(limite>0){
		/*Ciclo que da el número de línea*/
		for(iContador=1; iContador<=limite;iContador++){
			/*Ciclo que cuenta desde 1 hasta iContador*/
			for(jContador=1;jContador<=iContador;jContador++){
				/*Salidas*/
				printf("%d ",jContador);
			}
			/*Salto de línea*/
			printf("\n");
		}
	}
	return 0;
}

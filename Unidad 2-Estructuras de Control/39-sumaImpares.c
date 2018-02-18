/*
Autor:Zeus Sarmiento 29/Enero/18
Entradas: N/A
Salidas: La suma de los números impares entre 0 y 10
Procedimiento general: mediante un ciclo y un sumador, llevar la cuenta de la suma


*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int sumador=0;
	/*Entradas*/
	
	/*Procedimiento*/
	for(int i=1;i<=9;i=i+2)
	{
		sumador=sumador+i;
	}
	/*Salidas*/
	printf("La suma es %d",sumador);
	return 0;
}

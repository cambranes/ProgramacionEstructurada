/*
Autor:Jose Eduardo Mendez Verdejo 09/Febrero/19
Entradas:num. de clientes, y el total a pagar de cada uno
Salidas: total de cada cliente (algunos con descuento), total en caja y total de descuentos
Procedimiento general: se aplicara un descuento al total de cada cliente dependiento de la cantidad a pagar
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int numero, i = 0;
	printf("Numero de lineas a querer: ");
	scanf("%i",&numero);
	
	int numeros[numero]; //se define el tamanio de la lista
	/*Procedimiento*/
	while(i <= numero)
	{
		numeros[i] = i + 1; //se agrega un nuevo numero a la lista
		
		/*Salidas*/
		for(int j = 0; j < i ; j++)
		{
			printf("%i ",numeros[j]); //impresion de la lista
		}
		printf("\n");
		i = i + 1; 
	}
	
	
	return 0;
}

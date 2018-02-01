#include <stdio.h>
/* 54.Calcular todos los números de tres dígitos tales que la suma de los cubos de
los dígitos es igual al número. 
 */
int main() {
	/* Entradas */
	int numero;
	int auxiliar;
	int centenas;
	int decenas;
	int unidades;
	int sumaDeCubos;
	printf("los numeros de tres digitos tales que la suma de los cubos de los dígitos es igual al numero son:\n");
	for(int numero=100;numero<1000;numero++){
		auxiliar=numero;
		centenas=auxiliar%10;
		auxiliar=auxiliar/10;
		decenas=auxiliar%10;
		auxiliar=auxiliar/10;
		unidades=auxiliar%10;
		sumaDeCubos=(centenas*centenas*centenas)+(decenas*decenas*decenas)+(unidades*unidades*unidades);
		if(sumaDeCubos==numero){
			printf("%i\n",numero);
		}
	}
	return 0;
}


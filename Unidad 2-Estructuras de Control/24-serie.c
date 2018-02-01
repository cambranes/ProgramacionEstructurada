#include <stdio.h>
/*
	24.Calcular la suma de los términos de la serie
*/
	
int main() {
	/* entradas*/
	float numero=0;
	float contador;
	float operacion=0;
	float suma=0;
	float denominador=1;
	/* salidas */
	float resultado=0;
	printf("ingrese un numero ");
	scanf("%f",&numero);
	for(float contador=1;contador<=numero;contador++) {
		denominador=denominador*2;
		operacion=contador/denominador;
		suma=suma+operacion;
	}
	resultado=suma;
	printf("el resulatdo es %f",suma);
	return 0;
}


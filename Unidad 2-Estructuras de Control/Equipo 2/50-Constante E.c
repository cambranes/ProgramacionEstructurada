#include <stdio.h>
/*
Ejercicio 50
Autor Erick Cardenas
*/
int main()
{
	//se inicializan las variables
	int a, b, facts = 1, fact = 1;
	//se imprime la leyenda y guardan los valores de a
	printf("Escribe un numero para calcular su funcion\n");
	scanf("%d", &a);
	//se obtienen los valores factoriales desde a hasta 1
	for (b = a; b > 1; b--){
		fact = fact * b;
		//facts guarda el valor de los factoriales
		facts = (facts + fact);
	}
	//se imprime el valor de la funcion
	printf("la funcion de %d = 2 + 1 / %d\n", a, facts);
	
	return 0;
}

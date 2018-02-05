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

/*Q\A: el programa esta incorrecto ya que lo que se busca
es el valor de la funcion e con la prescicion n y no
se busca el valor de e^n que es lo que realiza el 
programa y este no arroja un resultado directo y una
respuesta correcta caso 1: el dato de entrada es 3 
el dato de salida es "la funcion de 3 = 2 + 1 / 10"
y en el caso 2: el dato de entrada es 6 y el dato de
salida es "la funcion de 6 = 2 + 1 / 1237" Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"*/

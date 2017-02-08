/*Autor:Luis Gerardo Vázquez Vera 28/01/17
Entradas:cantidad_De_Numeros, numero
Salidas:impresion
Procedimiento general:
pedir la cantidad total de numeros a proporcionar
leer cada numero y compararlos para determinar que numero es
 mayor y cual el menor de los numeros proporcionados*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int contador1, cantidad_De_Numeros, numero, mayor=0, menor=0;
	/*entrada*/
	printf("introduzca la cantidad total de numeros que desea introducir:");
	scanf("%d", &cantidad_De_Numeros);
	/*procedimiento*/
	for(contador1=1; contador1<=cantidad_De_Numeros; contador1++)
	{
		printf("introdusca el numero %d:", contador1);
		scanf("%d", &numero);
		if(contador1<=1)
		{
			menor=numero;
			mayor=numero;
		}
		/*la siguiente comparacion se hace para que por cada numero ingresado se
		comparen con el ultimo mayor y ultimo menor y asi ir realizando los cambios*/
		if(numero>mayor)
		{
			mayor=numero;
		}
		if (numero<menor)
		{
			menor=numero;
		}
	}
	/*salida*/
	printf ("%d es el numero mayor\n", mayor);
	printf ("%d es el numero menor", menor);
	return 0;
}
/*Testing
Tester: Ignacio Pananá 31/01/17

Nombrado de variables: correcto
Indentación de bloques: correcto
Definición de bloques: correcto

Funcionamiento del programa:
Entrada "3" Entrada "2" "8" "1"
	Salida "8 es el numero mayor"	"1 es el numero menor"
Entrada "4" Entrada "1" "-5" "-8" "0"
	Salida "1 es el numero mayor"	"-8 es el numero menor"
Entrada "3" Entrada "-4" "-6" "-1"
Salida "0 es el numero mayor"	"-6 es el numero menor"

El programa no puede determinar el número mayor de un conjunto
de números negativos debido a que "mayor" está inicializada en 0
PD: Introduzca no se escribe con S. Debido a que está impreso en el programa,
es importante*/

/* Autor: Elena Soledad Medina Favela

Entradas: numero(Variable que almacena momentaneamente los valores de los numeros que se van a ingresar).

Salidas: positivo(Variable que almacena el numero de valores positivos ingresados).
		 negativo(Variable que almacena el numero de valores negativos ingresados).

Procedimiento General: El usuario ingresa n cantidad de numeros para determinar cuantos de ellos
son positivos y cuantos son negativos. El programa dejara de leer numeros hasta que el usuario 
ingrese el nuemro 0.

QA Francisco Jesus Mac Cetzal 01/02/2018 08:30 pm
Entradas....../.Salidas.................../.Resultado
1,3,-2,3,0..../.3 positivos 1 negativo..../no ejecuta lectura
-2,-3,-8,-3,0./.4 Negativos.............../no ejecuta lectura
8,2,9,3,0...../.4 Positivos.............../no ejecuta lectura
0............./.no se anoto ningun numero./no ejecuta lectura
-1,0........../.1 Negativo................/no ejecuta lectura
Notas.- no se puso una condicion de entrada para realizar la lectura de los numeros
		intentar con un valor distinto de entrada o un ciclo Do While.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Entrada*/
	int positivo = 0, negativo = 0;
	float numero;
	
	/*Procedimiento*/
	while(numero != 0){
		
		printf("Ingrese un numero: ");
		scanf("%f", &numero);
		
		if(numero > 0){
			positivo = positivo + 1;
		}
		else 
			if (numero < 0){
				negativo = negativo + 1;
			}
	}
	
	/*Salida*/
	printf("Se ingresaron %d numeros positivos \n", positivo);
	printf("Se ingresaron %d numeros negativos", negativo);
	return 0;
}


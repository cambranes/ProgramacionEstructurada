/*
Autor:Francisco Jesus Mac Cetzal 30/Enero/18
Entradas: dos numeroros y un operador
Salidas: el resultado dependiendo a que operacion se quiera realizar
Procedimiento general: Escribir y ejecutar un programa que simule una calculadora simple. Lee dos
enteros y un carácter. Si el carácter es un +, se imprime la suma; si es un -,
se imprime la diferencia; si es un * se imrpime el producto; si es un /, se
imprime el cociente; y si es un % se imprime el resto.

Victor Ortiz Garcia 01/02/18
Entradas|Salidas|Resultado
5, +, 15|  20   |    +     
50, /, 5|  10   |    +      
65 - 32 |  33   |    +
70*12   | 840   |    +
*/

#include <stdio.h>

int main() {
	int number1 = 0;
	int number2 = 0;
	char operation;
	int total = 0;
	int error = 0;
	/*Entradas*/
	printf("%s", "ingrese el primer numero		");
	scanf("%d", &number1);
	printf("%s", "ingrese la operacion		");
	scanf(" %c", &operation);
	printf("%s", "ingrese el segundo numero		");
	scanf("%d", &number2);
	/*Procesos*/
	if(operation=='+'){
		total = number1 + number2;
	} else{
		if(operation=='-'){
			total = number1 - number2;
		} else{
			if(operation=='*'||operation=='x'){
				total = number1 * number2;
			} else{
				if(number2==0){
					error = 1;
				} else{
					if(operation=='/'){
						total = number1 / number2;
					} else{
						if(operation=='%'){
							total = number1%number2;
						};
					};
				}
			};
		};
	};
	/*Salida*/
	if(error==1){
		printf("%s", "No se puede dividir entre 0 \n");
	} else{
		printf("El resultado es: %i", total );	
	};
	return 0;
}

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

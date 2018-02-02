/* Autor: Elena Soledad Medina Favela

Entradas: numero1, numero2, numero3(Variables que almacenan los valores que van a ser comparados).

Salidas: mayor(Variable que almacena el numero mayor).

Procedimiento General: El usuario ingresa 3 numeros, los cuales seras comparados por medio de 
una serie de condicionales if para determinar cual de los 3 es el mayor. Al final del proceso 
se imprime un mensaje indicando cual es el mayor*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Entrada*/
	float numero1, numero2, numero3, mayor;
	
	printf("Ingrese 3 numeros para determinar cual es el mayor\n");
	scanf("%f %f %f", &numero1, &numero2, &numero3);
	
	/*Procedimiento*/
	if (numero1 > numero2){
		if (numero1 > numero3){
			mayor = numero1;
		}
		else{
			if (numero3 > numero2){
				mayor = numero3;
			}
			else{
				mayor = numero2;
			}
		}
	}
	else{
		if (numero1 < numero3){
			if (numero3 > numero2){
				mayor = numero3;
			}
			else{
				mayor = numero2;
			}
		}
		else{
			if(numero2 > numero3){
				mayor = numero2;
			}
			else{
				mayor = numero3;
			}
		}
	}
	
	/*Salida*/
	printf("El numero mayor es: %f", mayor);
	return 0;
}


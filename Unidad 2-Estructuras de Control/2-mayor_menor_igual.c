/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas:num1, num2 (int)
Salidas:mayor, menor, iguales(int)
Procedimiento general: Se utiliza dos comparaciones que 
imprime si el numero es mayor, menor o si son iguales.
*/
/*QA comentario prueba*/
/*El nombramiento de las variables esta segun el estandar de codificacion proporcionado.
El programa cumple con los requerimientos indicados y se evaluo con una serie de valores 
y el resultado siempre fue correcto*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*
	mayor,  menor, iguales
	num1 y num2 variablea de entrada
	*/
	int num1, num2, mayor, menor, iguales;
	printf("introdusca el primer numero\n");
	scanf("%d", &num1);
	printf("introduzca el segundo numero\n");
	scanf("%d",&num2);
	/*
	utilizando dos sentencias if  else anidadas comparamos ambos terminos
	*/
	/*Salidas*/
	if(num1>num2){
		mayor = num1;
		menor = num2;
		printf("el numero mayor es %d y el menor es %d", mayor, menor);
	}
	/*Salidas*/
	else if(num2>num1){
		mayor = num2;
		menor = num1;
		printf("el numero mayor es %d y el menor es %d", mayor, menor);
	}
	else{
		/*Salidas*/
		iguales=num1;
	
		printf("Los dos numeros son iguales a %d", iguales);
		
	}
	return 0;
}


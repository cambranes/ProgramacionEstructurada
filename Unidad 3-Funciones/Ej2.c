/*
	Autor: Carlos Chan Gongora 12/02/2019
	Entradas: Dos numeros enteros.
	Salidas: El mayor y menor de los numeros o si son iguales imprime "Son iguales".
	Procedimiento general: Compara ambos numeros para encontrar al mayor y menor o de lo contrario
	imprimir que son iguales.
*/
#include <stdio.h>

int entrada();
void salida(int, int);
int calcularMayor(int, int);
int calcularMenor(int, int);


int main(){
	// Entradas
	int numero1, numero2, numMayor, numMenor;

	numero1 = entrada();
	numero2 = entrada();

	// Proceso
	numMayor = calcularMayor(numero1, numero2);
	numMenor = calcularMenor(numero1, numero2);

	// Salida
	salida(numMayor, numMenor);

	return 0;
}
// Lee un numero
int entrada(){
	int num;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	return num;
}
// Calcula cual es el mayor de dos numeros
int calcularMayor(int num1, int num2){
	int mayor;
	if(num1 > num2){
		mayor = num1;
	}
	else{
		mayor = num2;
	}
	return mayor;
}
// Calcula cual es el menor de dos numeros
int calcularMenor(int num1, int num2){
	int menor;
	if(num1 < num2){
		menor = num1;
	}
	else{
		menor = num2;
	}
	return menor;
}
// Verifica que si los numeros son distintos imprime el mayor y menor o
// de lo contrario imprime que son iguales.
void salida(int mayor, int menor){
	if(mayor != menor){
		printf("El mayor es: %d\nEl menor es: %d\n", mayor, menor);
	}
	else{
		printf("Los numeros son iguales");
	}
}
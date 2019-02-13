/*
	Autor: Carlos Chan Gongora 13/02/2019
	Entradas: Un numero entero positivo mayor a cero.
	Salidas: La sumatoria de los numeros hasta el valor ingresado.
	Procedimiento general: Lee un numero y valida que sea mayor a cero o de lo contrario
	solicita de nuevo el numero, tras validarlo mediante un for suma los numeros de 1 hasta
	el numero ingresado y lo imprime.
*/
#include <stdio.h>

int entrada();
int validarNumero(int);
int sumar(int);
void imprimir(int, int);

int main(){
	// Entradas
	int n, resultado;
	do{
		n = entrada();
	}while(!validarNumero(n));

	// Proceso
	resultado = sumar(n);

	// Salidas
	imprimir(n, resultado);

	return 0;
}
// Lee un numero 
int entrada(){
	int numero = 1;
	printf("Ingrese un numero entero mayor a cero: ");
	scanf("%d", &numero);
	return numero;
}
// Valida que el numero ingresado sea mayor a cero, devuelve 1 si es mayor y 0 si es menor.
int validarNumero(int num){
	int validar = 0;
	if(num > 0){
		validar = 1;
	}
	else{
		validar = 0;
	}
	return validar;
}
// Suma los numeros de 1 hasta el numero ingresado
int sumar(int num){
	int sumatoria = 0;
	for(int i = 1; i <= num; i++){
		sumatoria += i;
	}
	return sumatoria;
}
// Imprime los resultados
void imprimir(int num, int resultado){
	printf("El valor de la sumatoria de 1 hasta %d es: %d", num, resultado);
}
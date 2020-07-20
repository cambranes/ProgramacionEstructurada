#include <stdio.h>
/* EJERCICIO 30
Calcular el MCD de dos Números enteros
Autor: Audny Desireé Correa Ceballos
Equipo: (´about : blank¨)
*/

//PARAMETROS
void leerPrimerNumero(int *);
void leerSegundoNumero(int *);
int definirNumeroMayor(int, int);
int definirNumeroMenor(int, int);
int calcularMCD(int, int);
void imprimirSalidas(int );

int main(){
	int num1, num2, nMayor, nMenor, MCD;
	
	//Entradas
	leerPrimerNumero(&num1);
	leerSegundoNumero(&num2);
	//Proceso
	nMayor = definirNumeroMayor(num1, num2);
	nMenor = definirNumeroMenor(num1, num2);
	MCD = calcularMCD(nMayor, nMenor);
	//Salidas
	imprimirSalidas(MCD);
	
	return 0;
}

//Leer el primer numero
void leerPrimerNumero(int*num1){
	scanf("%d", num1);
	
}
//leer el segundo numero
void leerSegundoNumero(int* num2){
	scanf("%d", num2);
}

//Establecer el numero mayor para poder realizar la división y no obtener decimales
int definirNumeroMayor(int num1,int num2){
	if (num1 > num2){
		return num1;
	}else{
		return num2;
	}
}

//Establecer el numero menor
int definirNumeroMenor(int num1,int num2){
	if (num1 < num2){
		return num1;
	}else{
		return num2;
	}
}

//dividir el numero mayor entre el menor y obtener el módulo, este se convertirá en el nuevo numero menor y se calculará de nuevo hasta que 
//el moduo de 0 el numero menor que logre dar modulo 0 es el MCD
int calcularMCD(int nMayor, int nMenor){
	int aux = 0;
	aux = nMayor % nMenor;
	while(aux > 0){
		nMayor = nMenor;
		nMenor = aux;
		aux = nMayor % nMenor;
	}
	return nMenor;
}

//Imprimir Salidas
void imprimirSalidas(MCD){
	printf("%d", MCD);
}

#include <stdio.h>
/*
EJERCICIO 18
Realizar una calculador b�sica, recibe 2 n�meos y un si�mbolo y raliza la operaci�n
+ es suma de los n�meros
- es resta de los n�meros
* es producto de los n�meros
/ es divisi�n de los n�meros
% es el modulo de los n�meros
AUTOR : Audny Desire� Correa Ceballos
Equipo '(about : blank)'
*/

//PROTOTIPOS
void leerPrimerNumero(int* );
void leerOperador(char* );
void leerSegundoNumero(int* );
int realizarCalculo(int, char, int);
void imprimirSalidas(int );

int main(){
	int num1, num2, respuesta;
	char operador;
	// ENTRADAS
	leerPrimerNumero(&num1);
	leerOperador(&operador);
	leerSegundoNumero(&num2);
	//PROCESO
	respuesta = realizarCalculo(num1, operador, num2);
	//SALIDAS
	imprimirSalidas(respuesta);
	
	return 0;
}

//Leer el primer numero 
void leerPrimerNumero(int* num1){
	scanf("%d", num1);
}

//Leer el operador
void leerOperador(char* operador){
	scanf("%s", operador);
}

//Leer el segundo Numero
void leerSegundoNumero(int* num2){
	scanf("%d", num2);
}

//Se buscar� que operador es hasta encontrarlo y se realizar� la operaci�n correspondiente
int realizarCalculo(int num1, char operador, int num2){
	int resultado;
	if(operador == '+'){
		resultado = num1 + num2;	
	}
	else if(operador == '-'){
		resultado = num1 - num2;
	}
	else if(operador== '*'){
		resultado = num1 * num2;
	}
	else if (operador == '/'){
		resultado = num1 / num2;
	}
	else if (operador == '%'){
		resultado = num1 % num2;
	}
	
	return resultado;
}

//Imprimir el resultado de la operaci�n
void imprimirSalidas(respuesta){
	printf("%d", respuesta);
}

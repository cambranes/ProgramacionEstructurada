#include <stdio.h>
/*
EJERCICIO 18
Realizar una calculador básica, recibe 2 númeos y un siímbolo y raliza la operación
+ es suma de los números
- es resta de los números
* es producto de los números
/ es división de los números
% es el modulo de los números
AUTOR : Audny Desireé Correa Ceballos
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

//Se buscará que operador es hasta encontrarlo y se realizará la operación correspondiente
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

//Imprimir el resultado de la operación
void imprimirSalidas(respuesta){
	printf("%d", respuesta);
}

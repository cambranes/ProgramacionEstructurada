/*
Mario Chan Zurita 
Datos de entrada: Valor de N
Datos de salida: Resultado de la suma de los primeros N numeros pares
Problema: Determinar la suma de los primeros N numero pares
*/

#include <stdio.h>

//PROTOTIPOS
int entrada();
int sumaNPares(int N);
int salida(int suma);

//MAIN
int main(int argc, char** argv) {
	
	int numero;
	int resultado;
	int imprimir;
	
	numero = entrada();
	
	resultado = sumaNPares(numero);

	imprimir = salida(resultado);
	
	return 0;
}

//FUNCIONES
//Obtiene el valor de N(entrada)
int entrada(){
	int N;
	scanf("%d",&N);
	return N;
}
//Se hace la busqueda de los pares para posteriormente sumarlos
int sumaNPares(int N){
	int suma=0;
	for(int i=0; i<=2*N; i+=2){
		suma+=i;
	}
	return suma;
}
//Imprime el resultado de la suma(salida)
int salida(int suma){
	printf("%d", suma);
}
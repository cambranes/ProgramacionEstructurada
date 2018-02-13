#include <stdio.h>
/*
Ejercicio 44
Autor Erick Cardenas
Algoritmo para buscar el MCD mediante el algoritmo de Euclides
*/

int Rnumero1();
int Rnumero2();
void Euclides(int,int);
int Mayor(int,int);
int Menor(int,int);
int main(int argc, char *argv[]) {
	//se inicializan las variables a utilizar
	int numero1=Rnumero1(),numero2=Rnumero2();
	//se llama la funcion Euclides
	Euclides(numero1,numero2);
	return 0;
}
int Rnumero1(){
	int numero1;
	//se pregunta y almacena el numero A
	printf("Introduzca el numero A \n");
	scanf ("%d",&numero1);
	//se valida que no sean entradas negativas 
	if(numero1<0){
		printf("error el numero no puede ser negativo");
		do{
			printf("Introduzca el numero A \n");
			scanf ("%d",&numero1);
		}
		while(numero1<0);
	}
	;
	return numero1;
}
int Rnumero2(){
	//inicializacion de variable
	int numero2=0;
	//Se pregunta y almacena el valor B
	printf("Introduzca el numero B \n");
	scanf ("%d",&numero2);
	if(numero2<0){
		printf("error el numero no puede ser negativo");
		do{
			printf("Introduzca el numero A \n");
			scanf ("%d",&numero2);
		}
		while(numero2<0);
	}
return numero2;
}
void Euclides(int numero1,int numero2){
	int mayor=Mayor(numero1,numero2),menor=Menor(numero1,numero2);
	int aux;
	//algoritmo de euclides
	do {
		aux = menor;
		menor = mayor%menor;
		mayor = aux;
	}while (menor!=0);
	//impresion del MCD
	printf("El maximo comun divisor es %d",mayor);
}
//condiciones para saber que numero es mayor
int Mayor(int numero1,int numero2){
	int mayor=0;
	if (numero1>numero2){
		mayor=numero1;
	}
	else{
			mayor=numero2;
		}
	
	return mayor;
}
int Menor(int numero1,int numero2){
	int menor=0;
	if (numero1<numero2){
		menor=numero1;
	}
	else{
			menor=numero2;
		}
	
	return menor;
}

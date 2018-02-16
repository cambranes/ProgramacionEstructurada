/*La tangente(x) puede ser representada como el cociente de
seno(x)/coseno(x), utiliza las series de aproximación de seno(x) y coseno(x)
para aproximar el valor de tangente(x) (ver ejercicio 20 y 21). El programa
leerá el valor de X y la diferencia de precisión dif (ambos flotantes). El
programa calculará tanto términos en la serie como sea necesario. Cuando
la diferencia entre el acumulado de la serie y el acumulado con un término
más sea menor o igual que la diferencia (dif) el algoritmo imprimirá el
resultado.
Autor: Esteban Abraham Madrazo Parra
 Entradas
	numero
	presicion
 salidas
	resultado
*/
#include <stdio.h>
void lectura(float *);
double cos(float,float);
double sen(float,float);
double tan(float,float);
double factorial(int);
double potencia(int,int);
void imprimir(double);
int main() {
	float numero, presicion;
	double resultado;
	lectura(&numero);
	lectura(&presicion);
	resultado=tan(numero,presicion);
	imprimir(resultado);
	return 0;
}
/* 
Funcion para la lectura de variables
@param variable
*/
void lectura(float* variable){
	scanf("%f",variable);
}
/*
Funcion para el factorial
@param numero
@return fac; el factorial
*/
double factorial(int numero){
	int i;
	double fac=1;
	for(i=1; i<=numero; i++){
		fac=fac*i;
	}
	return fac;
}
/*
Funcion para la potencia
@param base, exponente
@return numero; la potencia
*/
double potencia(int base,int exponente){
	int i;
	double numero=1;
	for(i=1;i<=exponente;i++){
		numero=numero*base;
	}
	return numero;
}
/*
Funcion para el coseno
@param numero, presicion
@return operacion; el coseno
*/
double cos(float numero,float presicion){
	int i=0, signo=1;
	double operacion=1, dif=1;
	while(dif>presicion){
		i=i+2;
		signo=signo*(-1);
		dif=(potencia(numero,i)/factorial(i));
		operacion=operacion+(dif*signo);
		
	}
	return operacion;
}
/*
Funcion para en seno
@param numero, presicion
@return operacion; el seno
*/
double sen(float numero,float presicion){
	int i=-1, signo=-1;
	double operacion=0, dif=1;
	while(dif>presicion){
		i=i+2;
		signo=signo*(-1);
		dif=(potencia(numero,i)/factorial(i));
		operacion=operacion+(dif*signo);
	}
	return operacion;
}
/*
Funcion para la tangente
@param numero, presicion
@return operacion; la tangente
*/
double tan(float numero,float presicion){
	double operacion=0;
	operacion=(sen(numero,presicion))/(cos(numero,presicion));
	
	return operacion;
}
/*
Funcion para imprimir
@param valor
*/
void imprimir(double valor){
	printf("El resultado es: %f\n", valor);
}

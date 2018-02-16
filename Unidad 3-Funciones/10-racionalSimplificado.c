/*
Autor: César Alejandro González Ortega
Entradas: int numerador, int denominador
Salidas: int retorno
Procedimiento general:
Se analiza si los valores ingresados tienen divisores en común distintos a 1.
Si está racionalizado, el retorno es 1; si no, es 0.
*/
#include <stdio.h>
void leer(int*,int*);
int estaSimplificada(int,int);
void imprimir(int);
int main(int argc, char *argv[]) {
	int numerador=0,denominador=0,noSi;
	leer(&numerador,&denominador);
	noSi=estaSimplificada(numerador,denominador);
	imprimir(noSi);
	return 0;
}
/*
Se leen los valores ingresados hasta que ambos sean mayores a 0
@param: int*numerador, int*denominador
@return:
*/
void leer(int*numerador,int*denominador){
	do{
		printf("Los valores ingresados deben ser enteros positivos\nIngresar numerador\n");
		scanf("%d",numerador);
		printf("Ingresar valor del denominador\n");
		scanf("%d",denominador);
	} while(*numerador<0 && *denominador<0);
}
/*
Se analiza si tienen divisores en común mediante el uso de módulos.
Se descompone el valor de denominador hasta que valga 1.
Se usa un do-while que sale cuando se encuentra un divisor común
o cuando la variable denominador valga 1
@param: int numerador, int denominador
@return: int noSi
*/
int estaSimplificada(int numerador, int denominador){
	int noSi=1,i=1;
	do{
		i++;
		if(denominador%i==0){
			denominador=denominador/i;
			noSi=numerador%i!=0;
			i=i-1;
		}
	} while(noSi==1 && denominador!=1);
	return noSi;
}
/*
Se imprime el valor de 1 ó 0 dependiendo si está racionalizado o no.
@param: int retorno
@return:
*/
void imprimir(int retorno){
	printf("Retorno: %d",retorno);
}

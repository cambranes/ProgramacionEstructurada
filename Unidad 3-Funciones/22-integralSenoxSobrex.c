/*
Autor: César Alejandro González Ortega
Entradas: float x, float diferenciaDePrecision
Salidas: float resultadoDeLaIntegral
Procedimiento general: Se lee el valor de x y la diferencia de precisión.
Se aplica la fórmula hasta que la diferencia entre un resultado y otro
sea menor a la diferencia de precisión ingresada.
Posteriormente se imprime el resultado obtenido.

Notas del programador: Se le tuvieron que hacer modificaciones a la fórmula
para escribir una que se pueda programar sin usar bibliotecas externas y
respetando las leyes de integración. 
A continuación se dará una descripción de los cambios hechos:
La integral de una sumatoria es igual a la sumatoria de las integrales.
La integral del producto de una constante por una variable es igual al
producto de la constante por la integral de la variable.
Las leyes anteriores demuestran que la fórmula dada en el ejercicio es igual a
la sumatoria desde n=0 hasta infinito del producto de [(-1)^n]/(2n+1)! con
la integral de x^(2n)*dx
Después, la integral de una variable x a una potencia a por su diferencial es
igual a {[x^(a+1)]/(a+1)}+c
Sustituyendo a=2n, tenemos que la integral de x^(2n) es igual a 
{[x^(2n+1)]/(2n+1)}+c
De tal manera que la fórmula puede ser sustituida por la siguiente:
Sumatoria desde n=0 hasta infinito del producto de [(-1)^n]/(2n+1)! con
[x^(2n+1)]/(2n+1), +c
Nota: Únicamente hay una c por motivos de simplificación, la cual se dejará
sin valor numérico debido a que el programa no la pide
*/
#include <stdio.h>
void lectura(float*,float*);
float sumatoria(float,float);
void impresion(float);
int main(int argc, char *argv[]) {
	float x=0,diferenciaDePrecision=0,resultado;
	lectura(&x,&diferenciaDePrecision);
	resultado=sumatoria(x,diferenciaDePrecision);
	impresion(resultado);
	return 0;
}
/*

@param: float*equis, float*dif
@return:
*/
void lectura(float*equis,float*dif){
	printf("Ingresar el valor de x\n");
	scanf("%f",equis);
	printf("Ingresar el valor de la diferencia de precisión\n");
	scanf("%f",dif);
}
/*
Tomando en cuenta que para cualquier valor de x, el primer resultado siempre
valdrá x, se inicializa la variable resultadoActual con tal valor.
En un ciclo do-while se asigna el valor de resultadoActual a la variable
resultadoAnterior antes de que el primero cambie al efectuar la fórmula.
Finalizará hasta que la diferencia de los 2 resultados sea menor a la 
diferencia de precisión y mayor a 0
Al salir del ciclo se devuelve al main el valor obtenido
@param: float equis, float dif
@return: float resultadoActual
*/
float sumatoria(float equis, float dif){
	float resultadoActual=equis,resultadoAnterior,factorialDosNMasUno=1,n=0,numerador=equis,equiscuadrada=equis*equis;
	do{
		resultadoAnterior=resultadoActual;
		n++;
		numerador=equiscuadrada*(-1);
		factorialDosNMasUno=factorialDosNMasUno*(2*n)*(2*n+1);
		resultadoActual=resultadoActual+numerador/(factorialDosNMasUno*(2*n+1));
	} while((resultadoActual-resultadoAnterior<=dif && resultadoActual-resultadoAnterior>0) || (resultadoAnterior-resultadoActual<=dif && resultadoAnterior-resultadoActual>0));
	return resultadoActual;
}
/*
Se imprime el resultado obtenido
@param: float result
@return:
*/
void impresion(float result){
	printf("El resultado de la integral es %f +c",result);
}

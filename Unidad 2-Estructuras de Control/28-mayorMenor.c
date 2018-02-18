/*
Autor: César González
Entradas: lecturas, leer
Salidas: mayor, menor
Procedimiento general:
Se lee el primer valor ingresado.
Se iguala el valor mayor y el menor con el primero ingresado.
Por cada lectura posterior se analiza si es el mayor o menor valor
hasta ese entonces (de los ingresados).
*/
#include <stdio.h>
void primeraLectura(float*,float*,float*);
void siguientesLecturas(float*,float*,float*);
void imprimir(float, float);
int main(int argc, char *argv[]) {
	float lecturas=0,mayorValor=0,menorValor=0;
	primeraLectura(&lecturas,&mayorValor,&menorValor);
	siguientesLecturas(&lecturas,&mayorValor,&menorValor);
	imprimir(mayorValor,menorValor);
	return 0;
}
/*
Se lee por primera vez un valor e igualamos las variables de mayorValor
y menorValor con sus apuntadores
@param:float *leer, float *mayor, float *menor
@return:
*/
void primeraLectura(float *leer,float *mayor,float *menor){
	printf("Ingresar un valor\n");
	scanf("%f",leer);
	*mayor=*leer;
	*menor=*leer;
}
/*
Se analiza si el valor guardado en leer es diferente a 999
para que entre al ciclo. Adentro, se compara si es mayor que el mayor anterior,
y se sustituye si es el caso. También se compara con el menor.
Antes de salir del ciclo se lee otro valor para comparar.
@param: float *leer, float *mayor, float *menor
@return:
*/
void siguientesLecturas(float* leer,float* mayor,float* menor){
	while(*leer!=999){
		if(*leer>*mayor)
			*mayor=*leer;
		if(*leer<*menor)
			*menor=*leer;
		printf("Ingresar un valor\n");
		scanf("%f",leer);
	}
}
/*
Imprime los valores obtenidos de mayor y menor
@param: float mayor, float menor
@return:
*/
void imprimir(float mayor,float menor){
	printf("El mayor de los valores ingresados fue %f, y el menor %f",mayor,menor);
}

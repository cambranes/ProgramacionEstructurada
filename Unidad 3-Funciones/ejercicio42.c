#include <stdio.h>
#include <math.h>

/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas: Numero
Salidas: EL numero y su raiz
Procedimiento: Calcular la raiz de cada uno de los 100 primeros numeros naturales
*/

float proceso(int);
void salida(int,float);

int main() {
int numero = 1;
float raiz;
while(numero <= 100){

	raiz = proceso(numero);
	salida(numero,raiz);
	numero++; //se incrementa en 1 el numero
	}


}

float proceso(int numero){
	float raiz;
	raiz = sqrt(numero); // se calcula la raiz del numero
	return raiz;
}

void salida(int numero, float raiz){
	printf("Numero: %i   Raiz: %.2f \n",numero,raiz);

}

/*
QA: Raul Rivadeneyra

proceso():
Saca correctamente la raiz del numero

salida():
Imprime correctamente el resultado

Prueba integral: Imprime correctamente todas las primeras 100 raices

Observacion: No estoy seguro si era permitido el uso de librerias en los ejercicios, pero no diré nada ;)

Arreglar nombrado del ejercicio
*/

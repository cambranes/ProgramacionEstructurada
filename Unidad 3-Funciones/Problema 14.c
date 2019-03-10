*
Autor: Daniel Eduardo Gutiérrez Delfín
Problema:Escribir el programa que lea una velocidad e imprima “Muy rápido” si es
superior a 100, si no imprima “Detenido” si la velocidad es cero
Entrada: La velocidad (Velocidad)
Salida: Muy rapido o Detenido dependiendo la velocidad
Proceso: Se introduce la velocidad, vemos si es mayor a 100 o igual a 0, dependiendo de eso la variable "resultado" tomara un valor
	     para que mediante otro if se proyecte el resultado
*/
#include <stdio.h>

void valor(int velocidad);
//entrada//
int main() {
	int velocidad;
	printf("Ingrese la velocidad \n");
	scanf("%d", &velocidad);
	valor(velocidad);
	return 0;
}
//Proceso & Salida//
void valor(int velocidad) {
	if (velocidad > 100) {
		printf("Muy rapido!\n");
	} else if (velocidad == 0) {
		printf("Detenido\n");
	}
}


/*
	QA Reviso: Carlos Chan
	- No compila.
	- El prototipo de funcion void al inicio esta mal hecho
	- Hay codigo fuera del main
	- Debe ser con funciones.
	
	Corregido
*/

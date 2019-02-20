#include <stdio.h>

void valor(int velocidad);

int main() {
	int velocidad;
	printf("Ingrese la velocidad \n");
	scanf("%d", &velocidad);
	valor(velocidad);
	return 0;
}

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

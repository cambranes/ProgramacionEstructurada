/*
Autor: Daniel Eduardo Gutiérrez Delfín
Problema:Escribir el programa que lea una velocidad e imprima “Muy rápido” si es
superior a 100, si no imprima “Detenido” si la velocidad es cero
Entrada: La velocidad (Velocidad)
Salida: Muy rapido o Detenido dependiendo la velocidad
Proceso: Se introduce la velocidad, vemos si es mayor a 100 o igual a 0, dependiendo de eso la variable "resultado" tomara un valor
	     para que mediante otro if se proyecte el resultado
*/
#include <stdio.h>

//Main//
void ( int Velocidad, int resultado);
	
	//Entrada//
	int main(){
	printf("\nIntroduce la velocidad\n");
	scanf("%i",&Velocidad);
	return 0;
	}
	
	//Proceso//
	if (Velocidad>100){
		resultado=1;
	}else if (Velocidad==0){
		resultado=0;
	}

	//Salida//
	if(resultado==1){
		printf("Muy rapido");
	}else if (resultado==0){
		printf("Detenido");
	}
	return 0;
}
/*
	QA Reviso: Carlos Chan
	- No compila.
	- El prototipo de funcion void al inicio esta mal hecho
	- Hay codigo fuera del main
	- Debe ser con funciones.
*/

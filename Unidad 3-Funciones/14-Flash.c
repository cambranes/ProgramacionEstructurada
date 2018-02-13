#include <stdio.h>
/*Ejercicio 14
Autor:Carlos Alvarez*/
/*Descripcion general:Algoritmo utilizado para calcular una velocidad e indicar si es muy rapida o esta detenida dada una condicion*/
int Rvelocidad();
void Velocidad(int a);
int main(int argc, char *argv[]) {
	int velocidad=Rvelocidad();
	Velocidad(velocidad);
	return 0;
 }
 int Rvelocidad(){
	int velocidad=0;
	printf("ingrese el valor de la velocidad:\nw");
	scanf("%d",&velocidad);
	return velocidad;
 }
 void Velocidad(int velocidad){
	 if(velocidad>=100)
	 {
		printf("Muy rapido");
	 }
	 else 
	 {
		 printf("Detenido");
	 }
	 }

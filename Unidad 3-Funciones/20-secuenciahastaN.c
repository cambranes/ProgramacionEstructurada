#include <stdio.h>
/*
Ejercicio 20
Autor Jorge Anzures
Programa que lee un numero y ejecuta la suma desde 1 hasta n
*/
int RecibeN();
void Secuencia(int n);
int main(int argc, char *argv[]) {
	int n=RecibeN(); 
	Secuencia(n);
	return 0;
}
int RecibeN(){
	//inicializacion de variables
	int n=0;
	//se imprime la leyenda para indicar que se recibe un caracter
	printf("Introduza el numero maximo para la suma: ");
	//se lee y almacena el caracter
	scanf("%d",&n);
return n;
}
void Secuencia(int n){
	//inicializacion de variables
	int suma=0;
	//Inicio de for con 0 como inicial y n como final
	for(int i=0;i<=n;i++){
		//se almacena el valor de la suma de n+suma
		suma=suma+i;
	}
	//se imprime la leyenda y el reultado
	printf("El resultado de la suma de secuencia hasta %d es\n %d",n,suma);
}

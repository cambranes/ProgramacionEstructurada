#include <stdio.h>
/*
Ejercicio 20
Autor Jorge Anzures
*/
int main(int argc, char *argv[]) {
	//declaracion e inicializacion de las variables n (numero hasta el cual se sumara) y suma(lugar donde de almacena la suma para no perder n)
	int n=0;
	int suma=0;
	//se imprime la leyenda para indicar que se recibe un caracter
	printf("Introduza el numero maximo para la suma: ");
	//se lee y almacena el caracter
	scanf("%d",&n);
	//Inicio de for con 0 como inicial y n como final
	for(int i=0;i<=n;i++){
		//se almacena el valor de la suma de n+suma
		suma=suma+i;
	}
	//se imprime la leyenda y el reultado
	printf("El resultado de la secuencia hasta %d %s %d",n,"es :\n",suma);
	
	return 0;
}

/*Q\A: el programa funciona correctamente en el 
caso 1: el dato de entrada fue 10 y el dato 
de salida fue 55 y en el caso 2: el dato de 
entrada fue 100 y el dato de salida fue 5050. Q\A realizado por Carlos Eduardo Avila Criollo(Equipo 5 "dinamita"*/


#include <stdio.h>
/*
Ejercicio 26
Autor Jorge Anzures
*/
void Suma(int);
int RecibeN();
int main(int argc, char *argv[]) {
//inicializacionde n llamando la funcion
int n=RecibeN();
//Se llama la funcion Suma
Suma(n);
	return 0;
}
int RecibeN(){
	//inicializacion de variables
	int n=0;
	//se pregunta el numero hasta el cual sumar los pares
	printf("Numero hasta el cual sumar los pares:\n");
	//se guarda el numero en n
	scanf("%d",&n);
	//se regresa el valor leido de n
	return n;
}
void Suma(int n){
	//Inicializacion de variables
	int suma=0;
	//inicia el for para encontrar los pares(o sea %2=0)
	for(int i=1;i<=n;i++){
		//condicion para saber si son pares
		if(i%2==0){
			suma=suma+i;
		}
	}
	//se imprime la cadena de texto con la suma de los pares
	printf("El resultado de la suma de pares hasta %d es :\n %d",n,suma);
}

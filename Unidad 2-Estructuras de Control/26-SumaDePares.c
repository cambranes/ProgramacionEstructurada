#include <stdio.h>
/*
Ejercicio 26
Autor Jorge Anzures
*/
int main(int argc, char *argv[]) {
	//Inicializacion de variables
	int n=0;
	int suma=0;
	//se pregunta el numero hasta el cual sumar los pares
	printf("Numero hasta el cual sumar los pares:\n");
	//se guarda el numero en n
	scanf("%d",&n);
	//inicia el for para encontrar los pares(o sea %2=0)
	for(int i=1;i<=n;i++){
		//condicion para saber si son pares
		if(i%2==0){
			suma=suma+i;
		}
	}
	//se imprime la cadena de texto con la suma de los pares
	printf("El resultado de la suma de pares hasta %d %s %d",n,"es :\n",suma);
	return 0;
}

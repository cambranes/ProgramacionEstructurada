#include <stdio.h>

int main() {
	int menor = 0, mayor = 0, n = 0, numero = 0, x = 0;
	
	scanf("%d",&n); /*Aquí se da la cantidad de números que se va a evaluar*/
	for (x = 0; x < n; x++){
		/*Aquí se van dando los números a evaluarse*/
		scanf("%d",&numero);
		if (x == 0){
			mayor = numero;
			menor = numero;
		}
		if (numero > mayor){
			mayor = numero;
		}
		else
			if (numero < menor){
				menor = numero;
			}
		
}
printf("%d%", mayor);
printf("%d", menor);
	
}


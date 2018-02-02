/*
Autor: Rodrigo Moguel Gamboa (30/Enero/18 - 9:30 AM)
Entradas: numero
Salidas: paridad
Procedimiento general: Se lee el n�mero, se comprueba que no sea cero por medio
de un while y se saca el modulo 2 del numero para saber si es par o impar,
posteriormente se imprime la paridad del numero.


QA Francisco Jesus Mac Cetzal 01/02/2018 11:30 am
Entradas./.Salidas./.Resultado
...0...../...par.../...Error (El cero es par)
..-3...../..impar../..impar..OK
...5...../..impar../..impar..OK
.76852.../...par.../...par...OK
...9...../..impar../..impar..OK

*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int numero=0, paridad=0;
	/*Procedimiento*/
	printf("Escriba el numero del que desea saber la paridad:\n");
	scanf("%d" ,&numero);
	printf("\n");
	while(numero==0){
		printf("El numero introducido es invalido, proporcione uno distinto:\n");
		scanf("%d" ,&numero);
		printf("\n");
	}
	if(numero%2==0){
		paridad=0;
	}
	else{
		paridad=1;
	}
	/*Salidas*/
	if(paridad==0){
		printf("El numero %d es par." ,numero);
	}
	else{
		printf("El numero %d es impar." ,numero);
	}
	return 0;
}

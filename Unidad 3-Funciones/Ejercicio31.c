/*Autor: Guillermo Canto Dzul
Entradas: Un numero entero
Salidas: Imprime si es primo o no
*/

#include <stdio.h>
int entrada();
int proceso(int n);
void salida(int n, int esPrimo);
int main(int argc, char *argv[]) {
	int n, esPrimo;
	n = entrada();
	esPrimo = proceso(n);
	salida(n, esPrimo);
	return 0;
}
//Lee el numero
int entrada(){
	int n;
	printf("Ingrese un numero:\n");
	scanf("%d", &n );
	return n;
}
//Verifica si el numero es primo o no.
int proceso(int n){
	int suma = 0;
	int i, flag;
	for (i=1; i<n ; i++){
		if (n % i == 0){
			suma = suma + 1;
		}
	}
	if (suma == 1){
		flag = 1;
	}
	else{
		flag = 0;
	}
	return flag;
}
//Imprime el resultado.
void salida(int n, int esPrimo){
	if (esPrimo == 1){
		printf("%d es primo\n", n);
	}
	else{
		printf("%d no es primo\n", n);
	}
}



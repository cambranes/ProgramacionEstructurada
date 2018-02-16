#include <stdio.h>
void leer(int*);
void imprimir(int);
int potencia(int, int);
int factorial(int);
float suma (int,int);
int main(int argc, char *argv[]) {
	int x=0, n=0, p=0, f=0;
	float e=0;
	leer (&x);
	leer (&n);
	e = suma(x, n);
	imprimir (e);
	return 0;
}

void leer(int*variable){
	scanf("%d",variable);
}
/*Todo el proceso sucede en la suma, utilizando el numero a calcular y hasta
que presicion se desea*/
float suma(int base, int limite){
	float exp=1;
	int i=0;
	for (i=1; i<=limite;i++){
		/*Para las funciones de potencia y factorial se tiene que leer un
		limite dado por el contador*/
		exp = exp + (potencia(base, i)/factorial(i));
	}
	return exp;
	/*Se devuelve el exponecial completo*/
}
/*Se calcula la potencia con un limite dado y la base ingresada*/
int potencia(int base1, int lim1){
	int j=0, pont=1;
	for (j=1; j<=lim1; j++){
		pont=pont*base1;
	}
	return pont;
	/*Se devuelve la potencia calculada*/
}
/*Se calcula el factorial de la posición en la que se encuetre el limite*/
int factorial(int lim2){
	int j=0, fact=1;
	for (j=1; j<=lim2; j++){
		fact = fact*j;
	}
	return fact;
	/*Se devuelve el factorial de la posición*/
}

void imprimir(int valor){
	printf("%d", valor);
}

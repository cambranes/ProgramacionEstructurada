/*Autor: Carlos Pool

Procedimiento general: Justo al leer el numero lo almacenamos en una variable auxiliar,
luego mediante un ciclo while se obtendra el numero espejo al numero inicial; finalmente
se compraran ambos numeros y si son iguales por definicion son Palindromos, en caso contrario
no lo seran.

Entradas: El numero a verificar si es palindromo
Salidas: El mensaje que indique si es o no palindromo
*/

#include <stdio.h>
int ciclo(int a);
int comparador(int a, int b);

int main(int argc, char *argv[]) {
	int valorInicial, auxEspejo;
	
	/*Entrada*/
	
	printf("Dime el valor del numero: ");
	scanf("%d",&valorInicial);
	
	/*Procedimiento*/
	
	auxEspejo = ciclo(valorInicial);
	
	comparador(auxEspejo , valorInicial);
	
	printf("Fin de la ejecucion\n");
	
	return 0;
	
}
/*
Funcio ciclo: Mediante esta funcion obtendremos el numero espejo al anteriormente ingresado. 
@param el numero inicial 
@return el espejo del numero inicial (p)
*/
int ciclo(int a){
	int aux, p;
	p=0;
	while(a>0){
		aux = a%10;		a = a / 10;		p = p * 10 + aux;	}
	return p;
}
/*
Funcion comparador: ya una vez con el resultado espejo del numero inicial procedemos a preguntar si son iguales
*/
int comparador(int a, int b){
	if(a==b){
		printf("Es Palindromo\n"); /*Salidas*/
	}else{
		printf("No es Palindromo\n"); /*Salidas*/
	}
	return 0;
}

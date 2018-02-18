/*Sebastian Echeverria Lopez*/
#include <stdio.h>
void leer (int *);
void imprimir (int);
int octal (int);
/*entrada*/
int main(int argc, char *argv[]) {
	int dec, oct=0;
	leer (&dec);
	oct=octal(dec);
	imprimir (oct);
	
	return 0;
}

void leer(int *variable){
	scanf("%d",variable);
}
/*Se recibe el numero que se quiere pasar a octal, para el octal se va 
dividiendo el numero entre 8 y los residuos serán los digitos. Procedimiento*/
int octal(int num){
	int c =1, r=0, res=0;
	for (c=1; num > 7; c=c*10){
		r = num % 8;
		num/=8;
		res = (r*c) + res;
	}
	res = (num*c) + res;
	return res;
	/*Se devuelve el resultado ya en sistema octal*/
}
/*Salida*/
void imprimir(int valor){
	printf("%d\n",valor);
}

#include <stdio.h>
/*
Escribir un programa que reciba un número entero positivo e imprima
como salida el número romano correspondiente.
Autor: Esteban Abraham Madrazo Parra
 Entradas
	Numero
	a
	b
	c
	d
*/
void lectura(int *);
int main() {
	int numero,a,b,c,d;
	lectura(&numero);
	while(numero>9999){
		lectura(&numero);
	}
	d = numero%10;
	numero = numero/10;
	c = numero%10;
	numero = numero/10;
	b = numero%10;
	a = numero/10;
	
	switch (a){
		
	case 1: printf ("M"); break;
	case 2: printf ("MM"); break;
	case 3: printf ("MMM"); break;
	
	default: break;
	}
	switch (b){
		
	case 1: printf ("C"); break;
	case 2: printf ("CC"); break;
	case 3: printf ("CCC"); break;
	case 4: printf ("CD"); break;
	case 5: printf ("D"); break;
	case 6: printf ("DC"); break;
	case 7: printf ("DCC"); break;
	case 8: printf ("DCCC"); break;
	case 9: printf ("CM"); break;
	
	default: break;
	}
	
	switch (c){
		
	case 1: printf ("X"); break;
	case 2: printf ("XX"); break;
	case 3: printf ("XXX"); break;
	case 4: printf ("XL"); break;
	case 5: printf ("L"); break;
	case 6: printf ("LX"); break;
	case 7: printf ("LXX"); break;
	case 8: printf ("LXXX"); break;
	case 9: printf ("XC"); break;
	
	default: break; 
	}
	
	switch (d) {
		
	case 1: printf ("I"); break;
	case 2: printf ("II"); break;
	case 3: printf ("III"); break;
	case 4: printf ("IV"); break;
	case 5: printf ("V"); break;
	case 6: printf ("VI"); break;
	case 7: printf ("VII"); break;
	case 8: printf ("VIII"); break;
	case 9: printf ("IX"); break;
	
	default: break;
	}
	return 0;
}
/*
Funcion para la lectura
@param Variable
*/
void lectura(int* variable){
	scanf("%i",variable);
}

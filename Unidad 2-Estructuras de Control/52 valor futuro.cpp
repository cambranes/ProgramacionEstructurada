/*Autor:Gabriel Gongora 30/Enero/17
Entradas: numero entero P, flotantes n,i,A
Salidas:F = P ( 1 + i / 100 ) n
Procedimiento general: El programa consiste en escanear 3 numeros; P entero, i,n flotantes
 y luego utilizando la formula F = P ( 1 + i / 100 ) n el programa debe conpilarlo sacando asi eñ resultado del valor futuro.
*/

#include <stdio.h>	
#include <math.h>	
int main() {
	/*Entradas
	P,i,n son los unicos valores que debe introducir el usuario*/
	int P;
	float F,n;
	float i, A;
	int denuevo;
	/*procedimiento 
	primero se deben dar los valores de P,i,n*/
	do{
		
		printf ("Escoje un valor para P \n");
		scanf ("%d", &P);
		printf ("Escoje un valor para i \n");
		scanf ("%f", &i);
		printf("Escoje un valor para n \n");
		scanf ("%f", &n);
		// ocupando un modulador se ingresa la formula siguiente e imprime el factorial de F, es decir el valor futuro
		A = P*(1+(i/100));	
		F = pow(A,n);
		printf("El valor es: %f", F);
		printf("\ndesea continuar? ponga 0 para terminar\n ");
		scanf("%d", &denuevo);
		/*Para terminar se debe escribir un valor 0 */
	}while(denuevo!=0);
	
	return 0;
}
/* QA: De entradas use el entero 4, el flotante .5 y el entero 6
La salida deberia ser: 4220.426270*/

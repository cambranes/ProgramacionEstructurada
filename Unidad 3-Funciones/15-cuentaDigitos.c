#include <stdio.h>
/*
Autor: Alvar Peniche
15.II.2018
Entradas: numero flotante y un digito 
Salida: numero de veces que se encuentra el digito en el numero flotante

Procedimiento:Escribir  una  función  que  reciba  un  flotante  y  un  dígito
entero.  La función deberá verificar cuántas veces aparece el dígito entero en 
la parte entera  y  flotante  del  número.  Devolverá  el  número  de 
 ocurrencias  o  0  en caso de no aparecer. 
*/
int cuentaDigitos(float, int);
int convierteEntero(float);
void imprimir(int);

int main(int argc, char *argv[]) {
	
	float  numeroFraccion;
	int  digito,  repeticion=0;
	
	/* entradas */
	scanf("%f", &numeroFraccion);
	scanf("%d", &digito);
	
	/*procedimiento*/
	repeticion= cuentaDigitos(numeroFraccion, digito);
	
	/* salida */
	imprimir(repeticion);
	
	
	return 0;
}
/*
Funcion del procedimiento general cuenta cuantas veces se repite un digito en un
numero dado
@param numero y digito
@return numero de veces que se encuentra el digito en el numero
*/

int cuentaDigitos(float numero, int digito){
	
	int digitoActual=0, repeticion=0, numeroEntero=0;
	
	numeroEntero= convierteEntero(numero);
	
	
	while(1){
		
		digitoActual= numeroEntero%10;
		numeroEntero=numeroEntero/10;
		
		
		
		if(digitoActual==digito){
			repeticion++;
			
		}
		if (numeroEntero==0){
			break;
		}
	}	
	
	return repeticion;
	
}

/*
Funcion para mover los decimales de un float a su parte entera
@param numero flotante
@return numero con los decimales del flotante mandado movidos a su parte entera
*/


int convierteEntero(float numero){
	int numeroEntero=0;
	
	
	numeroEntero = numero; 
	
	while (numero!=numeroEntero){
		numero = numero*10; 
		numeroEntero  = numero; 
	}
	
	
	return numeroEntero;
}

/*
Funcion para imprimir la salida del programa 
@param valor entero para imprimir
@return N/A
*/

void imprimir(int repeticiones){
	printf("El digito se repite: %d", repeticiones);
	
}


/*Autor: Elena Soledad Medina Favela   12/02/2018  22:03 hrs 

Procedimiento general: El programa resivira un numero entero dado por el usuario
y por medio de una funcion llamada "comparar" se verificara si ese entero corresponde
al codigo ascci de una letra mayuscula, de ser cierto devolvera un entero "1" y de no 
serlo se devolvera un entero "0".*/

	#include <stdio.h>

	void lectura(int *);
	int comparar(int);
	void imprimir(int);

	int main(int argc, char *argv[]) { 
		int numero=0, mayuscula=0;
	
		lectura(&numero);
		mayuscula = comparar(numero);
		imprimir(mayuscula);

		return 0;
	}

	/*@param: valor: apuntador que corresponde a la variable "numero" del main, 
		donde se alojara un numero entero. 
	  @return: La funcion no devulve ningun valor.*/
	void lectura (int *valor){
		scanf("%d", valor );
	}
	
	/*@param: number: Variable que sera evaluada para determinar si el numero
		entero ingresado corresponde al codigo ascci de una letra mayuscula o no.
	  @return: may: Variable que almacenara un valor entero, ya sea "1" si el 
		el entero "number" resulta ser el codigo ascci de una letra mayuscula
		o un "0" si no.
	*/
	int comparar(int number){
		int may = 0;
	
		if(number > 64 && number < 91){
			may = 1;
		}
		else{
			may = 0;
		}
		return may;
	}

	/*@param: valor: Variable que sera evaluada dentro de la funcion. Si el valor de
		la variable es 1, se imprimira el mensaje "Es una mayuscula". SI el valor
		es 0, se imprimira el mensaje "No es una mayuscula".
	  @return: La funcion no devuelve ningun valor. */
	void imprimir (int valor){
		if (valor == 1){
			printf("Es una mayuscula");
		}
		
		if(valor == 0){
				printf("No es una mayuscula");
		}
	}


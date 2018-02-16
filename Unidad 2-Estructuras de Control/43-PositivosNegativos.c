/*Autor: Elena Soledad Medina Favela 13/02/2018 20:26 hrs

Procedimiento General: El usuario ingresa n cantidad de numeros para determinar cuantos de ellos
son positivos y cuantos son negativos. El programa dejara de leer numeros hasta que el usuario 
ingrese el nuemro 0.*/

	#include <stdio.h>
	
	void lectura(float *);
	void bucle(float);
	void imprimir(int, int);

	int main(int argc, char *argv[]) {
		float numero=1;
		bucle(numero);
		return 0;
	}
	
	/*@param: valor: apuntador que corresponde a la variable "numero" del main, 
	donde se alojara un numero con punto flotante. 
	  @return: La funcion no devuelve ningun valor.*/
	void lectura (float *valor){
		scanf("%f", valor);
	}
	
	/*@param: numero: Variable que alojara n cantidad de valores, los cuales seran
	evaluados para determinar si son positivos o negativos. Se dejaran de almacenar
	valores cuando el usuario ingres eun "0".
	  @return: La funcion no devuelve ningun valor.*/
	void bucle (float numero){
		int positivo=0, negativo=0;
		while(numero != 0){
			lectura(&numero);
			if(numero > 0){
				positivo = positivo + 1;
			}
			else 
				if (numero < 0){
					negativo = negativo + 1;
				}
		}
		imprimir(positivo, negativo);
	}
	
	/*@param: positivo, negativo: Variables que llevan el conteo de cuantos numeros 
	de los ingresados por el usuario son positivos y cuantos son negativos.
	  @return: La funcion no devuelve ningun valor.*/
	void imprimir(int positivo, int negativo){
		printf("Se ingresaron %d numeros positivos \n", positivo);
		printf("Se ingresaron %d numeros negativos", negativo);
	}
	
	

/*Autor: Elena Soledad Medina Favela 13/02/2018 12:08 hrs

Procedimiento General: El usuario ingresa 3 numeros, los cuales seran comparados por medio
de una funcion para determinar cual de los 3 es el mayor. Al final del proceso 
se imprime un mensaje indicando cual es el mayor*/

#include <stdio.h>

	void lectura(float *, float *, float *);
	float mayor(float, float, float);
	void imprimir(float);

	int main(int argc, char *argv[]) {
		float n1=0, n2=0, n3=0, may=0;
		
		lectura(&n1, &n2, &n3);
		may = mayor(n1, n2, n3);
		imprimir(may);
		
		return 0;
	}
	
	/*@param: valor1, valor2, valor3: Apuntadores correspondientes a las 3 variables
	de entrada de la funcion main.
	  @return: La funcion no devuelve ningun valor.	*/
	void lectura(float *valor1, float *valor2, float *valor3){
		scanf("%f %f %f", valor1, valor2, valor3);
	}
	
	/*@param: numero1, numero2, numero3: Variables que seran evaluadas por 
	una serie de condicionales if para determinar cual de los 3 valores 
	alojados en las variables es el mayor.
	  @return: mayor: Variable que almacena el valor mayor entre las 3 variables 
	antes evaluadas.*/
	float mayor (float numero1, float numero2, float numero3){
		float mayor=0;
		if (numero1 > numero2){
			if (numero1 > numero3){
				mayor = numero1;
			}
			else{
				if (numero3 > numero2){
					mayor = numero3;
				}
				else{
					mayor = numero2;
				}
			}
		}
		else{
			if (numero1 < numero3){
				if (numero3 > numero2){
					mayor = numero3;
				}
				else{
					mayor = numero2;
				}
			}
			else{
				if(numero2 > numero3){
					mayor = numero2;
				}
				else{
					mayor = numero3;
				}
			}
		}
		return mayor;
	}
	
	/*@param: numeroMayor: Variable que contiene el valor mayor de las 3
	variables antes evaluadas y que se imprimira para mostrar al usuario que ese 
	es el numero mayor.
	  @return: La funcion no devuelve ningun valor. */
	void imprimir(float numeroMayor){
		printf("El numero mayor es: %f", numeroMayor );
	}
	


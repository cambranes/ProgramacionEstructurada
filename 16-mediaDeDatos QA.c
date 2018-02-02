/*
Autor: Magdiel Pech
Entrada: datosNumericos
Salida: mediaAritmerica
Proceso: calcular la media de n numeros
hasta recibir un numero 0
 
QA
Entrada	   Salida	 Resultado
4 5 6 2 0   4.25         4.25
0	    0    	 0
1 1 1 0     1            1
465 4684 0  2574.5       2574.5
*/
#include <stdio.h>
 
 
int main(int argc, char *argv[]) {
 
	/*
	Variable de entrada float: datosNumericos
	Variable de salida float: mediaAritmetica
	Variable "contador" para contar el numero 
	de datos
	Variable "sumador" para realizar la suma de los datos
	*/
	float mediaAritmetica,datosNumericos, contador=-1, sumador=0;
 
	printf("Ingresa valores numericos para calcular la media aritmetica de los datos: \n");
	do
	{
		/*
		Entrada de datos
		*/
		scanf("%f",&datosNumericos);
 
		/*
		Proceso
		*/
		sumador += datosNumericos;
		contador++; 
 
	}while(datosNumericos !=0 );
 
	mediaAritmetica = sumador/contador;
 
	/*
	Salida de datos
	*/
	printf("La media aritmetica es: %f ",mediaAritmetica);
 
	return 0;
}

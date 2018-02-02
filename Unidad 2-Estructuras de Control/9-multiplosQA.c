/*
Titulo: 9-Multiplos.c
Autor: Carlos Alejandro Pool Quintal
"28/01//2018
Entradas: Numeros enteros ingresados por el usuario
Salidas: Numero de veces en las que cabe 5 en un numero dado
Procedimiento General: Mediante un ciclo for se evalua el resto de dividir un
dado iniciando desde 1, cada vez que el resto se vuelva 0 se agrega uno al contador 
indicando que hay un multiplo de 5, as’ hasta abarcar todo el numero

Entrada    Salida    Resultado
   9         1       correcto
   50        10      correcto
   36        7       correcto

*/


#include <stdio.h>


int main(int argc, char *argv[]) {
	
	int evaluarNumero, contadorPrincipal, i;
	contadorPrincipal = 0; /*Este contador cuenta el numero de veces que el 5 cabe en el numero dado*/
	
	printf("Ingrese el numero a evaluar:"); /*Se pide el numero (Entrada)*/
	scanf("%d", &evaluarNumero); /*Se ingresa el numero*/
	
	for ( i = 1; i <= evaluarNumero; i=i+1){ /*El ciclo ira desde 1 hasta el numero indicado con aumento 1*/
		if (i % 5 == 0){ /*Esta condicion determina que el numero contiene al 5*/
			contadorPrincipal = contadorPrincipal+1;/*Cuando se cumpla aumentamos el contador*/
		}
		
	}
	printf ("El numero final de multiplos fue:%d\n",contadorPrincipal);/*Escribimos el numero de veces (Salida)*/
	
	return 0; 
}


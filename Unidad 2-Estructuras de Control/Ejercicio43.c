#include <stdio.h>

/* Ejercicio #43 MODULARIZADO
# Programa que lea N valores y que cuente cuantos de ellos son positivos y cuantos
# son negativos (0 es condici'on de fin de lectura)
# Audny D. Correa Ceballos (Equipo 'about:blank') */

//PROTOTIPOS DE LAS FUNCIONES
void leerRangoDeDatos(int *);
int leerValores (int);
int compararValoresPositivos(int);
int compararValoresNegativos(int);
void imprimirSalidas(int, int);
int main(){
	//Declarar las Variables
	int rangoDeValores, lista, positivos, negativos;
	
	//Funciones para leer las entradas
	leerRangoDeValores(&rangoDeValores);
	leerValores;
	//Funciones del proceso 
	positivos=compararValoresPositivos(lista);
	negativos =compararValoresNegativos(lista);
	//Funciones para imprimir las salidas
	imprimirSalidas(positivos, negativos);
	
	return 0;
}

//Asignar un rando de cuantos valores  habran
void leerRangoDeValores(int *_rangoDeValores){
	scanf("%d", _rangoDeValores);
}

//Asignar los numeros que se compaararan
int leerValores(int _rangoDeValores){
	int i;
	int lista[100];
	for (i= 0; i<=_rangoDeValores; i++){
		scanf("%d", &lista[i]);	
	}
	return *lista;
}
//Encontrar cuantos valores positivos hay
int compararValoresPositivos(int _lista){
	int i, contadorPositivo=0;
	for (i= 0; i<=_lista; i++){
		if (_lista >0){
			contadorPositivo += 1;
		}if (_lista == 0){
			break;
		}
	} 
	return contadorPositivo;
}

//Encontrar cuantos valores negativos hay
int compararValoresNegativos(int _lista){
	int i, contadorNegativo=0;
	for (i= 0; i<=_lista; i++){
		if (_lista < 0){
			contadorNegativo += 1;
		}if (_lista == 0){
			break;
		}
	} 
	return contadorNegativo;
}
//Imprimir las salidas
void imprimirSalidas(int _positivos, int _negativos){
	printf("%d", _positivos);
	printf("%d", _negativos);
}


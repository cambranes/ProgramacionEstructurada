/*
Autor: Guillermo Canto
Entradas: Ninguna
Salidas: Ninguna
Procedimiento general: Llena un vector de tamaño 100 con valores aleatorios del 1 al 100 (calificaciones)
Calcula los promedios de cada alumno si cada 5 calificaciones en el vector antes mencionado corresponde 
a un alumno diferente y los almacena en un vector de promedios.
*/


#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
int numeroAleatorio(int valorMax);
void asignarValores(int arreglo[N]);
void calcularPromedios(int calificaciones[], int promedios[]);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int calificaciones[100]; 
	int promedios[20];
	asignarValores(calificaciones);
	calcularPromedios(calificaciones, promedios);
	return 0;
}


int numeroAleatorio(int valorMax) {
	int n;
	n = rand()%valorMax;
	return n;
}
void asignarValores(int arreglo[N]){
	for (int i=0; i<100; i++){
		arreglo[i]= numeroAleatorio(100);
	}
}
void calcularPromedios(int calificaciones[N], int promedios[N]){
	int numAlumno=0;
	for(int i=0; i<20; i++){
		for(int j=numAlumno*5; j< (numAlumno*5)+5 ; j++){
			promedios[i]= promedios[i]+ calificaciones[j];
		}
		promedios[i]= promedios[i]/5;
		numAlumno++;
	}
}

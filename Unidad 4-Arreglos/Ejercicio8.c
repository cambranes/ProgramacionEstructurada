/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño del vector.
	Salidas: La media, desviacion estandar y varianza.
	Procedimiento general: Lee el largo del vector y posterior lo rellena con numeros aleatorios entre 0 y 100,
	luego calcula la media aritmetica, la varianza y la desviacion.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void rellenarVector(int[], int);
float calcularMedia(int[], int);
float calcularPromedio(int[], int);
float calcularDesviacion(int);
float calcularVarianza(int[], int);
void imprimirVector(int[], int);

int main(){
	// Entradas
	int vector[N];
	int tam = 0;
	float media = 0, desviacion = 0, varianza = 0;
	srand(time(NULL));
	printf("Ingresa el largo del vector: ");
	scanf("%d", &tam);

	// Proceso
	rellenarVector(vector, tam);
	media = calcularMedia(vector, tam);
	varianza = calcularVarianza(vector, tam);
	desviacion = calcularDesviacion(varianza);
	
	// Salidas
	printf("Media: %f\n", media);
	printf("Desviacion estandar: %f\n", desviacion);
	printf("Varianza de una muestra: %f\n", varianza);
	imprimirVector(vector, tam);
	return 0;
}

void rellenarVector(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] = rand() % 101;
	}
}

float calcularMedia(int vec[], int tam){
	float media = 0;
	for(int i = 0; i < tam; i++){
		media += vec[i];
	}
	media = media / tam;
	return media;
}

float calcularPromedio(int vec[], int tam){
  float suma = 0;
  for (int i = 0; i < tam; i++) {
    suma += vec[i];
  }
  suma = suma / tam;
  return suma;
}

float calcularVarianza(int vec[], int tam){
  float promedio = calcularPromedio(vec, tam);
  float varianza = 0;
  for (int i = 0; i < tam; i++) {
    varianza += pow((vec[i] - promedio), 2.0);
  }
  varianza = varianza / (tam - 1);
  return varianza;
}

float calcularDesviacion(int varianza){
  return sqrt(varianza);
}

void imprimirVector(int vec[], int tam){
	printf("\nVector = {");
	for(int i = 0; i < tam; i++){
		printf("%d, ", vec[i]);
	}
	printf("}");
}
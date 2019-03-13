/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño del vector.
	Salidas: La media, mediana y moda de los elementos del vector.
	Procedimiento general: Lee el largo del vector y posterior lo rellena con numeros aleatorios entre 0 y 50,
	despues calcula la media, moda, mediana y lo imprime.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void rellenarVector(int[], int);
float calcularMedia(int[], int);
float calcularMediana(int[], int);
int calcularModa(int[], int);
void ordenarVector(int[], int);
void imprimirVector(int[], int);

int main(){
	// Entradas
	int vector[N];
	int moda, tam;
	float media, mediana;
	srand(time(NULL));
	
	printf("Ingresa el largo del vector: ");
	scanf("%d", &tam);
	
	// Proceso
	rellenarVector(vector, tam);
	media = calcularMedia(vector, tam);
	moda = calcularModa(vector, tam);
	mediana = calcularMediana(vector, tam);
	
	// Salidas
	printf("Media: %f\n", media);
	printf("Mediana: %f\n", mediana);
	if(moda == -1){
		printf("No hay moda\n");
	}
	else{
		printf("Moda: %d", moda);
	}
	imprimirVector(vector, tam);
	
	return 0;
}

void rellenarVector(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] = rand() % 51;
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

float calcularMediana(int vec[], int tam){
	float mediana = 0;
	int posicion = 0;
	// Si el largo del vector es par
	ordenarVector(vec, tam);
	if(tam % 2 == 0){
		posicion = tam / 2 - 1;
		mediana = vec[posicion] + vec[posicion + 1];
		mediana = mediana / 2;
	}
	else{
	// si el largo del vector es impar
		posicion = (tam + 1) / 2 - 1;
		mediana = vec[posicion];
	}
	
	return mediana;
}

int calcularModa(int vec[], int tam){
 
	int moda = -1, veces = 0, ultimo_numero_veces = 0;//veces: contará el número de veces que se repite un número
	int j = 0;
	for(int i = 0; i < tam; i++){
		//j: analizará una posición adelante del valor actual
		j = i + 1;
		while(j < tam){
			//Si el número en i se repite más adelante, el número de veces incrementa
			if(vec[i] == vec[j]){
				veces++;
			}
			j++;
		}
 
		if(veces > ultimo_numero_veces){
			moda = vec[i];
			ultimo_numero_veces = veces;
			veces = 0;
		}
		else{
         veces = 0;
		}
	}
	//Devuelve el numero que más se repite
	return moda;
}

void ordenarVector(int vec[], int tam){
	int aux = 0;
	for (int i = 0; i < tam - 1; i++){       
		for (int j = 0; j < tam - i - 1; j++){  
			if (vec[j] > vec[j+1]){
				aux = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = aux;
			} 
		}
   }
}

void imprimirVector(int vec[], int tam){
	printf("\nVector = {");
	for(int i = 0; i < tam; i++){
		printf("%d, ", vec[i]);
	}
	printf("}");
}

/* QA                                    
Por: Eyder Antonio Concha Moreno

Entradas:
Salidas: {2, 7, 17, 39, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular media: 16.25 - CORRECTO
Calcular mediana: [(7+17)/2] = 12 - CORRECTO
Calcular Moda: No hay moda - CORRECTO

Entradas: 10
Salidas: {3, 5, 12, 23, 27, 35, 41, 47, 50, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular media: 27 - CORRECTO
Calcular mediana: 27 - CORRECTO
Calcular Moda: 27 - CORRECTO

Entradas: 7
Salidas: {0, 16, 35, 39, 44, 45, 45, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular Media: 32 - CORRECTAS
Calcular Mediana: 39 - CORRECTAS
Calcular Moda: 45 - CORRECTO

Buen codigo 10/10
*/

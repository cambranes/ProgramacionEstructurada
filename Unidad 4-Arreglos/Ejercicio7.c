/*
Autor: Eyder Concha Moreno 09/Marzo/19
Entradas: El largo del vector
Salidas: La media de los datos, la moda y la mediana, al igual que los numeros en el vector
Procedimiento general:
1.-Determinamos la media, para lo cual sumamos todos los datos y los dividimos entre la cantidad de los mismos
2.-Determinamos la moda, iterando cada dato y aumentando uno a un contador para verificar las veces que este se repite
3.-Determinamos la mediana, ordenando el vector y encontrando el valor a la mitad del vector
4.-Imprimimos los datos
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void llenarVector(int vectorSize, int [vectorSize]);
void imprimeVector(int vectorSize, int [vectorSize]);
float mediaDatos(int vectorSize, int [vectorSize]);
int modaDatos(int vectorSize, int [vectorSize], int*);
int mediana(int vectorSize, int vector[vectorSize]);
void sortea(int vectorSize, int vector[vectorSize]);
void swap(int* valor1, int* valor2);

int main()
{
    // Creamos el vector y las variables necesarias para determinar la moda, mediana y media
    int vector[SIZE], vectorSize, moda, datoModa, median;
    float media;
    printf("Ingresa el largo del vector ");
    scanf("%d", &vectorSize);
    llenarVector(vectorSize, vector);
    imprimeVector(vectorSize, vector);

    // Determinamos moda, mediana y media
    media = mediaDatos(vectorSize, vector);
    moda = modaDatos(vectorSize, vector, &datoModa);
    median = vector[mediana(vectorSize, vector)];

    printf("\n La media es de: %f \n", media);
    //Si la moda no es mayor a 1 (no existe o es un dato en el vector)
    (moda > 1 || vectorSize == 1) ? printf("\n La moda es de: %i, y se repite %d veces\n", datoModa, moda) : printf("\n No hay moda (o es de uno)!\n");
    printf("\n La mediana es de: %i \n", median);

	return 0;
}

void llenarVector(int vectorSize, int vector[vectorSize]){
    // Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria
    //ya que toma el tiempo como parametro
    srand( time(NULL));
    for(int i = 0; i < vectorSize; i++){
        // Generamos numero del 0 al 50
        vector[i] = rand() % 51;
    }
}

void imprimeVector(int vectorSize, int vector[vectorSize]){
    sortea(vectorSize, vector);
    for(int i = 0; i < vectorSize; i++){
        printf("\nEl valor %d del vector es de %d\n", i,vector[i]);
    }
}

float mediaDatos(int vectorSize, int vector[vectorSize]){
    float media = 0;
    // Sumamos los datos
    for(int i = 0; i < vectorSize; i++){
        media += vector[i];
    }
    // Dividimos la suma de datos entre la cantidad de datos
    media = (media / vectorSize);
    return media;
}

int modaDatos(int vectorSize, int vector[vectorSize], int *datoModa){
    int contador = 0, moda = 0;
    *datoModa = vector[0];
    for(int i = 0; i < vectorSize; i++){
        contador = 0;
        // Verificamos cuantas veces se repite cada dato en el vector
        for(int j = 0; j < vectorSize; j++){
            if(vector[i] == vector[j]){
                // De repetirse, sumamos uno al contador
                ++contador;
            }
        }
        // si el contador es superior a la moda actual, entonces este dato es la moda
        if(contador > moda){
            moda = contador;
            *datoModa = vector[i];
        }
    }
    return moda;
}

int mediana(int vectorSize, int vector[vectorSize]){
    int median = 0;
    // Ordenamos el vector para determinar la mediana
    sortea(vectorSize, vector);
    // Determinamos la posicion de la media
    median = ((vectorSize+1)/2 - 1);
    return median;
}

void sortea(int vectorSize, int vector[vectorSize]){
    for(int i = 0; i < vectorSize; i++){
        // Ordenamiento de datos con algoritmo iterativo (burbuja)
        for(int j = 0; j < vectorSize; j++){
            if(vector[j] > vector[j+1]){
                swap(&vector[j], &vector[j+1]);
            }
        }
    }
}

void swap(int* valor1, int* valor2){
    // Reordenamos los valores
    int almacenador = *valor1;
    *valor1 = *valor2;
    *valor2 = almacenador;
}

/*
	QA Reviso: Carlos Chan
    // SOLUCIONADO, AHORA EL VECTOR ES IMPRESO DE FORMA ORDENADA
	
	void llenarVector()
	Entradas: 4
	Salidas: Ninguna, pero el vector quedo asi:
	{12, 26, 30, 28}
	
	float mediaDatos()
	Entradas: 4, {12, 26, 30, 28}
	Salidas: 21.5
	Es correcto
	
	int modaDatos()
	Entradas: 4, {12, 26, 30, 28}
	Salidas: 0
	Es correcto
	
	int mediana()
	Entradas: 4, {12, 26, 30, 28}
	Salidas: 2
	Es correcto
	
	void sortea()
	Ordena correctamente el vector
*/

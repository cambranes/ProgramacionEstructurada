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

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	// Creamos el vector y las variables necesarias para determinar la moda, mediana y media
	var vector [1000]int
	var vectorSize, moda, datoModa, median int
	var media float64
	println("Ingresa el largo del vector")
	fmt.Scan(&vectorSize)
	llenarVector(vectorSize, &vector)

	// Determinamos moda, mediana y media
	media = mediaDatos(vectorSize, vector)
	moda = modaDatos(vectorSize, vector, &datoModa)
	median = vector[mediana(vectorSize, vector)]

	fmt.Printf("\n La media es de: %f \n", media)
	if moda > 1 || vectorSize == 1 {
		fmt.Printf("\n La moda es de: %i, y se repite %d veces\n", datoModa, moda)
	} else {
		fmt.Printf("\n No hay moda (o es de uno)!\n")
	}
	fmt.Printf("\n La mediana es de: %d \n", median)

}

func llenarVector(vectorSize int, vector *[1000]int) {
	// Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria
	//ya que toma el tiempo como parametro
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < vectorSize; i++ {
		vector[i] = rand.Intn(50)
		fmt.Printf("\nValor: %d es de: %d\n", i, vector[i])
	}
}

func mediaDatos(vectorSize int, vector [1000]int) float64 {
	var media float64 = 0
	// Sumamos los datos
	for i := 0; i < vectorSize; i++ {
		media += float64(vector[i])
	}
	// Dividimos la suma de datos entre la cantidad de datos
	media = (media / float64(vectorSize))
	return media
}

func modaDatos(vectorSize int, vector [1000]int, datoModa *int) int {
	contador := 0
	moda := 0
	*datoModa = vector[0]
	for i := 0; i < vectorSize; i++ {
		contador = 0
		// Verificamos cuantas veces se repite cada dato en el vector
		for j := 0; j < vectorSize; j++ {
			if vector[i] == vector[j] {
				// De repetirse, sumamos uno al contador
				contador++
			}
		}
		// si el contador es superior a la moda actual, entonces este dato es la moda
		if contador > moda {
			moda = contador
			*datoModa = vector[i]
		}
	}
	return moda
}

func mediana(vectorSize int, vector [1000]int) int {
	median := 0
	// Ordenamos el vector para determinar la mediana
	sortea(vectorSize, vector)
	// Determinamos la posicion de la media
	median = ((vectorSize+1)/2 - 1)
	return median
}

func sortea(vectorSize int, vector [1000]int) {
	for i := 0; i < vectorSize; i++ {
		// Ordenamiento de datos con algoritmo iterativo (burbuja)
		for j := 0; j < vectorSize; j++ {
			if vector[j] > vector[j+1] {
				swap(&vector[j], &vector[j+1])
			}
		}
	}
}

func swap(valor1 *int, valor2 *int) {
	// Reordenamos los valores
	almacenador := *valor1
	*valor1 = *valor2
	*valor2 = almacenador
}
/*
	QA Reviso: Carlos Chan
	
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

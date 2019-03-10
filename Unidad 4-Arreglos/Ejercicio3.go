/*
Autor: Eyder Concha Moreno 09/Marzo/19
Entradas: Ninguna
Salidas: Impresion de numeros pares, y cantidad de impares
Procedimiento general:
1.-Asignamos numeros aleatoriamente al arreglo
2.-Iteramos atraves de cada elemento del arreglo, de ser divisible entre 2 sin residuo, lo imprimimos
3.-Iteramos atraves de cada elemento del arreglo, de no ser divisible entre 2 sin residuo, a�adimos 1 al contador de impares
4.- Imprimimos la cantidad de impares
*/

package main

import (
	"fmt"
	"math/rand"
)

func main() {
	var matriz [50][50]int
	llenarMatriz(&matriz)

	// Imprimimos los numeros con valor par
	fmt.Printf("Los pares son: \n")
	imprimirPares(matriz)

	// Determinamos la cantidad de impares
	fmt.Printf("\n la cantidad de impares es de: %d", cantidadImpares(matriz))
}

func llenarMatriz(matriz *[50][50]int) {
	// Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria
	//ya que toma el tiempo como parametro
	for i := 0; i < 50; i++ {
		for j := 0; j < 50; j++ {
			matriz[i][j] = rand.Intn(100)
		}
	}
}

func cantidadImpares(matriz [50][50]int) int {
	numeroImpares := 0
	for i := 0; i < 50; i++ {
		for j := 0; j < 50; j++ {
			// De no ser divisible entre dos, le agregamos el valor de verdad (1), de otra forma, le agregamos 0
			if (matriz[i][j] % 2) != 0 {
				numeroImpares++
			}
		}
	}
	return numeroImpares
}

func imprimirPares(matriz [50][50]int) {
	for i := 0; i < 50; i++ {
		for j := 0; j < 50; j++ {
			// De ser divisible entre dos sin residuo (par), lo imprimimos
			if (matriz[i][j] % 2) == 0 {
				fmt.Printf("%d\n", matriz[i][j])
			}
		}
	}
}

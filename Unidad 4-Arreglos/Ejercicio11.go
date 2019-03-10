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
)

func main() {
	var piramide [100][100]int
	var size int
	println("Ingresa el tamano de la piramide")
	fmt.Scan(&size)

	llenarPiramide(size, &piramide)
	imprimirPiramideInversa(size, piramide)
}

func llenarPiramide(matrizSize int, matriz *[100][100]int) {
	matriz[0][0] = 1
	for filas := 1; filas < matrizSize; filas++ {
		for columnas := 0; columnas <= filas; columnas++ {
			if columnas == 0 || columnas == filas {
				matriz[filas][columnas] = 1
			} else {
				matriz[filas][columnas] = matriz[filas-1][columnas-1] + matriz[filas-1][columnas]
			}
		}
	}
}

func imprimirPiramideInversa(matrizSize int, matriz [100][100]int) {
	for filas := matrizSize - 1; filas >= 0; filas-- {
		for columnas := 0; columnas <= filas; columnas++ {
			fmt.Printf(" %d ", matriz[filas][columnas])
		}
		fmt.Printf("\n")
	}
}

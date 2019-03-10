//autor: Jorge Alberto Chi leon
//Suma de dos vectores bidimensionales de mismo tamaño
//Entradas: Tamaño de las filas, columnas y numeros que contienen
package main

import "fmt"

func main() {
	const size = 1000

	var input [size][size]int
	var input2 [size][size]int
	var filas int
	var columnas int
	fmt.Println("Dame las dimensiones de las filas: ")
	fmt.Scan(&filas)
	fmt.Println("Dame las dimensiones de las columnas: ")
	fmt.Scan(&columnas)

	for i := 0; i < filas; i++ {
		for j := 0; j < columnas; j++ {
			fmt.Println("Ingresa el input[", i, "][", j, "]")
			fmt.Scan(&input[i][j])
			fmt.Println("Ingresa el input2[", i, "][", j, "]")
			fmt.Scan(&input2[i][j])
			//sumas
			input2[i][j] += input[i][j]
		}
	}

	for i := 0; i < filas; i++ {
		for j := 0; j < columnas; j++ {
			fmt.Println("La suma: [", i, "][", j, "]:", input2[i][j])
		}
	}

}
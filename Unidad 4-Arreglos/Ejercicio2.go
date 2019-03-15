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
/*
  QA: Raul Rivadeneyra
  Le asigne los valores 1,1,1,1,1,1,1,1,1 y 1,1,1,1,1,1,1,1,1 a las matrices de 3x3 y me devolvio 2,2,2,2,2,2,2,2,2.
  Le asigne los valores de 1,2 y 1,3 a las matrices de 1x2 y me devolvio 2,5
  Le asigne los valores 2,4,4,2 y 1,2,1,2 a las matrices de 2x2 y me devolvio 3,6,5,4.
  Por lo tanto es correcto
  Solo que se puede modular
*/

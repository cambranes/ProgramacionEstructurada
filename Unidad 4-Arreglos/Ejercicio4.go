/**
 * @author Luis Gerardo Leon Ortega
Realizar la suma de dos matrices Bidimensionales. Para que se puedan sumar las matrices A[i. j] y
B[i, j] deben de tener las mismas dimensiones la matriz S[i, j], tendrá las mismas dimensiones y
cada elemento tendrá la suma, es decir B[i, j] = A[i, j] + B[i, j]. Crear el pseudocódigo que realice
esto, utilizando notación de arreglos
*/
package main

import "fmt"

func main() {
	const size = 2

	var input [size][size]int
	var input2 [size][size]int

	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			fmt.Println("Ingresa el input[", i, "][", j, "]")
			fmt.Scan(&input[i][j])
			fmt.Println("Ingresa el input2[", i, "][", j, "]")
			fmt.Scan(&input2[i][j])
			//Make the sum
			input2[i][j] += input[i][j]
		}
	}

	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			fmt.Println("La suma: ", input2[i][j])
		}
	}

}

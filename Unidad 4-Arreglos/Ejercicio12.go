/**
 * @author Luis Gerardo Leon Ortega
Se dice que una matriz tiene un punto silla si alguna posición de la matriz es el menor
de su fila, y a la vez el mayor de su columna. Escribir un programa que llene una matriz
con números aleatorios reales del 0 al 999 y que determine si la matriz tiene a puntos
silla.
 Example:
 Puntos silla: 1
   C
 F 22 | 21  | 20
   45 | 32 | 3
   60 | 32 | 2
*/

package main

import "fmt"

func main() {
	/* variables */
	const x = 3
	const y = 3
	var matriz [x][y]int
	var puntosSilla int

	//Get data
	entradas(&matriz)
	//Print data
	/*
		for i := 0; i < x; i++ {
			fmt.Println(" ")
			for j := 0; j < y; j++ {
				fmt.Print("| ", matriz[i][j], " |")
			}
		} */

	proceso(&matriz, &puntosSilla)
	salidas(puntosSilla)
}

func entradas(matriz *[3][3]int) {
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			fmt.Println("Ingresa el valor[", i, "][", j, "]")
			fmt.Scanln(&matriz[i][j])
		}
	}
}

func proceso(matriz *[3][3]int, puntosSillas *int) {
	for i := 0; i < 3; i++ {
		var minimum = 1000 //Min vañ
		var maximum = 0    //Max val
		//Get min val
		for j := 0; j < 3; j++ {
			if matriz[i][j] < minimum {
				minimum = matriz[i][j]
			}
		}
		//Get max val
		for j := 0; j < 3; j++ {
			if matriz[i][j] == minimum {
				for k := 0; k < 3; k++ {
					if matriz[k][j] > maximum {
						maximum = matriz[k][j]
					}
				}
			}
		}

		if maximum == minimum {
			*puntosSillas++
		}
	}
}

func salidas(puntosSilla int) {
	fmt.Println("Cantidad de puntos silla: ", puntosSilla)
}

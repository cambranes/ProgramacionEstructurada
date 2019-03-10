/**
 * @author Luis Gerardo Leon Ortega
Escribir un programa que llene un vector de tamaño n llena con números aleatorios del 0
al 100. El programa debe calcular:
a. La media de los datos
b. La desviación estandar
c. La varianza
*/

package main

import "fmt"

func main() {
	/* entradas */
	const size = 6
	var n [size]int
	var media float64
	var varianza float64
	var deviacionEstandar float64

	//Get values
	for i := 0; i < size; i++ {
		fmt.Scan(&n[i])
		media = media + float64(n[i])
	}

	media /= size
	varianza = recursiveSum(n, size-1, media)
	varianza /= size - 1
	deviacionEstandar = sqrt(varianza)
	fmt.Println("La variaza es: ", varianza, " La media es: ", media, " La desviacion estandar es: ", deviacionEstandar)
}

func sqrt(entrada float64) float64 {
	var raizCuadrada float64 = entrada / 2
	var t float64
	for (t - raizCuadrada) != 0 {
		t = raizCuadrada

		if t == 0 {
			raizCuadrada = (t + (entrada / t)) / 2 //make again
		}

		raizCuadrada = (t + (entrada / t)) / 2
	}
	return raizCuadrada
}

func alCuadrado(val float64) float64 {
	return val * val
}

func recursiveSum(n [6]int, size float64, media float64) float64 {
	if size == 0 {
		return alCuadrado(float64(n[int(size)]) - media)
	}
	return alCuadrado(float64(n[int(size)])-media) + recursiveSum(n, size-1, media)
}

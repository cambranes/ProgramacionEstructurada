//1. Escribe un programa que lea una matriz de 15 por 12 y que calcule:
//  a. El menor elemento de la matriz.
//  b. La suma de los elementos que estén en las primeras 5 filas
//  c. La suma de los elementos que estén en las últimas 5 columnas.
//Autor: Rodrigo Hernandez Gongora
package main
import "fmt"

func leerMatriz(matriz *[15][12] int){
	var value int
	for i := 0; i < 15; i++ {
		for j := 0; j < 12; j++ {
			fmt.Printf("Introduce un numero\n")
			fmt.Scanf("%d", &value)
			matriz[i][j]=value
		}
	}
}

func menor(matriz [15][12] int ) int {
// 32767 es el numero mas grande que se le puede asignar a un Int,
// por lo que se usa como bandera para un numero menor
	var min=32767 
	for i := 0; i < 15; i++ {
		for j := 0; j < 12; j++ {
			if matriz[i][j]<min {
				min=matriz[i][j]
			}
		}
	}
	return min
}

func suma1(matriz [15][12] int) int {
	var sum1=0 
	for i := 0; i < 5; i++ {
		for j := 0; j < 12; j++ {
			sum1+=matriz[i][j]
		}
	}
	return sum1
}

func suma2(matriz [15][12] int) int {
	var sum2=0 
	for i := 0; i < 15; i++ {
		for j := 8; j < 12; j++ {
			sum2+=matriz[i][j]
		}
	}
	return sum2
}

func salidas(x int, y int, z int) {
	fmt.Printf("El numero menor del arreglo es: %d\n", x);
    fmt.Printf("La suma de las primeras 5 filas es: %d\n", y);
    fmt.Printf("La suma de las ultimas 5 columnas es: %d\n", z);
}

func main() {
	var matriz[15][12] int
	var min int
	var sum1 int
	var sum2 int
	 leerMatriz(&matriz)
	 fmt.Printf("%d\n", matriz[0][0])
	 min=menor(matriz)
	 sum1=suma1(matriz)
	 sum2=suma2(matriz)
	 salidas(min, sum1, sum2)
}
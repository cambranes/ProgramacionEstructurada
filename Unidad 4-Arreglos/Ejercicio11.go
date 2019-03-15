/*
Autor: Eyder Concha Moreno 09/Marzo/19
Entradas: El tama�o del triangulo de pascal
Salidas: La piramide de pascal inversa
Procedimiento general:
1.-Determinamos la piramida normalmente
    -En caso de que la columna este en la primera o la ultima posicion de la respeciva fila, entonces se introduce un 1
    -De otra forma, el valor se define como el valor de la columna anterior menos una posicion en la fila anterior, mas la columna anterior en la fila anterior
2.-Imprimimos la piramide en orden contrario
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
/*
QA Realizo: Guillermo Canto
	
main()
	Entradas: -10, 0, 5
	Salidas: OK, OK, OK
	
func llenarPiramide()
	Entradas: 5, piramide[100][100] inicializada en cero.
	Salidas: 	1
			1  1
			1  2  1 
			1  3  3  1
			1  4  6  4  1  
Funciona correctamente.

func imprimirPiramideInversa()
	Entradas: 5, La matriz obtenida como salida de la funcion llenar piramide.
	Salidas:  	1  4  6  4  1                                                                                                                                                                              
 			1  3  3  1                                                                                                                                                                                 
			1  2  1                                                                                                                                                                                    
 			1  1      
 			1  
			
El programa funciona correctamente.
La documentacion no corresponde al ejercicio realizado.

Resuelto xd
*/

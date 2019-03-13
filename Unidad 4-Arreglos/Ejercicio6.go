//autor: Jorge Alberto Chi leon
//Suma de los numeros de un vector MxM a excepción de los numeros de las
//diagonales; transponer una matriz de MxN a una de NxM
//Entradas: Tamaño de las filas, columnas, numero de la matria NxM
package main

import "fmt"
import "math/rand"
import "time"

func main() {
	const size = 1000
	rand.Seed(time.Now().UnixNano())
    min := 0
    max := 999
    //se declaran las matrices y demás variables
	var input [size][size]int
	var input2 [size][size]int
	var inputCuadrado [size][size]int
	var filas int
	var columnas int
	var filasColumnas int
	var suma int
	var contadorPrimero int
	var contadorUltimo int
	//pedimos el tamaño de la amtriz cuadrada
	fmt.Println("Dame las dimensiones de la matriz cuadrada: ")
	fmt.Scan(&filasColumnas)
	//se asignan los numero aleatorios
	for i := 0; i < filasColumnas; i++ {
		for j := 0; j < filasColumnas; j++ {
			inputCuadrado[i][j] = (rand.Intn(max - min) + min)
		}
	}

	suma = 0
	contadorUltimo = filasColumnas - 1
	contadorPrimero = 0
	//se hace lasuma sin las diagonales
	for i := 0; i < filasColumnas; i++ {
		for j := 0; j < filasColumnas; j++ {
			if (i!=j) {
				suma = suma + inputCuadrado[i][j]
				if ((i == contadorPrimero)&&(j == contadorUltimo)) {
					suma = suma - inputCuadrado[i][j]
				}
			}
		}
		contadorUltimo = contadorUltimo - 1;
		contadorPrimero = contadorPrimero + 1;
	}
	//se imprime la matriz y la suma sin diagonales
	for i := 0; i < filasColumnas; i++ {
		for j := 0; j < filasColumnas; j++ {
			fmt.Println("La posicion: [", i, "][", j, "]:", inputCuadrado[i][j])
		}
	}

	fmt.Println("La suma sin diagonales es:", suma)

	//pasamos al siguiente que aparentemente sigue siendo el 6
	//leemos las dimensiones
	fmt.Println("Dame las dimensiones de las filas: ")
	fmt.Scan(&filas)
	fmt.Println("Dame las dimensiones de las columnas: ")
	fmt.Scan(&columnas)
	//asignamos los valores
	for i := 0; i < filas; i++ {
		for j := 0; j < columnas; j++ {
			fmt.Println("Dame la posicion: [", i, "][", j, "]:", input[i][j])
			fmt.Scan(&input[i][j])
		}
	}
	//se imprime la matriz original
	for i := 0; i < filas; i++ {
		for j := 0; j < columnas; j++ {
			fmt.Println("Matriz original / La posicion: [", i, "][", j, "]:", input[i][j])
		}
	}
	//se trasnpone la matriz
	for i := 0; i < columnas; i++ {
		for j := 0; j < filas; j++ {
			input2[i][j] = input[j][i]
		}
	}
	//se imprime la nueva matriz
	for i := 0; i < columnas; i++ {
		for j := 0; j < filas; j++ {
			fmt.Println("Matriz transpuesta / La posicion: [", i, "][", j, "]:", input2[i][j])
		}
	}
}

/*
	QA Reviso: Carlos Chan
	void lectura()
	Entradas: 3
	Salidas: Ninguna
	Es correcto
	
	void asignacionAleatoriaMatriz()
	Entradas: Una matriz 3x3 vacia
	Salidas: Ninguna pero la matriz se encuentra en este estado:
		482	138	930
		857	798	385
		676	802	977
	Llena la matriz con valores aleatorios correctamente.
	
	void impresionMatriz()
	Entradas: Una matriz 3x3
	Salidas: 
		482	138	930
		857	798	385
		676	802	977
		
	void sumaMatrizCuadrada()
	Entradas: 
		482	138	930
		857	798	385
		676	802	977
	Salidas: 2182
	Suma correctamente los numeros que no esten en las diagonales.
	
	void asignacionAleatoriaMatriz()
	Entradas: Una matriz 4x2 vacia
	Salidas: Ninguna pero la matriz se encuentra en este estado:
		1	2
		3	4
		5	6
		7	8
		
	void invertirColumFilMatriz()
	Entradas:
		1	2
		3	4
		5	6
		7	8
	Salidas:
		1	3	5	7
		2	4	6	8
	Crea la matriz transpuesta correctamente.
	
	El programa es correcto
*/

//9. Escribir un programa que llene una matriz de 9 x 9 con números enteros. El programa
//debe determinar si la matriz representa un sudoku.
//Autor: Rodrigo Hernandez Gongora

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func llenarMatriz(matriz *[9][9] int) {
// Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma,
// con time la conviertes en aleatoria ya que toma el tiempo como parametro
	// Usamos time, por que de no utilizarlo, la secuencia Rand es siempre la misma, con time la conviertes en aleatoria
	//ya que toma el tiempo como parametro
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			matriz[i][j] = rand.Intn(9)
			fmt.Printf("\nValor: %d, %d es de: %d\n", i+1, j+1, matriz[i][j])
		}
	}
}

func verificarSudoku(matriz [9][9] int ) int {
	 var flag=0
	 //    Verificamos que las columnas sean diferentes
    for i:=0; i<9; i++ {
        for j:=0; j<9; j++ {
            for columna:=0; columna<9; columna++ {
                if (matriz[i][j]==matriz[i][columna] && columna!=j) {
                    flag=1;
                }
            }
        }
    }
//    Verificamos que las filas sean diferentes
    for i:=0; i<9; i++ {
        for j:=0; j<9; j++ {
            for fila:=0; fila<9; fila++ {
                if (matriz[i][j]==matriz[fila][j] && fila!=i) {
                    flag=1;
                }
            }
        }
    }
//    Verificamos que los cuadros de 3x3 sean diferentes
    for i:=0; i<9; i++ {
        for j:=0; j<9; j++ {
            for fila:=(i/3)*3; fila<(i/3)*3+3; fila++ {
                for columna:=(j/3)*3; columna<(j/3)*3+3; columna++ {
                    if (fila!=1 && columna!=j && matriz[fila][columna]==matriz[i][j]) {
                        flag=1;
                    }
                }
            }
        }
    }
    return flag;
}

func main() {
	var matriz[9][9] int
	var flag=0
	llenarMatriz(&matriz)
	flag=verificarSudoku(matriz);
	if flag==0 {
		fmt.Printf("El sudoku es valido \n")
	}
	if flag==1 {
		fmt.Printf("El sudoku es invalido \n")
	}
}
//autor: Jorge Alberto Chi leon
//Crear una matriz con numeros del 1 al n*n que no se repitan y
//verificar si lo formado es un cuadrado magico
//Entradas: Tamaño de las filas, columnas
package main

import "fmt"
import "math/rand"
import "time"

func main() {
	const size = 1000
	rand.Seed(time.Now().UnixNano())
	var n int
	for ; ;  {
	//pedimos el tamaño de la amtriz cuadrada
	fmt.Println("Dame un numero natural del 1 al 11: ")
	fmt.Scan(&n)
	if ((n<=11)&&(n>0)){
    	break;
    }
	}
    min := 1
    max := n
    //se declaran las matrices y demás variables
	var inputCuadrado [size][size]int
	var contador int
	var randomizer int
	var randomizer2 int
	var temporal int
	var suma int
	var suma2 int
	var bandera1 int
	var bandera2 int
	var anterior int
	suma = 0
	suma2 = 0
	bandera1 = 0
	bandera2 = 0
	anterior = 0

	contador = 1;
	
	//se asignan los numeros de 1 a n*n
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			inputCuadrado[i][j] = contador
			contador = contador + 1
		}
	}
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Println("Matriz original / La posicion: [", i, "][", j, "]:", inputCuadrado[i][j])
		}
	}
	//se randomizan
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			randomizer = (rand.Intn(max - min) + min)
			randomizer2 = (rand.Intn(max - min) + min)
			temporal = inputCuadrado[i][j]
			inputCuadrado[i][j] = inputCuadrado[randomizer2][randomizer]
			inputCuadrado[randomizer2][randomizer] = temporal
		}
	}
	//se imprime la matriz ya randomizada
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Println("Matriz randomizada / La posicion: [", i, "][", j, "]:", inputCuadrado[i][j])
		}
	}
	//se calcula si es magico (muy raro xddd) el cuadrado
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			suma = suma + inputCuadrado[i][j]
		}
		if (i > 0){
			if (suma != anterior){
				bandera1 = 0;
				i = n + 1;
			}
		}
		anterior = suma;
		suma = 0;
	}
	if (bandera1 != 0){
		bandera1 = anterior;
	}
	anterior = 0
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			suma2 = suma2 + inputCuadrado[j][i]
		}
		if (i > 0){
			if (suma2 != anterior){
				bandera2 = 0;
				i = n + 1;
			}
		}
		anterior = suma2;
		suma2 = 0;
	}
	if (bandera2 != 0){
		bandera2 = anterior;
	}
	if (bandera1 == 0){
		fmt.Println("El cuadrado no es magico...");
	}else{
		if (bandera2 == 0){
			fmt.Println("El cuadrado no es magico...");
		} else if (bandera1 == bandera2){
			fmt.Println("El cuadrado es magico...");
		} else{
			fmt.Println("El cuadrado no es magico...");
		}
	}
}
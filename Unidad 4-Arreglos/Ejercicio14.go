//autor: Jorge Alberto Chi leon
//Algoritmo que lee una cadena de texto y un parrafo.
//verificar cuantas veces aparece la cadena en el parrafo.
//nota:sin espacios
//Entradas: Ambas cadenas
package main

import "fmt"
import "strings"

func main() {
	var inputCadena string
	var inputParrafo string
	fmt.Println("Dame la cadena:")
	fmt.Scanf("%s", &inputCadena)
	fmt.Scanf("%s", &inputParrafo)
	fmt.Println("Dame el parrafo:")
	fmt.Scanf("%s", &inputParrafo)
	fmt.Println("Veces que se repite: ")
	fmt.Println(strings.Count(inputParrafo, inputCadena))
}
//Corregido:Ahora si lee las dos cadenas. No puede contar con los espacios porque en go no existen los chars

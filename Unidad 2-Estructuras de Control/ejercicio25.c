/*# Ejercicio #25
Escribir un programa para mostrar los códigos ASCII de las letras mayúsculas y minúsculas. 
Autor: Roberto Llanes Montero (Equipo 'about:blank')

Dato de entrada: un caracter
Dato de salida: un entero que representa su valor ascii
 */ 

#include <stdio.h>
//Declaración de variables
char caracter;
int main(){
	//Leer el caracter
	scanf("%c", &caracter);        
	//Imprimir su valor decimal (código Ascii)
	printf("%d\n", caracter);
               
return 0;
}

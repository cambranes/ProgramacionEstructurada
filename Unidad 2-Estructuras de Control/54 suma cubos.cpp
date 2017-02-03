/*
Autor:Gabriel Gongora 01/02/17
Entradas:Unidad, decenas, centenas (int)
Salidas:suma de los cubos
Procedimiento general: el programa debe encontrar el numero(s) el cual la suma de los cubos de sus digitos debe ser igual al mismo numero 
*/

#include <stdio.h>
#include <Math.h>
int main() {
	/* Entrada
	se escanean las variables e imprime el mensaje*/
	int  unidad, decenas, centenas;
	
	printf("Programa para calcular los numeros de 3 digitos cuya suma de los");
	printf("cubos de su digitos de el mismo numero\n\n ");
	
	/*procedimiento
	analiza los numeros desde 100 hasta 999 y calcula los cubos de sus digitos*/
	
	for(int i = 100; i<= 999; i++){
		unidad = i%100;
		decenas = (i /10)%10;
		centenas = i/100;
		
		double unidad3 = pow(unidad,3);
		double decenas3 = pow(decenas, 3);
		double centenas3 = pow(centenas, 3);
		double numero2 = unidad3 + decenas3 + centenas3;
		if(numero2 == i){
	/*salida
	se imprimen los numeros cuyos cubos son iguales al numero*/		
			printf("la suma de los cubos de %d, %d y %d son iguales a %d\n", unidad, decenas, centenas, i);
			printf("porque %f + %f + %f es igual a %i", unidad3, decenas3, centenas3, i);
		}
		
	}
	
	return 0;
}
/* QA: La entrada y salida se dan automaticamente
La salida debe ser 7, 0 y 4*/

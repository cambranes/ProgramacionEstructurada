/*
Autor:Francisco Jesus Mac Cetzal 30/Enero/18
Entradas: tres numeros 
Salidas:si pertenece o no a la eccuacion de pitagoras
Procedimiento general: Escribir el programa para un programa en C que reciba tres números
enteros que representan dos catetos y una hipotenusa y que determine si
cumple con la ecuación de pitágoras.
a^2 +b^2 = c^2

Victor Ortiz Garcia 01/02/18
Entradas|Salidas|Resultado
4, 3, 5 |  Sí   |    +     
5,12,13 |  Sí   |    +      
4, 4, 4 |  No   |    +
36,77,85|  Sí   |    +
Comentarios: adjacente es con c, no con s, y ecuación no lleva doble c al final Francisco.- Corregido
*/
#include <stdio.h>
	
	int main(int argc, char *argv[]) {
	float catetoA = 0;
	float catetoB = 0;
	float hipotenusa = 0;
	char *resultado = "a";
	float potenciaAB = 0;
	float potenciaC = 0;
	int almacenEnt = 0;
	float almacenDec = 0;
	/*Entradas*/
	printf("%s", "ingrese el valor del cateto opuesto ");
	scanf("%f", &catetoA);
	printf("%s", "ingrese el valor del cateto adjacente ");
	scanf("%f", &catetoB);
	printf("%s", "ingrese el valor de la hipotenusa ");
	scanf("%f", &hipotenusa);
	/*Procesos*/
	potenciaAB = (catetoA*catetoA) + (catetoB*catetoB);
	potenciaC = hipotenusa*hipotenusa;
	almacenEnt = potenciaAB;
	almacenDec = almacenEnt + 0.5;
	if(potenciaAB<=almacenDec){
		potenciaAB = almacenEnt;
	} else{
		potenciaAB = almacenEnt + 1;
	}
	almacenEnt = potenciaC;
	almacenDec = almacenEnt + 0.5;
	if(potenciaC<=almacenDec){
		potenciaC = almacenEnt;
	} else{
			potenciaC = almacenEnt + 1;
	}
	if(potenciaAB==potenciaC){
		resultado = "cumple con la ecuacion a^2 + b^2 = c^2";
	}
	else{
		resultado = "no cumple con la ecuacion a^2 + b^2 = c^2";
	};
	/*Salidas*/
	printf("%s", resultado);
	return 0;
}

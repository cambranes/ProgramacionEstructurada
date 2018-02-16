/*
Autor: Zeus Sarmiento

Procedimiento general: Con un ciclo principal que compara las diferencias entre el acumulado actual y 
el acumulado si usaramos un siguiente termino, y 2 ciclos; para calcular factorial de 2n+1 y para calcular 
x a la 2n+1. Seguimos la formula, sumando, y una vez que la diferencia entre el acumulado actual y
el acumulado usando un siguiente termino sea menor o igual a la diferencia maxima, devolver el resultado.

entradas: El valor de x y la diferencia maxima entre la acumulacion actual de la suma y la acumulacion con un termino mas
salidas: El acumulado del Seno de x usando la formula

*/

#include <stdio.h>

float cicloGeneral(float, float);
float cicloExponente(float, float);
float cicloFactorial(int, int);

int main(int argc, char *argv[]) {
	float x, diferencia, resultadoFinal;
	
	/*Entradas*/
	
	printf("Introduzca el valor de x\n");
	scanf("%f",&x);
	printf("Introduzca la diferencia\n");
	scanf("%f",&diferencia);
	
	/*Procedimiento*/
	
	resultadoFinal = cicloGeneral(x,diferencia);
	
	/*Salidas*/
	
	printf("El Seno de %f es: %f",x,resultadoFinal);
	return 0;
}
/*
Funcion del procedimiento principal ciclo para calcular seno de x  
@param valor de x, diferencia maxima entre acumulados
@return aproximacion del seno de x
*/
float cicloGeneral( float valorX, float diferenciaMinima)
{
	int signo = 1, n = 3;
	float resultadoTerminoMas = valorX, resultado, diferenciaActual = diferenciaMinima + 1;
	float numerador = valorX, denominador = 1;
	
	while(diferenciaActual>diferenciaMinima)
	{
		resultado = resultadoTerminoMas;
		signo = signo * -1;
		numerador = cicloExponente(numerador,valorX);
		denominador = cicloFactorial(denominador, n);
		diferenciaActual = numerador / denominador;
		resultadoTerminoMas = resultado + (signo * diferenciaActual);
		n = n + 2;
	}
	return resultadoTerminoMas;
}
/*
Funcion del procedimiento para calcular x a la 2n+1 
Nota: No necesitamos el valor de n ya que hemos estado acumulando el valor de de x elevada, por lo que sólo
necesitamos elevar nuestro acumulado al cuadrado.
@param valor actual del exponente, valor de x
@return coseno de x
*/
float cicloExponente(float valorExponente, float valorX)
{
	valorExponente = valorExponente * valorX * valorX;
	return valorExponente;
}
/*
Función del procedimiento para calcular el factorial de 2n+1
Nota: El factorial se acumula en cada ciclo, por lo que solo lo multiplicaremos por n y por n-1
@param valor actual del factorial, n
@return factorial de 2n+1
*/
float cicloFactorial(int valorFactorial, int valorN)
{
	valorFactorial = valorFactorial * valorN * (valorN-1);
	return valorFactorial;
}

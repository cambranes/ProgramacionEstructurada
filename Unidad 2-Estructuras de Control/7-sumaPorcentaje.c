/*Autor: Víctor Ortiz García (16/Febrero/18 - 8:00 AM)

Procedimiento General: Captura el número, y según qué tan grande sea se le va sumar ya sea el 5%, 15%, o 20% de sí mismo.

*/
#include <stdio.h>
float lectura(float *);
float porcentajeAumentado(float);
//Entrada
int main(int argc, char *argv[]) {
	float numero,resultado;
	numero=0; resultado=0;
	printf("Capturar el numero:\n");
	scanf("%f", &numero);
	
	resultado=porcentajeAumentado(numero);
	
	printf("El numero final es %f", resultado);
	return 0;
}

/*@param: numerofinal: toma el valor capturado, y según su valor se le va aumentando
 @return: numerofinal: regresa la misma variable, ya aumentada por el procedimiento*/
float porcentajeAumentado(float numerofinal)
{
	float numero=numerofinal;
	if (numero>1000)
	{
		numerofinal=numero*1.05;
		if (numero>3000)
		{
			numerofinal=numerofinal+numero*.1;
			if (numero>5000)
			{
				numerofinal=numerofinal+numero*.05;
			}
		}
	}
	return numerofinal;
}

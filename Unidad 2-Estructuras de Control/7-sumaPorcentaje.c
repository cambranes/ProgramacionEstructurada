/*
QA Francisco Jesus Mac Cetzal 01/02/2018 06:25 pm
Entradas./.Salidas./.Resultado
..4000.../..4600.../..4600...OK
..3000.../..3150.../..3150...OK
...-1..../..Error../....-1...XX (el ejercicio pide que solo se concideren todos los positivos)
....0..../....0..../....0....OK
..30000../..36000../..36000..OK
no incluyo bloque de comentarios
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float numero, numerofinal;
	numero=0; numerofinal=0;
	printf("Capturar el numero:\n");
	scanf("%f", &numero);
	numerofinal=numero;
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
	printf("El numero final es %f", numerofinal);
	return 0;
}


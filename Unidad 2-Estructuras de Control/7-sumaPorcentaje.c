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


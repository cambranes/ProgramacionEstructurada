#include <stdio.h>

int main() {
	float numero;
	int v = 0;

	do {
		printf("Dame un numero positivo:\n");
		scanf("%f", &numero);
		if(numero > 0){
			v=1;
			if(numero > 5000){

				numero = (numero + (numero*.20));

			}else if(numero > 3000){

				numero = (numero + (numero*.15));

			}else if(numero > 1000){

				numero = (numero + (numero*.05));
			}
		}else printf("El numero es negativo\n");

	} while(v==0);

	printf("\n El numero es: %f", numero);

	return 0;
}


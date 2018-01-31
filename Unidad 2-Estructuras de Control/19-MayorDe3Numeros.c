#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float numero1, numero2, numero3, mayor;
	
	printf("Ingrese 3 numeros para determinar cual es el mayor\n");
	scanf("%f %f %f", &numero1, &numero2, &numero3);
	
	if (numero1 > numero2){
		if (numero1 > numero3){
			mayor = numero1;
		}
		else{
			if (numero3 > numero2){
				mayor = numero3;
			}
			else{
				mayor = numero2;
			}
		}
	}
	else{
		if (numero1 < numero3){
			if (numero3 > numero2){
				mayor = numero3;
			}
			else{
				mayor = numero2;
			}
		}
	}
	
	printf("El numero mayor es: %f", mayor);
	return 0;
}


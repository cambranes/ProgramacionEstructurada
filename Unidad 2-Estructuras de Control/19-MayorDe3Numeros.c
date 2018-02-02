/*
	QA Francisco Jesus Mac Cetzal 01/02/2018 07:28 pm
	Entradas./.Salidas./.Resultado
	.1,3,4.../...4...../....4....OK
	.7,2,9.../...9...../....9....OK
	.-3,-9,1./...1...../....1....OK
	.0,0,0../....0...../....0....OK
	.5,8,0../....8...../....0....XX (cuando el numero mayor esta en la pocision central el resultado ssiempre es 0)
	Notas.- no se añadio el bloque de comentarios, no se le dio formato al codigo
	Entradas
	Procesos
	Salidas
*/
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


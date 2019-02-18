/*
Autor: Amílcar A. Ramírez Patrón
Entradas: El dia, mes y año de dos fechas distintas
Proceso: Verificar, en orden año, mes, día, qué numero de ambas fechas es mayor y escribir la fecha que es, a la vez
que procurar continuar en orden en caso de empate, hasta que se concluya que ambas fechas son iguales
Salidas: La fecha mayor
*/
#include <stdio.h>

void leerAmbasFechas(int*, int*, int*, int*, int*, int*);
void compararAmbasFechas(int*, int*, int*, int*, int*, int*);
	
/*15.Escribir el programa que lea dos fechas (día-mes-año) con tres cantidades
enteras e imprima la mayor, si son la misma imprima son iguales.
*/
int main(int argc, char *argv[]) {
	//entrada
	int diauno, mesuno, anouno, diados, mesdos, anodos;
	leerAmbasFechas(&diauno, &mesuno, &anouno, &diados, &mesdos, &anodos);
	//proceso
	compararAmbasFechas(&diauno, &mesuno, &anouno, &diados, &mesdos, &anodos);
	return 0;
}

void leerAmbasFechas(int *diauno, int *mesuno, int* anouno, int *diados, int *mesdos, int *anodos){
	scanf("%d", diauno);
	scanf("%d", mesuno);
	scanf("%d", anouno);
	scanf("%d", diados);
	scanf("%d", mesdos);
	scanf("%d", anodos);
}


void compararAmbasFechas(int *diauno, int *mesuno, int* anouno, int *diados, int *mesdos, int *anodos){
	if(*anouno < *anodos){
		printf("La segunda fecha ingresada es mayor: %d %d %d\n", *diados, *mesdos, *anodos);
	}
	if(*anouno > *anodos){
		printf("La primera fecha ingresada es mayor: %d %d %d\n", *diauno, *mesuno, *anouno);
	}
	else if (*anouno = *anodos){
		if(*mesuno < *mesdos){
			printf("La segunda fecha ingresada es mayor: %d %d %d\n", *diados, *mesdos, *anodos);
		}
		if(*mesuno > *mesdos){
			printf("La primera fecha ingresada es mayor: %d %d %d\n", *diauno, *mesuno, *anouno);
		}
		else if(*mesuno = *mesdos){
			if(*diauno < *diados){
				printf("La segunda fecha ingresada es mayor: %d %d %d\n", *diados, *mesdos, *anodos);
			}
			if(*diauno > *diados){
				printf("La primera fecha ingresada es mayor: %d %d %d\n", *diauno, *mesuno, *anouno);
			}
			else if(*diauno = *diados){
				printf("Las fechas son las mismas\n");
			}
		}
	}
}

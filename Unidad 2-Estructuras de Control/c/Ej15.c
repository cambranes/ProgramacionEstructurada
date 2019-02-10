/*
Autor: Guillermo Canto 2/3/2019
Entradas: 2 fechas representadas por cantidades enteras con el formato dd/mm/aaaa
Salidas: La fecha mayor, o si ambas son iguales
Procedimiento general: Compara los años, meses y dias para determinar si son iguales, de no serlo 
determina la fecha mayor.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int day1;
	int day2;
	int month1;
	int month2;
	int year1;
	int year2;
	printf("Ingrese las fechas con el formato dd/mm/aaaa.\n");
	printf("Ingrese el dia 1: ");
	scanf("%d", &day1);
	printf("Ingrese el mes 1: ");
	scanf("%d", &month1);
	printf("Ingrese el año 1: ");
	scanf("%d", &year1);
	printf("Ingrese el dia 2: ");
	scanf("%d", &day2);
	printf("Ingrese el mes 2: ");
	scanf("%d", &month2);
	printf("Ingrese el año 2: ");
	scanf("%d", &year2);
	if (year1 != year2){
		if (year1 > year2){
			printf("La fecha mayor es: %d / %d / %d ",day1,month1,year1 );
		} else{
			printf("La fecha mayor es: %d / %d / %d ",day2,month2,year2 );
		}
	} else if (month1 != month2){
		if (month1 > month2){
			printf("La fecha mayor es: %d / %d / %d ",day1,month1,year1 );
		} else {
			printf("La fecha mayor es: %d / %d / %d ",day2,month2,year2 );
		}
	} else if (day1 !=  day2){
		if (day1 > day2){
			printf("La fecha mayor es: %d / %d / %d ",day1,month1,year1 );
		} else {
			printf("La fecha mayor es: %d / %d / %d ",day2,month2,year2 );
		}
	} else {
		printf("Las fechas son iguales"); 
	}
	return 0;
}


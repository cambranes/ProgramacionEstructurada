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
  
	do {
		printf("Ingrese el dia 1: ");
		scanf("%d", &day1);
	} while ( day1 <= 0 || day1 >31 );
	do {
		printf("Ingrese el mes 1: ");
		scanf("%d", &month1);
	}  while ( month1 <= 0 || month1 > 12);
	do {
		printf("Ingrese el año 1: ");
		scanf("%d", &year1);
	} while ( year1 < 0 );
	do {
		printf("Ingrese el dia 2: ");
		scanf("%d", &day2);
	} while ( day2 <= 0 || day2 >31 );
	do {
		printf("Ingrese el mes 2: ");
		scanf("%d", &month2);
	}  while ( month2 <= 0 || month2 > 12);
	do {
		printf("Ingrese el año 2: ");
		scanf("%d", &year2);
	} while ( year2 < 0 );
	


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

/*
QA: Realizó: Jose Mendez
Entradas: (10/05/06 - 05/12/78), (-6/-9/-9 - -9/-6/-6)
Salidas: Ok, Ok
Funciona correctamente
*/


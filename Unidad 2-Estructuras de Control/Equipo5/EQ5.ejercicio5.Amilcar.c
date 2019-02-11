/*
  Entradas: El año que es propuesto por el usuario (linea 10, 11).
  Salidas: El año es bisiesto o no.
  Procedimiento general:Para la parte más "complicada" que es discernir cuando los años múltipos de 100 son también de 400, usé la evaluación
  de los módulos 100 y 400. A su vez, para sólo hacer el de 4, usé el módulo de 4.
*/
#include "stdio.h"
#include "math.h"

int main() {
	int x;
	scanf("%d",&x);
	if ((x % 100) == 0) {
		if ((x % 400) == 0){
			printf("Si es bisiesto\n");
		}
		else{
			printf("No es bisiesto\n");
		}
	}
	else{
		if ((x % 4) == 0) {
			printf("Si es bisiesto\n");
		}
		else{
			printf("No es bisiesto\n");
		}
	}
	return 0;
}
/*
QA: Luis Gerardo Leon Ortega
entradas: el año que es propuesto por el usuario
salidas: el año es bisiesto o no */

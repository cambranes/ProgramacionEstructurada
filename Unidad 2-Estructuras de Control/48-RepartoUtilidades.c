/*
Autor:Francisco Jesus Mac Cetzal 30/Enero/18
Entradas: Sueldo base y antiguedad
Salidas: Sueldo total y comision a pagar
Procedimiento general: Escribe el programa que lea el sueldo del empleado y su antig�edad y que
calcule su incentivo, imprimiendo su sueldo base, el incentivo y el sueldo a
pagar. Suponer que no se conoce el n�mero de empleados
*/

#include<stdio.h>

int lect(float *, int *);
void bono(float *, int *, int, float *, float *);
void print(float *,int,float *,float *, int *);

int main(){
	float sueldoBase[1000];
	float incentivo[1000];
	int antiguedad[1000];
	float sueldoTotal[1000];
	int trabajadores=0;
	/*Entradas*/
	trabajadores = lect(&sueldoBase[1000],&antiguedad[1000]);
	/*Procedimiento*/
	bono(&sueldoBase[1000], &antiguedad[1000], trabajadores, &incentivo[1000], &sueldoTotal[1000]);
	/*Salidas*/
	print(&sueldoBase[1000], trabajadores, &incentivo[1000], &sueldoTotal[1000], &antiguedad[1000]);
}
/*
@param sueldo[] "sueldo base" anti[] "antiguedad"
@return empleados "numero de empleados que fueron ingresados"
*/
int lect(float sueldo[1000], int anti[1000]){
	int contador = 0, continuar = 0, empleados=0;
	do{
		printf("%s, %u, %s" , "Ingrese el Sueldo base del empleado numero ", ++contador, " 	" );
		scanf("%f", &sueldo[contador] );
		printf("%s, %u, %s" , "Ingrese la antiguedad del empleado numero ", contador, " 	" );
		scanf(" %i", &anti[contador] );
		if(anti[contador]<=0|| anti[contador]>15){
			contador -= 1;
			empleados -=1;
			continuar = 1;
			printf("%s", "ingrese una antiguedad valida, no menor que 1 y no mayor que 15	\n");
		} else{
			printf("%s", "¿Quiere seguir ingresando valores? si (1) no (cualquier otro numero)	 ");
			scanf("%i", &continuar);
		};
		empleados += 1;
	} while(continuar==1);
	return empleados;
}
/*
@param sueldo[] "sueldo base" anti[] "antiguedad" valor "#de empleados" incentivo[] "incentivo a pagar por cada empleados" pagoTotal[] "total a pagar por cada empleado"
@return N/A
*/
void bono(float sueldo[1000], int anti[1000], int valor, float incentivo[1000], float pagoTotal[1000]){
	int porcentaje = 0, i = 0;
	int Porcentaje1 =1, Porcentaje2 = 3, Porcentaje3 = 5, Porcentaje4 = 7;
	for(i=1; i<=valor; i++){
		porcentaje = 0;
		if(anti[i]<=3){
			porcentaje = Porcentaje1;
		} else{
			if(anti[i]<=6){
				porcentaje = Porcentaje2;
			} else{
				if(anti[i]<=9){
					porcentaje = Porcentaje3;
				} else{
					porcentaje = Porcentaje4;
				}
			}
		}
		incentivo[i] = (sueldo[i] * porcentaje) / 100;
		pagoTotal[i] = sueldo[i] + incentivo[i];
	}
}
/*
@param sueldo[] "sueldo base" anti[] "antiguedad" valor "#de empleados" incentivo[] "incentivo a pagar por cada empleados" pagoTotal[] "total a pagar por cada empleado"
@return N/A
*/
void print(float sueldo[1000], int valor, float incentivo[1000], float pagoTotal[1000], int anti[1000]){
	for(int i=1;i<=valor; i++){
		printf("%s, %i, %s, %f, %s, %i", "Empleado # ", i, " sueldo base: ", sueldo[i], " antiguedad: ", anti[i]);
		printf("%s", "			\n");
		printf("%s, %f, %s, %f", "		 Incentivo: ", incentivo[i], " Sueldo a pagar: ", pagoTotal[i]);
		printf("%s", "			\n");
	}
}

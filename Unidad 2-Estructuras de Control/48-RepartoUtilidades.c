#include <stdio.h>

int main(int argc, char *argv[]) {
	int Porcentaje1 = 1;
	int Porcentaje2 = 3;
	int Porcentaje3 = 5;
	int Porcentaje4 = 7;
	float sueldoBase[1000];
	float incentivo[1000];
	int antiguedad[1000];
	float sueldoTotal[1000];
	int contador = 0;
	int porcentaje;
	int continuar;
	int i;
	/*Entradas*/
	do{
		contador = contador + 1;
		printf("%s, %u, %s" , "Ingrese el Sueldo base del empleado numero ", contador, " 	" );
		scanf("%f", &sueldoBase[contador] );
		printf("%s, %u, %s" , "Ingrese la antiguedad del empleado numero ", contador, " 	" );
		scanf(" %i", &antiguedad[contador] );
		if(antiguedad[contador]<=0|| antiguedad[contador]>15){
			contador = contador - 1;
			continuar = 1;
			printf("%s", "ingrese una antiguedad valida, no menor que 1 y no mayor que 15	\n");
		} else{			
			printf("%s", "¿Quiere seguir ingresando valores? si (1) no (cualquier otro numero)	 ");
			scanf("%i", &continuar);
		};
	} while(continuar==1);
	/*Procesos*/
	for(i=1; i<=contador; i++){
		porcentaje = 0;
		if(antiguedad[i]<=3){
			porcentaje = Porcentaje1;
		} else{
				if(antiguedad[i]<=6){
					porcentaje = Porcentaje2;
				} else{
						if(antiguedad[i]<=9){
							porcentaje = Porcentaje3;
						} else{
								porcentaje = Porcentaje4;
							}
						}
					}
		incentivo[i] = (sueldoBase[i] * porcentaje) / 100;
		sueldoTotal[i] = sueldoBase[i] + incentivo[i];
	}
	/*Salidas*/
	for(int i=1;i<=contador; i++){
		printf("%s, %i, %s, %f, %s, %i", "Empleado # ", i, " sueldo base: ", sueldoBase[i], " antiguedad: ", antiguedad[i]);
		printf("%s", "			\n");
		printf("%s, %f, %s, %f", "		 Incentivo: ", incentivo[i], " Sueldo a pagar: ", sueldoTotal[i]);
		printf("%s", "			\n");
	}
	return 0;
}

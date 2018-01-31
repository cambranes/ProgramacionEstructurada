#include <stdio.h>
	
	int main(int argc, char *argv[]) {
	float catetoA = 0;
	float catetoB = 0;
	float hipotenusa = 0;
	char *resultado = "a";
	float potenciaAB = 0;
	float potenciaC = 0;
	int almacenEnt = 0;
	float almacenDec = 0;
	/*Entradas*/
	printf("%s", "ingrese el valor del cateto opuesto ");
	scanf("%f", &catetoA);
	printf("%s", "ingrese el valor del cateto adjasente ");
	scanf("%f", &catetoB);
	printf("%s", "ingrese el valor de la hipotenusa ");
	scanf("%f", &hipotenusa);
	/*Procesos*/
	potenciaAB = (catetoA*catetoA) + (catetoB*catetoB);
	potenciaC = hipotenusa*hipotenusa;
	almacenEnt = potenciaAB;
	almacenDec = almacenEnt + 0.5;
	if(potenciaAB<=almacenDec){
		potenciaAB = almacenEnt;
	} else{
		potenciaAB = almacenEnt + 1;
	}
	almacenEnt = potenciaC;
	almacenDec = almacenEnt + 0.5;
	if(potenciaC<=almacenDec){
		potenciaC = almacenEnt;
	} else{
			potenciaC = almacenEnt + 1;
	}
	if(potenciaAB==potenciaC){
		resultado = "cumple con la ecuaccion a^2 + b^2 = c^2";
	}
	else{
		resultado = "no cumple con la ecuaccion a^2 + b^2 = c^2";
	};
	/*Salidas*/
	printf("%s", resultado);
	return 0;
}

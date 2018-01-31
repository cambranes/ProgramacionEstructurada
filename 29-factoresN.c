/*Carlos Eduardo Avila Criollo
  Este programa da los factoriales de un numero n*/
#include<stdio.h>
int main() {
	
	/*Declaracion de variables*/
	int a=1, contador=1, division, factornegativ[1000], factornegativo[1000], factorpositiv[1000], factorpositivo[1000], numeroo;
	/*entrada de datos*/
	printf("dame el numero del que quieres saber sus factores\n");
	scanf("%d",&numeroo);
	
	/*Proceso:
	  en esta parte se comprueban los numeros que
	  pueden dividir al numero n y dan como residuo 0
	  y luego se toman esos valores como factores, tambien
	  se toman sus contrapartes negativas, el
	  proceso se detiene cuando contador sea 
	  => a division*/
	do {
		if (numeroo%contador==0) {
			division = numeroo/contador;
			factorpositivo[contador-1] = division;
			factorpositiv[contador-1] = contador;
			factornegativo[contador-1] = (contador*(-1));
			factornegativ[contador-1] = (division*(-1));
			
			/*salida de satos*/
			printf("%d y %d son factores \n",factorpositivo[contador-1],factorpositiv[contador-1]);
			printf("%d y %d tambien son factores \n",factornegativo[contador-1],factornegativ[contador-1]);
		}
		contador = contador+1;
	} while (contador<division);
	return 0;
}


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

/*QA Jorge Anzures

Recibe bien las entradas e imprime las salidas correctas(en caso de los positivos)
cuando recibe negativos (lo permite) solo detecta los factores de la manera
(x y -1)
(-x y 1)
prueba 1:
Entrada:
20
Salida
20 y 1 son factores
-1 y -20 tambien son factores
10 y 2 son factores
-10 y -2 tambien son factores
5 y 4 son factores
-5 y -4 tambien son factores
prueba 2:
Entrada
5
Salida
5 y 1 son factores
-1 y -5 tambien son factores
prueba 3
Entrada -20
Salida
-20 y 1 son factores
-1 y 20 tambien son factores
*/

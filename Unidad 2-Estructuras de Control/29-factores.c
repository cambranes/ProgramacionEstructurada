/*Carlos Eduardo Avila Criollo
  Este programa da los factoriales de un numero n*/
  
  /*QA: se probo el programa con los valores 10, 100, y 99
        y los datos de salida fueron correctos para 10 los factores fueron
		(10, 1 y 5, 2) y sus contrapartes negativas para 100 fueron 
		(100, 1, 50, 2, 25, 4, 20 , 5 y 10) y para 99 fueron (99, 1 33, 3 11, 9)
		y sus contrapartes  negativas sus negativos solo con el detalle 
	    que la impresion de el ultimo factor se repite para algunos
		numeros como 100*/
		
#include<stdio.h>

void factores (int x);

int main() {
	/*Declaracion de variables*/
	int numeroo;
	/*entrada de datos*/
	printf("dame el numero del que quieres saber sus factores\n");
	scanf("%d",&numeroo);
	
	/*esta funcion calculo los factoriales
	de un numero n entero positivo dado anteriormente*/
	factores(numeroo);
	
	
	return 0;
}

void factores (int x){
	/*declaracion de variables*/
	int factornegativ[1000], factornegativo[1000], factorpositiv[1000], factorpositivo[1000], a=1, contador=1, division;
	/*Proceso:
	en esta parte se comprueban los numeros que
	pueden dividir al numero n y dan como residuo 0
	y luego se toman esos valores como factores, tambien
	se toman sus contrapartes negativas, el
	proceso se detiene cuando contador sea 
	=> a division*/
	do {
		if (x%contador==0) {
			division = x/contador;
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
	
}

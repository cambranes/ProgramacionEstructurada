#include <stdio.h>
/*
Ejercicio 50
Autor Erick Cardenas
*/
int Precision();
int suma(int);
void E(int);
int main()
{
	int a=Precision();
	E(a);
	return 0;
}
int Precision(){
	int a=0;
	//se imprime la leyenda y guardan los valores de a
	printf("Escribe la precision deseada\n");
	scanf("%d", &a);
	return a;
}
int suma(int a){
	//inicializacion de variables
	int facts = 1, fact = 1;
	//se obtienen los valores factoriales desde a hasta 1
	for (int b = 1;b<a; b++){
		fact = fact * b;
		//facts guarda el valor de la suma de factoriales
		facts = (facts + fact);
	}
	return facts;
}
void E(int a){
//se inicializa b llamando a la funcion a 
	int b=suma(a);
	printf("la funcion de %d = 2+1/%d\n",a,b);
}

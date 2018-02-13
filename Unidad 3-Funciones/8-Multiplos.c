#include <stdio.h>
/*Ejercicio 8
Autor:Carlos Alvarez*/
/*Descripcion general:Algortimo para determinar si un numero es multiplo o no de otro*/
int Rnumero1();
int Rnumero2();
void Multiplo(int a,int b);
int main(int argc, char *argv[]) {
int numero1=Rnumero1();
int numero2=Rnumero2();
Multiplo(numero1,numero2);
}
int Rnumero1(){
	int numero1=0;
	printf("introduzca un numero positivo o negativo:" );
	scanf("%d",&numero1);
	return numero1;
}
int Rnumero2(){
	int numero2=0;
	printf("introduzca un numero positivo o negativo:" );
	scanf("%d",&numero2);
	return numero2;
}
void Multiplo(int numero1,int numero2){
	if(numero1%numero2==0)
	{
		printf("%d es multiplo de %d",numero1,numero2);
	}
	else
	{
		printf("%d no es multiplo de %d",numero1,numero2);
	}
}

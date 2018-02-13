#include <stdio.h>
/*Ejercicio 2
autor:Carlos Alvarez*/
/*Descripcion general:Algortimo para determinar si un numero es mayor,menor o igual con respecto a otro*/
int Rnumero1();
int Rnumero2();
void MayorMenor(int numero1,int numero2);
int main ()
{
int numero1=Rnumero1();
int numero2=Rnumero2();
MayorMenor(numero1,numero2);
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
void MayorMenor(int numero1,int numero2){
	if(numero1>numero2){
		printf("El numero %d es mayor\n",numero1);
	}
	else{
		if(numero2>numero1){
		printf("El numero %d es mayor \n",numero2);
			}
			else
			{
			printf("Los numeros son iguales");
			}
		}
	}

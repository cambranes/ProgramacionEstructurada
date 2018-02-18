/*Autor: José de la Rosa Baeza Pérez
Intruccion: el programa debe de calcular la aproximacion del numero pi*/



#include<stdio.h>

int power (int,int);//se utiliza para calcular las potencias de los digitos
float salida (int);//nos ayuda para imprimir las salidas

int main() {

	int presicion=0;
	float digitos=0;
	printf("De cuanto es la presicion que desea utilizar ");
	scanf("%d",&presicion);//aqui se lee la presicion del de la formula
	digitos=salida(presicion);//se inrgesa la presicion para ir calculando el numero de pi
	printf ("%f", digitos);//se imprime el valor pi 

}
//@param:aqui se hace el procedimento para calcular el numeor de pi
float salida (int w){
		int i,g=0,e=0;
		float f=0;
		
		for (i=1;i<=w;i++){
			g=i+1;
			e=((2*i)-1);
			
				f=f+((1.0 *(power(-1,g)))/e);//se llama a al funcion el power para calcular la potencia que se necesita	
		}
		f*=4;
		return f;	
}//@return:regresa el numero de pi
		
	//@param:esta funcion nos ayuda para calcular la potencia del numero 
int power(int base,int w)
	{
		int i,p;
		p=1;
		for(i=1;i<=w;i++)
		{
			
			p=p*base;
		}
		return p;	
	}//@return:regresa el valor de la potencia

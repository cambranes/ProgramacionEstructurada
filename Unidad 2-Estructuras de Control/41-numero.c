
/*Autor: José De La Rosa Baeza Pérez
Intoduccion: El programa va recibir N canditad de numeros,
y va determinar que numero es mayor y que numero es menor*/

#include <stdio.h>

	int cuenta(int);//se leen los datos 
	int mayor (int[],int);//se calcula mayor
	int menor(int[],int);//se calcula el numero menor 
	void salida1(int);//se imprime el numero mayor
	void salida2(int);//se imprime el numero menor 
	int main()
{
	int N;/*En este lugar se definen las variables que voy a utilizar*/
	
	printf("cuantos numeros vas a ingresar? ");
	scanf("%d",&N);
	printf("Ingresa los numeros ");
	printf("\n");
	cuenta (N);
	
	
return(0);
}


//@param:se cuentan los numeros aqui
int cuenta (int q){
	int numeros[q],i=0,Ma,me;
	do
	{
		scanf("%d",&numeros[i]);
		i=i+1;
	} while(i!=q);
		Ma=mayor(numeros,i);
		me=menor(numeros,i);	
		salida1(Ma);
		printf("\n");
		salida2(me);
	
	return 0;
	//@return:nada
}
//@param:hace el procedimento para calcular el numero mayor
int mayor(int numeros[],int x){
	int M=numeros[0],i;
	for (i=0;i<x;i++){
		if (numeros[i]>M){
			M=numeros[i];
		}
		
	}
return M;
	//@return:regresa el numero mayor
}
//@param:hace el procedimento para calcular el numero mayor
int menor(int numeros[],int x){
	int m=numeros[0],i;
	for (i=0;i<=x;i++){
		if (numeros[i]<m){
			m=numeros[i];
		}
		
	}
	return m;
}//@return:regresa el numero menor

void salida1(int a) {//@param:imprime el numoer mayor
	printf("El numero mayor es %d",a); //@return:imprime el numero mayor 
}
void salida2(int b) {//@param:imprime el numero menor
	printf("El numero menor es %d",b);//@return:imprime el numero menor
}



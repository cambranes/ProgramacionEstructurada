30./*Dados 2 numeros enteros Determinar su MCD
Autor:Kristian Pantoja
Entradas: #Enteros
Salida: #Reales*/
#include<stdio.h>

int main() {
    /*Entradas*/
	int a;
	int b;
	int i;
	int ban;
	int aux;
	int min;
	aux=57000;
	min=57000;
	ban=1;
	
	/*Procedimiento*/
	printf("Escribir el primer numero a Usar   ");
	scanf("%i",&a);
	printf("Escribir el segundo numero a Usar   ");
	scanf("%i",&b);
	
	/*Salidas*/
	for(i=a;i>1;i--){
		if(a%i==0){
			aux=a/i;
			if(aux>ban){
				ban==aux;
				min=i;
			}
		}
	}
	if(ban==1){
		printf("El MCD es %d \n",aux);
	} else
	   printf("Uno de los numeros es primo");
	if (ban==0)
		printf("El MDC es %d \n",min);
   
			
return 0;
}


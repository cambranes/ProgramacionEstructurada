
#include<stdio.h>

int main() {
	int a;
	int b;
	int i;
	int ban;
	int aux;
	int min;
	aux=57000;
	min=57000;
	ban=1;
	printf("Escribir el primer numero a Usar   ");
	scanf("%i",&a);
	printf("Escribir el segundo numero a Usar   ");
	scanf("%i",&b);
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


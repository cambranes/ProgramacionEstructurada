
/*Autor: José Marcos Morales Gómez 31/Enero/2017
Entradas: num, i, cont, j. 
Salidas: sp.
Procedimiento general:
Mediante la evaluacion de numeros saber cuales son los primeros n numeros primos
y sumarlos.
*/

#include <stdio.h>
#include <stdlib.h>
	int main(){
		int num,i, n, cont, j, sp;
		n=4;
		cont=2;
		j=0;
		int A[1000];
		printf("Ingrese los primeros n numeros primos: \n");
		scanf("%i",&num);
		if(num>2){
			sp=5;
			while(cont<num){
				i=2;
				while(i<=n){
					if(i==n){
						A[j]=n;
						sp=sp+(A[j]);
						j++;
						cont=cont+1;
					}else{
						if(n%i==0){
							i=n;
						}
					}
					i=i+1;
				}
				n=n+1;
			}
		}else{
			if(num>0){
				if(num==1){
					printf("La suma es 2");
				}else{
					printf("La suma es 5");
				}
			}else{
				printf("Ingrese numeros positivos");
			}
		}
	printf("La suma de los primeros n numeros primos es %i", sp);
	return 0;
}


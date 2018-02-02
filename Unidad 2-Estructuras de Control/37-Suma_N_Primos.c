
/*Autor: José Marcos Morales Gómez 31/Enero/2017
Entradas: num, i, cont, j. 
Salidas: sp.
Procedimiento general:
Mediante la evaluacion de numeros saber cuales son los primeros n numeros primos
y sumarlos.

QA Francisco Jesus Mac Cetzal 01/02/2018 12:00 pm
Entradas./.Salidas./.Resultado
...5...../..28...../...28..OK
...21..../..712..../..712..OK
...42..../.3447..../.3447..OK
...168.../.76127.../.76127.OK
...-1..../..Error../.Error.OK(detecta correctamente el ingreso de numeros negativos)

Notas.- No se puso formato al codigo
Entradas
Procesos
Salidas
una de las impresiones no salta de linea y se ocupo una libreria adicional "<stdlib.h>"

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


/*
Autor: Guillermo Canto Fecha:2/3/2019
Entradas: 
n - numero de tablas de multiplicar a imprimir
j - multiplo con el cual empiezan las tablas
k - multiplo con el cual terminan las tablas
Salidas:
"Las primeras n tablas de multiplicar que incluyan desde el valor j hasta 
el valor k"
Procedimiento general: 
Calcula e imprime las primeras n tablas de multiplicar delimitadas por 
las variables j y k
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,n,j,k;
	int c = 0;
	printf("Ingrese n: ");
	scanf("%d", &n);
	printf("Ingrese j: ");
	scanf("%d", &j);
	printf("Ingrese k: ");
	scanf("%d", &k);
	for (i=1; i<= n; i++){
		while (j <= k){
			printf("%d x %d = %d\n", i ,j , i*j);
			j++;
			c++;
		}
		j=j-c;
		c=0;
		printf("\n");
	}
	
	return 0;
}

/*
QA: Realizó: Jose Mendez
Entradas: (5,0,9) , (-9,5,-9), (6,-5,2)
Salidas: OK,   Error,    Ok
Funciona bien, solamente falla cuando el valor n, es un numero menor a 1
*/

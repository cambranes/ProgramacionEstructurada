/*
Autor:Equipo 4 Jose Antonio Barrera Morales 29/Enero/17
Entradas:n matriz a de nxn
Salidas:elementos de la diagonal inferior de la matriz
Procedimiento general: usa doble ciclo for para la impresion y entrada de datos
para la impresion usa el if para seleccionar si seguira imprimiendo en la misma linea
*/

#include <stdio.h>
int main(int argc, char *argv[]) {
	/*Entradas*/
	int n,i,j;
	printf("inserta el tama�o de la matriz\n");
	scanf("%d",&n);
	int a[n][n];
	/*Las variables i,j se usan para moverse entre la matriz*/
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=((i+1)*10)+j+1;
		}
	}
	/*Procedimiento*/
	/*Salidas*/
	/* se compara i con j porque en la parte inferior de la matris i siempre es mayor que j
	y cuando son iguales la salida debe saltar linea*/
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			if(i>=j){
				if(i<=j){
					printf("     %d\n",a[i][j]);
				}
				else{
					printf("     %d",a[i][j]);
				}
			}

		}
	}
	return 0;
}

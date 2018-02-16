/*
Autor: César Alejandro González Ortega
Entradas: int lectura
Salidas: int jContador
Procedimiento general:
Se lee un valor n (llamado lectura). No se hacen operaciones además de imprimir.
Se van a imprimir un total de n filas, cada una contando desde 1 hasta
su número de fila.
*/
#include <stdio.h>
void imprimirSecuencia(int);
int leer();
int main(int argc, char *argv[]) {
	int lectura;
	lectura=leer();
	imprimirSecuencia(lectura);
	return 0;
}
/*
Se lee lectura
@param:
@return:lectura
*/
int leer(){
	int lectura;
	printf("Ingresar valor hasta donde se va a contar ");
	scanf("%d",&lectura);
	return lectura;
}
/*
Se imprimen las n línas, cada una contando desde 1 hasta su número de línea
@param: limite
@return:
*/
void imprimirSecuencia(int limite){
	int iContador,jContador;
	if(limite>0){
		/*Ciclo que da el número de línea*/
		for(iContador=1; iContador<=limite;iContador++){
			/*Ciclo que cuenta desde 1 hasta iContador*/
			for(jContador=1;jContador<=iContador;jContador++){
				/*Salidas*/
				printf("%d ",jContador);
			}
			/*Salto de línea*/
			printf("\n");
		}
	}
}

/*
Autor: Ricardo Serrano
Entrada: numeroDeDatos
Salida: multiplicador
Proceso: calcular los n multiplos de 7
*/
#include <stdio.h>
// prototipo de tablita
void tablita(int);

int main(int argc, char *argv[]) {
	
	/*
	Variable de entrada tipo entera: numeroDeDatos
	*/
	int numeroDeDatos;
	
	/*Entrada de datos*/
	printf("Ingresa un numero limite: ");
	scanf("%d",&numeroDeDatos);
	tablita(numeroDeDatos);
	return 0;
}
/*
Funcion void tablita
Calcula los n multiplos de 7
@param numeroDeDatos, el valor que ingresa el usuario
*/
void tablita(int numeroDeDatos)
{
		int i,multiplicador;
		for(i =1;i<=numeroDeDatos;i++)
	{
		multiplicador = i*7;
		
		/*Salida de datos*/
		printf("%d * 7 = %d \n",i,multiplicador);
		
	}
}

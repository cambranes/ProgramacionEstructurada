/*
Autor: Magdiel Pech
Entrada: numeroDeDatos
Salida: multiplicador
Proceso: calcular los n multiplos de 7
 
QA
Entrada  Salida         Resultado
2         2, 49           7, 49
0         S/S             S/S
4         7, 14, 21, 28   7, 14, 21, 28
 
*/
#include <stdio.h>
 
 
 
int main(int argc, char *argv[]) {
 
	/*
	Variable de entrada tipo entera: numeroDeDatos
	Variable de salida tipo entera: multiplicador
	Variable para i tipo entera para iteraciones
	*/
 
	int numeroDeDatos,i,multiplicador;
 
	/*Entrada de datos*/
	printf("Ingresa un numero limite: ");
	scanf("%d",&numeroDeDatos);
 
 
	for(i =1;i<=numeroDeDatos;i++)
	{
		/*Proceso*/
		multiplicador = i*7;
 
		/*Salida de datos*/
		printf("%d * 7 = %d \n",i,multiplicador);
 
	}
 
	return 0;
}

/*
Autor:Zeus Sarmiento 29/Enero/18
Entradas: Un número
Salidas: Un texto que diga si el número es primo o no
Procedimiento general: mediante un ciclo, comparar todos los números de 2 a N

Entrada    Salida       Resultado
   2       es primo     correcto
   3       es primo     correcto
   4       no es primo  correcto

*/
 
#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int numeroADefinir, esPrimo=1;
	/*Entradas*/
	scanf("%d",&numeroADefinir);
	/*Procedimiento*/
	for(int i=2;i<numeroADefinir;i=i+1)
	{
		if(numeroADefinir%i==0)
		{
			esPrimo=0;			/* Si en algún momento encontramos un divisor, el número no es primo */
			break;
		}
	}
	/*Salidas*/
	if(esPrimo==1)
	{
		printf("Es primo");   /* Validamos nuestra bandera */
	}
	else
	{
		printf("No es primo");
	}
	return 0;
}

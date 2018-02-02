/*
QA Francisco Jesus Mac Cetzal 01/02/2018 08:35 pm
Entradas....../.Salidas.................../.Resultado
"Ejemplo de la tabla del 3"
3 x 1 = 3 	XX
3 x 2 = 6 	ok
3 x 3 = 9 	ok
3 x 4 = 12 	ok
3 x 5 = 15	ok
3 x 6 = 18	ok
3 x 7 = 21	ok
3 x 8 = 24	ok
3 x 9 = 27	ok
3 x 10 = 30	XX

Notas: no se agrego un bloque de comentarios, no se tomo en cuenta la multiplicacion por 1 y por 10 en el codigo
	    no se dio formato al codigo
		Entradas
		Procesos
		Salidas
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j;
	for(i=2;i<=9;i++)
	{
		printf("Tabla del %d\n", i);
		for(j=2;j<=9;j++)
		{
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}


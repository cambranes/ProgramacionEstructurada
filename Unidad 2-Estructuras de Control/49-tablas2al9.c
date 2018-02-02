/*
Autor:Rodrigo Moguel Gamboa 30/Enero/18
Entradas: N/A
Salidas: producto (resultado de las multiplicaciones), factorUno (multiplicando),
factorDos (multiplicador)
Procedimiento general: Se realizan todas las multiplicaciones por medio de dos
whiles que van multiplicando ambos factores para formar la tabla y se imprimen
ambos factores junto con el producto.

QA Francisco Jesus Mac Cetzal 01/02/2018 08:35 pm
Entradas....../.Salidas.................../.Resultado
"Ejemplo de la tabla del 3"
3 x 1 = 3 	ok
3 x 2 = 6 	ok
3 x 3 = 9 	ok
3 x 4 = 12 	ok
3 x 5 = 15	ok
3 x 6 = 18	ok
3 x 7 = 21	ok
3 x 8 = 24	ok
3 x 9 = 27	ok
3 x 10 = 30	ok
notas.- solo como sugerencia traten de separar cada tabla, aparte de eso no hay problemas con el codigo
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int factorUno=2;
	int factorDos=1;
	int producto;
	/*Procedimiento*/	printf("\nTablas de multiplicar");
	while (factorUno<10)
	{
		while (factorDos<=10)
		{
			producto=factorUno*factorDos;
			printf("\n %d",factorUno);
			printf(" * %d",factorDos);
			printf(" = %d",producto);
			factorDos=factorDos+1;
		}
		factorUno=factorUno+1;
		factorDos=1;
	}
	return 0;
}

/*
Autor:Rodrigo Moguel Gamboa 30/Enero/18
Entradas: N/A
Salidas: producto (resultado de las multiplicaciones), factorUno (multiplicando),
factorDos (multiplicador)
Procedimiento general: Se realizan todas las multiplicaciones por medio de dos
whiles que van multiplicando ambos factores para formar la tabla y se imprimen
ambos factores junto con el producto.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entradas*/
	int factorUno=2;
	int factorDos=1;
	int producto;
	/*Procedimiento*/	printf("\nTablas de multiplicar");
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


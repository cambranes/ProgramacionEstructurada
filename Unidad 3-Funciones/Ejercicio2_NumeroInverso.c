/*Autor: Equipo 2*/
/*entradas x(int)
salidas reverso(x)*/
/*procedimiento: Usamos una funcion junto con un ciclo for para ir dividiendo el numero
y reacomodarlo con el resultado del operador módulo*/
#include <stdio.h>
/*invocamos la funcion*/
int reverso(int x);

int main(int argc, char *argv[]) {
	/*entrada x, es el numero que quieres revertir*/
	/*main mas claro*/
	int x;
	do{ 
		printf("Introduce tu numero:\n");
		scanf("%d",&x);
	} 
	while (x <= 0); 
	printf("El reverso es:\n");
	reverso(x);
	
	return 0;
}
/*procedimiento de la funcion*/
	int reverso(int x)
	{
	
	for(x; x>0; x=x/10)
	{
		/*salida*/
		printf("%d", x%10);
	}
	return x;
}

/*Test
Tester: Equipo 1 16/02/2017

Nombrado de variables: Aceptado, pero sería mejor que nombraran a x, y cual es su función.

Indentación de bloques: Aceptado.

Bloques de Entrada: correcto.

Testeando codigo:
-Entrada: 23
Salida: 32

-Entradas: 123456789
Salida: 987654321

-Entradas: -22
Salida: ---


*/


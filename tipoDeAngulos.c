/*
Autor:Humberto Manuel Pech Huchin 29/01/17
Entradas:angulo1, angulo2
Salidas:Tipo de ángulo
Procedimiento general:Dados dos ángulos positivos(enteros) determinar si son iguales
y el tipo de ángulo.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Entrada
	'angulo1, angulo2' son variables que van de 0 a 360.
	*/
	int angulo1, angulo2;
	printf("Los ángulos tomados en cuenta van desde 0-359 \n");
	printf("Ingrese el ángulo 1:");
	scanf("%d", &angulo1);
	printf("ingrese el ángulo 2:");
	scanf("%d", &angulo2);
	/*Procedimiento y Salida
	Primero se verifica si el valor esta entre 0 y 360.
	Despues se verifica si son iguales.
	Con otro if se verifica si son ángulos iguales o distintos, 
	si son iguales, verifica que tipo de ángulo es, mediante la declaración
	if, else if. Y como salida Imprime según sea el caso.
	Si los ángulos son distintos, se dirá que tipo de angulo es, si y solo si,
	ambos son el mismo tipo de angulo, en caso contrario no se dirán que tipo 
	de ángulos son.
	
	*/
	if(angulo1<0 || angulo2<0 || angulo1>359 || angulo2>359)
	{
		printf("Angulos no validos");
	}
	else
	{
		if(angulo1==angulo2)
		{
			printf("Los ángulos son iguales.\n");
		}
		if(angulo1==angulo2 || angulo1<angulo2 || angulo1>angulo2)
		{
			if(angulo1<90 && angulo2<90)
			{
				printf("Los ángulos son agudos.");
			}
			else if(angulo1==90 && angulo2==90)
			{
				printf("Son ángulos rectos.");
			}
			else if(angulo1>90 && angulo1<180 && angulo2>90 && angulo2<180)
			{
				printf("Son ángulos obtusos.");
			}
			else if(angulo1==180 && angulo2==180)
			{
				printf("Son ángulos llanos.");
			}
			else if(angulo1>180 && angulo2>180)
			{
				printf("Son ángulos cóncavos.");
			}
			else
			{
				printf("Son angulos distintos.");
			}
		}
	}
	
	return 0;
}
/*
Probado por: Irving Baez

Entrada: 90, 90.
Salida: los ángulos son iguales, son ángulos rectos.

Entrada: 500, 1.
Salida: Angulos no validos.

Entrada: 360, 360.
Salida: Angulos no validos.

Entrada: 50, 10.
Salida: Los ángulos son agudos.

Entrada: 0.5
Salida:Ingrese ángulo 2, Los ángulos son agudos.
*/

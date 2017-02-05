/*
Autor:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 28/Enero/17
Entradas:n (int)
Salidas: multiplo (int)
Procedimiento general: Se utiliza un cilo for que 
utilice un acumulador de multiplo y se imprima los n 
multiplos de 7.
*/
/**Tester : Ricardo Emilio Kú Martínez
  Números que se probaron: 49, 8, 14, 270
QA comentario de la prueba: El estándar de codificación está en orden
y cumple con los requerimietos establecidos por el maestro.
Se abre una entrada en la que se pregunta que se escriba un entero
el cual determina cuantos múltiplos de 7 se van a imprimir.
Se usa el ciclo for para verificar que no se exceda o se quede
con menos valores de los pedidos y se define la salida de los números
con un texto en la pantalla.
Dando así que el programa funciona correctamente.**/

#include <stdio.h>
/*
n variable de entrada
contador y multiplo como acumuladores de la escala
*/
int main(int argc, char *argv[]) {
	int n,contador=1, multiplo=0;
	
	printf("Escribir un número:\n");
	scanf("%d", &n);
	/*
	utilizando un ciclo for calculamos la escala
	*/
	
	printf("Los multiplos son: ");
	/*
	n determina cual es el tamaño o listado de nuestro programa
	*/
	for(contador; contador<=n; contador++)
	{
		multiplo=(contador*7);
		/*Salidas*/
		printf("%d ", multiplo); 
	}
	return 0;
}


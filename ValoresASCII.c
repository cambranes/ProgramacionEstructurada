#include <stdio.h>
/*
Autor:Wendy Sosa 29/Enero/17
Entradas: ninguna
Salidas: letras (int)
Procedimiento general:
Se muestran los valores ascii de las letras.
Se usa un for que imprime desde A-Z /a-z los 
valores enteros de los caracteres.

*/
int main(int argc, char *argv[]) {
	/* letra: caracter de letra a evaluar
	contador: variable almacenamiento de repeticiones del for
	*/
	int letra,contador;

	/*proceso*/
	printf("El código ASCII de las letras Mayúsculas:\n");
	for(letra= 'A' ;letra <='Z';letra++)
	{
		printf("%c es: %d\t",letra,letra);
		contador++;
		if (contador%3==0)
		{
			printf("\n");
		}
	}	
	
	printf("\nEl código ASCII de las letras minusculas:\n");
	for(letra= 'a' ;letra <='z';letra++)
		{
			printf("%c es: %d\t",letra,letra);
			contador++;
			if(contador%3==0)
			{
				printf("\n");
			}
		}
	
	return 0;
}
/*Testing
Tester: Ignacio Pananá 31/01/17

Nombrado de variables: correcto
Indentación de bloques: correcto
Definición de bloques: incorrecto
	Solo existe un bloque definido como "proceso"
	y este no contiene el proceso entero.

Se recomienda comentar el proceso por el cual se le dió formato a la salida.

Funcionamiento del programa: correcto */

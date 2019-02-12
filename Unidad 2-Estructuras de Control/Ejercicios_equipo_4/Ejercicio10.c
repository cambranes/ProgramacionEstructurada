/*
Autor:Jorge Chí 03/Febrero/19
Entradas: numero ("N").
Salidas: multiplo (de 7), numeroMultiplo (posición de multiplos de 7)
Procedimiento general: Se ingresa un número N (numero) y se imprimen los primeros N multiplos de 7 (numeroMultiplo y multiplo).
Si se ingresa 0 o menor que 0, se imprime ERROR y se pide de nuevo el número.
*/


#include <stdio.h>

int main(void){

//se inicia la variable a leer y un contador

int numero = 0;
int contador = 0;

//Entradas: se solicita el número hasta que el usuario de uno mayor que 0

while (1){

    printf("Ingresa un numero mayor que 0:\n");
    scanf("%i", &numero);

    if (numero > 0){

        break;

    } else {

        printf("ERROR, numero menor o igual a 0\n");

    }

}

/*Proceso : se realiza un ciclo while donde se imprimen los múltiplos usando una variable que cuenta en que múltiplo va
(numeromultiplo) y otra que es el múltiplo en si (múltiplo) */

while (contador < numero){

    //Salidas: variables antes mencionadas

	int numeroMultiplo = contador + 1;
	int multiplo = 7 * numeroMultiplo;

	//impresión de los múltiplos

	printf("El multiplo #%i es %i\n", numeroMultiplo, multiplo);

	contador++;

};

return 0; };
/*
	QA Reviso: Raul Rivadeneyra
	Entradas: 5, 0, -1, 10
	Salidas: Ok, Ok, Ok, Ok
	El programa funciona correctamente, hasta tienen en consideracion cuando n ≤ 0
*/

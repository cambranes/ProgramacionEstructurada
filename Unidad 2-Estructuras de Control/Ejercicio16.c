/*
Autor:Jorge Chí 03/Febrero/19
Entradas: numero (colección de números).
Salidas: media (de la suma de numero)
Procedimiento general: Se ingresan numeros que se suman en la variable numero y luego se
calcula la media de estos. Si se teclea un 0 se deja de tomar entradas. si se teclea un negativo se informa de esto.
*/


#include <stdio.h>

int main(void){

//se inicia la variable que lee los numeros, la suma de estos y un contador

float numero = 0;
float suma = 0;
int contador = 0;

//Entradas: se solicitan los numeros del conjunto, se cuentan los numeros en total y se suman

while (1){

    printf("Ingresa un numero del conjunto al cual quieres sacar media(teclea 0 para terminar):\n");
    scanf("%f", &numero);

    if (numero == 0){

        break;

    } else if (numero < 0){

        printf("ERROR, numero menor que 0\n");

    } else {
        suma = suma + numero;
        contador++;

    }
};

/*Proceso : si ningun dato fue ingresado se infor de ello, en otro caso
se calcula la media y se imprime */

if (suma == 0){

    printf("Ningun dato fue insertado.\n");

} else {

    float media = suma / contador;

    printf("La media es: %f\n", media);
}

return 0; };

/*
	QA Reviso: Raul Rivadeneyra
	Entradas: (3,5,3,5),(1,2,3,4,5,6,7,8,9), -1, 0
	Salidas: Ok(4), Ok(5), Ok, Ok
	El programa funciona correctamente
*/

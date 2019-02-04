/*
Autor:Jorge Chí 03/Febrero/19
Entradas: numero (a redondear).
Salidas: numeroRedondeado
Procedimiento general: Se ingresa un numero. Si es negativo se pide de nuevo.
Se redondea el numero a la centena más cercana
*/


#include <stdio.h>

int main(void){

//se inicia la variable que guarda el número

int numero = 0;

//Entradas: se solicita el número a redondear que no sea negativo

while (1){

    printf("Ingresa un numero que quieras redondear a la centena mas cercana:\n");
    scanf("%i", &numero);

    if (numero < 0){

        printf("ERROR, numero menor que 0\n");

    } else {

        break;

    }

};

/*Proceso : si el número es 100 o menor que 100 se imprime el redondeo 100. sino,
se hace el proceso de redondeo a la siguiente centena cercana */

if (numero <= 100){

    printf("El redondeo es: 100.\n");

} else {

    numero = ((numero + 99) / 100 ) * 100;

    printf("El redondeo es: %i\n", numero);
}

return 0; };

/*
Autor:Jorge Chí 16/Febrero/19
Entradas: numero (a redondear).
Salidas: cadena con el número redondeado
Procedimiento general: Se ingresa un numero. Si es negativo se pide de nuevo.
Se redondea el numero a la centena más cercana
*/


#include <stdio.h>

int lectura();
int redondeo(int numeroX);
void impresionNumero(int numeroX);

int main(void){

//se inicia la variable que guarda el número

int numero = 0;

//Entradas: se solicita el número a redondear que no sea negativo

numero = lectura();

/*Proceso : si el número es 100 o menor que 100 se imprime el redondeo 100. sino,
se hace el proceso de redondeo a la siguiente centena cercana */

numero = redondeo(numero);

//salidas: se imprime el número

impresionNumero(numero);

return 0;

}

int lectura(){
//entradas: ninguna

    int dato = 0;

//procedimiento: se imprime la petición del dato y se lee

while (1){

    printf("Ingresa un numero que quieras redondear a la centena mas cercana:\n");
    scanf("%i", &dato);

    if (dato < 0){

        printf("ERROR, numero menor que 0\n");

    } else {

        break;

    }

}

//salida: el dato leido

    return dato;
}

int redondeo(int numero){

//entradas: el numero a redondear

    int numeroRedondeado = 0;

//procedimiento: se redondea el número

    if (numero <= 100){

    numeroRedondeado = 100;

} else {

   numero = (numero + 50) / 100 ;
   numeroRedondeado = numero * 100;

}

//salida: el numero redondeado

return numeroRedondeado;
}

void impresionNumero(int numero){

//entrada: el numero redondeado

//procedimiento: se imprime el númerp

printf("El numero redondeado es: %i", numero);

}

/*QA: Amaury Morales Cerecedo

Funcion: main()
Entradas: printf despues de cada linea.
Salidas: El codigo se ejecuta.

Funcion: lectura()
Entradas: 1, 101, 151
Salidas: los numeros introducidos.

Funcion: redondeo()
Entradas: 1, 101, 151
Salidas: 100, 100, 200.

Funcion: impresionNumero()
Entradas: ninguna
Salidas: solo imprime el numero redondeado

 Final: El codigo funciona correctamente.
*/

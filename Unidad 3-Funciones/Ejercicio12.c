/*
Autor:Jorge Chí 16/Febrero/19
Entradas: dos numeros enteros (A y B)
Salida: los números ordenados de mayor a menor
Procedimiento general: Se pregunta cual es mayor y luego se ordenan
*/

#include<stdio.h>

int lectura();
void ascendente(int* numeroA1, int* numeroB1);
void impresion(int numeroA2, int numeroB2);

int main(){

//se declaran los 2 valores

int numeroA = 0, numeroB = 0;

//entradas: se solicitan 2 valores al usuario

numeroA = lectura();
numeroB = lectura();

//procedimiento: se comparan para saber cual es el mayor

ascendente(&numeroA,&numeroB);

//salidas: se imprimen en orden

impresion(numeroA,numeroB);

return 0;
}

int lectura(){
//entradas:ninguna
 int numero = 0;
//procedimiento: se pide el numero
 printf("Digite uno de los numeros a ordenar: \n");
 scanf("%i",&numero);
//salidas: el numero leido
 return numero;

}

void ascendente(int* numeroA1, int* numeroB1){
//entradas: los dos numeros
int temporal = 0;
//procedimiento: se ordenan si el segundo el mayor al primero
if (*numeroB1 >= *numeroA1){

    temporal = *numeroB1;
    *numeroB1 = *numeroA1;
    *numeroA1 = temporal;

}
//salidas: ninguna

}

void impresion(int numeroA2, int numeroB2){
//entradas: los dos numeros

//procedimiento: se imprimen en orden
    printf("%i, %i", numeroA2, numeroB2);
//salidas: ninguna


}

/*
Autor QA: Alejandro Torre Reyes
Entradas: 5,8
Salidas: 8,5
Proceso: OK
Modularización: OK. El main no puede estar más simple.
*/

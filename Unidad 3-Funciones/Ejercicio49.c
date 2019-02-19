/*
Autor: AMAURY MORALES CERECEDO
Entrada: NINGUNA. NO INTRODUCIR NINGUN VALOR.
Salida: Tablas de multiplicar completas del 2 hasta el 9

Procedimiento general: Se utilizan dos ciclos con un auxiliar para almacenar cadenas. Estas cadenas son cada una de las tablas de
multiplicar que van desde el 2 hasta el 9 con maximo 10. Al final se imprimen todas las tablas de multiplicar.

Notas: Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

Hice 3 arreglos diferentes porque un arreglo tridimensional me hubiera guardado 1 solo valor con las 3 posiciones diferentes.
Al hacer 3 arreglos, puedo almacenar un valor en cada uno que tienen la misma posicion para asi solo poder imprimirla en la salida.

*/

//PREMISA//
/*Escribe el programa que imprima la tabla de multiplicar completa. Es decir empezando con la tabla del 2 hasta el 9*/

#include <stdio.h>

//DECLARACIONES GLOBALES//
int numeroInicial = 2; //Desde donde empieza nuestras tablas
int numeroFinal = 9; //Hasta que numero llegan nuestras tablas

int contadorI = 1; //Para el ciclo
int contadorO = 1; //Para el ciclo
int constanteA = 1; //Auxiliar

char lista[999]; //La unica forma de poder tener la salida en el bloque Salida y no en Proceso. Primer numero
char lista2[999]; //Segundo Numero
char lista3[999]; //Primero por segundo

void Entrada(),Proceso(int a, int b),Salida();

int main()
{
 Entrada();
 Proceso(numeroInicial, numeroFinal);
 Salida();
}

/*Funcion entrada
No toma nada, solo imprime lo que hara el programa
*/
void Entrada()
{
 printf("A continuacion se imprimiran las tablas completas del numero 2 hasta el 9\n");
}

/*Funcion proceso
Escribe las tablas de multiplicar en una lista
*/
void Proceso(int a, int b)
{
 for (contadorO = a; contadorO <= b; contadorO++)
 {
  contadorI = 1;
  for (contadorI = 1; contadorI <= 10; contadorI++)
  {
   lista[constanteA] = contadorO;
   lista2[constanteA] = contadorI;
   lista3[constanteA] = contadorO*contadorI;
   constanteA++;
  }
 }
}

/*Funcion salida
Solo imprime las tablas de multiplicar almacenadas en una lista
*/
void Salida()
{
 printf(" ");
 contadorI = 1;
 for (contadorI = 1; contadorI <= 80; contadorI++)
 {
  printf("%d x %d = %d\n", lista[contadorI], lista2[contadorI], lista3[contadorI]);
 }

 scanf("%d", &constanteA); //GetChar no me funciono aqui, asi que solo reescribo una variable.
}

/* QA
Por: Eyder Antonio Concha Moreno
Notas:
-No se debe usar arreglos, está posible imprimir en el procedimiento para evitar su uso (confirmado por el Profesor)

Función Entradas Correcto
-El mensaje es impreso correctamente

Función Proceso Incorrecto
-Funciona correctamente, sin embargo se debe evitar el uso de arreglos

Función Salidas Correcto
-Esta función funciona correctamente, sin embargo no es necesaria, ya que para este tipo de ejercicios es posible imprimir en el proceso

*/

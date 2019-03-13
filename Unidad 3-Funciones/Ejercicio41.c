/*
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero entero, ya sea positivo o negativo.

Salida: El numero mas grande y el mas chico de todos los numeros dados por el usuario

Procedimiento general: Se van cambiando los tronos correspondientes dependiendo de los numeros que el usuario introduzca.
Al principio se configuran los 2 tronos como el primer numero dado para evitar problemas.

Notas: No se admiten numeros que no sean enteros.
*/

//PREMISA//
/*Escriba  el programa que  lea  N  números  y  calcule  cual  es  el  mayor  y  el  menor de esos números.
Utilice una estructura de repetición Para...hasta.*/

#include <stdio.h>

void Entrada(int *t),Proceso(int t, int *min, int *max),Salida(int min, int max);

int main()
{
 int tope, tronoMin, tronoMax; //El numero maximo de ciclo
 Entrada(&tope);
 Proceso(tope, &tronoMin, &tronoMax);
 Salida(tronoMin, tronoMax);
}

/*Funcion entrada
Solo toma el numero del total de numeros a comparar
*/
void Entrada(int *t)
{
 printf("Por favor, introduzca el total de numeros a comparar: ");
 scanf("%d", t);
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y determina el mayor y el menor
*/
void Proceso(int t, int *min, int *max)
{
 int numero, contador; //El numero introducido y el contador
 for (contador = 0; contador < t; contador++)
 {
  printf("Por favor, introduzca un numero: ");
  scanf("%d", &numero);

  if (contador == 0)
  {
   *min = numero;
   *max = numero;
  }
  if (numero < *min)
  {
   *min = numero;
  }
  if (numero > *max)
  {
   *max = numero;
  }
 }
}

/*Funcion salida
Solo imprime el numero mayor y el menor
*/
void Salida(int min, int max)
{
 printf("Numero mayor: %d\n", max);
 printf("Numero menor: %d\n", min);

 scanf("%d", &min); //GetChar no me funciono aqui, asi que solo reescribo una variable.
}

/*
QA: Luis Gerardo Leon Ortega
Entrada: Cualquier numero entero, ya sea positivo o negativo.
Salida: El numero mas grande y el mas chico de todos los numeros dados por el usuario

Bueno... el proceso esta bien pero...
Estas utilizando arrays y eso esta mal.
Estas utilizando variables globales y eso esta mal x2.

nota 1: El uso de una lista con limite [999999] es ineficiente, estas consumiendo
memoria de forma inecesaria puedes utilizar una lista dinamica

nota 2: Para re escribir una variable utiliza los apuntadores :v

___________________
Correcciones hechas
-Amaury

*/

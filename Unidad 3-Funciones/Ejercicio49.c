/*
Autor: AMAURY MORALES CERECEDO
Entrada: NINGUNA. NO INTRODUCIR NINGUN VALOR.
Salida: Tablas de multiplicar completas del 2 hasta el 9

Procedimiento general: Se utilizan dos ciclos con un auxiliar para almacenar cadenas. Estas cadenas son cada una de las tablas de
multiplicar que van desde el 2 hasta el 9 con maximo 10. Al final se imprimen todas las tablas de multiplicar.

Notas: Habia una funcion salida la cual fue quitada debido a que me entere de que no se puede utilizar arreglos, AUN cuando
esto incumple la estructura de que solo se pueden imprimir las salidas en la salida y no en el procedimiento.

*/

//PREMISA//
/*Escribe el programa que imprima la tabla de multiplicar completa. Es decir empezando con la tabla del 2 hasta el 9*/

#include <stdio.h>

void Entrada(),Proceso(int a, int b),Salida();

int main()
{
 int numeroInicial = 2; //Desde donde empieza nuestras tablas
 int numeroFinal = 9; //Hasta que numero llegan nuestras tablas
 Entrada();
 Proceso(numeroInicial, numeroFinal);
 //Salida();   Aqui antes habia una funcion para imprimir todas las tablas utilizando listas.
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
 int contadorI = 1; //Para el ciclo
 int contadorO = 1; //Para el ciclo
 int constanteA = 1; //Auxiliar
 for (contadorO = a; contadorO <= b; contadorO++)
 {
  contadorI = 1;
  for (contadorI = 1; contadorI <= 10; contadorI++)
  {
   printf("%d x %d = %d\n", contadorO, contadorI, contadorO*contadorI);
   constanteA++;
  }
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

____________
Correcciones hechas
-Amaury

*/

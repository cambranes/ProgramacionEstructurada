/*
Autor: AMAURY MORALES CERECEDO
Entrada: N, J y K. Numeros enteros.
Salida: N tablas de multiplicar. (x hasta n) por (j hasta k). Donde a x se le suma 1 despues de que j llega a k.
Procedimiento general: Se hacen 2 ciclos para multiplicar numeros por otros numeros limitados entre n y k. Solo imprime hasta n tablas.

Notas: Habia una funcion salida la cual fue quitada debido a que me entere de que no se puede utilizar arreglos, AUN cuando
esto incumple la estructura de que solo se pueden imprimir las salidas en la salida y no en el procedimiento.
*/

//PREMISA//
/*Imprimir las primeras n tablas de multiplicar que incluyan desde el valor j hasta el valor k*/

#include <stdio.h>

void Entrada(int *j, int *k, int *n),Proceso(int j, int k, int n);

int main()
{
 int numeroJ = 0; //j
 int numeroK = 0; //k
 int numeroN = 0; //n

 Entrada(&numeroJ, &numeroK, &numeroN);
 Proceso(numeroJ, numeroK, numeroN);
 //Salida();   Aqui antes habia una funcion para imprimir todas las tablas utilizando listas.
}

/*Funcion entrada
Solo toma j, k y n
*/
void Entrada(int *j, int *k, int *n)
{
 printf("Por favor, introduzca el valor minimo: ");
 scanf("%d", j);
 printf("Por favor, introduzca el valor maximo: ");
 scanf("%d", k);
 printf("Por favor, introduzca el numero de tablas de multiplicar a imprimir: ");
 scanf("%d", n);
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y escribe las tablas de multiplicar en una lista
*/
void Proceso(int j, int k, int n)
{
 int contadorI = 1; //Para el ciclo
 int contadorO = 1; //Para el ciclo
 int constanteA = 1; //Auxiliar
 for (contadorO = 1; contadorO <= n; contadorO++)
 {
  contadorI = j;
  for (contadorI = j; contadorI <= k; contadorI++)
  {
   printf("%d x %d = %d \n", contadorO, contadorI, contadorO*contadorI);
   constanteA++;
  }
  printf("\n");
 }
 scanf("%d", &constanteA);
}

/* QA                                    (CORRECCIONES HECHAS -Amaury)
Por: Eyder Antonio Concha Moreno
Función Entradas - Correcto
-Lee correctamente las variables

Función Proceso - Incorrecto

-Entradas: 1.-(0, 0, 1)
           2.-(1, 2, 3)
           3.-(1, 4, 4)
           4.-(1, 8, 2)

-Salidas: 1.-(1 x 0 = 0) Correcto

          2.-(1 x 1 = 1) Incorrecto
             (1 x 2 = 2)
             (2 x 1 = 2)

          3.-(1 x 1 = 1) Incorrecto
             (1 x 2 = 2)
             (1 x 3 = 3)
             (1 x 4 = 4)

          4.-(1 x 1 = 1) Incorreco
             (1 x 2 = 2)

Función Salida - Correcto
-Todos los datos son impresos correctamente

Notas:
-No están permitidos los arreglos, es posible utilizar solamente dos funciones (Entradas, y proceso, donde igual se puede imprimir,
esto ha sido preguntado y confirmado por el Profesor)

-Los valores no son impresos correctamente, un ejemplo funcional es el siguiente:

    3 primeras tablas de multiplicar
    2 valor minimo
    4 valor maximo

    1x2   2x2   3x2
    1x3   2x3   3x3
    1x4   2x4   3x4

*/

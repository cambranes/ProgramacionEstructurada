/*
Autor:Francisco Quijano 30/Enero/17
Entradas: datos numéricos a analizar.
Salidas: cantidad de números positivos y negativos.
Procedimiento general:
se analizaran los datos leidos y se contará el número
de datos positivos y negativos.
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	/*Definición de variables*/
  int positivos = 0, negativos = 0;
  /*Entradas*/
	float numero;
  /*en este bloque se leen y analizan los valores introducidos por
  el usuario utilizando un ciclo do while, para poder tener un mejor
	control de los valores introducidos*/
  printf("introduzca los valores para analizar, marque el final con un 0\n");
  do
  {
    scanf("%f", &numero);
    if (numero > 0)
	{
      positivos++;
    }
    if (numero < 0)
    {
      negativos++;
    }
  }
	while (numero != 0);
  /*Salidas*/
  printf("El total de positivos es: %d\nEl total de negativos es: %d", positivos, negativos);
  return 0;
}
/*Notas de QA
Pruebas realizadas:
Entradas         / Salidas esperadas         / Salidas recibidas
5, -3, 6, -15, 0 / Positivos 2 y negativos 2 / Positivos 2 y negativos 2
-35, -58, -4, 0  / Positivos 0 y negativos 3 / Positivos 0 y negativos 3
23, 23, -123,    /
23412, -12312    / Positivos 4 y negativos 3 / Positivos 4 y negativos 3
9348, -34, 0     /
El programa funciona correctamente.
*/

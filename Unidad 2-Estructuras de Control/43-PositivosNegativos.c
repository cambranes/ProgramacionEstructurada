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
  el usuario*/
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

QA: Luis Madera
El programa cumple con el procedimiento definido donde debe analizar su un numero es positivo o negativo, se introducen 3 casos prueba, cumpliendo con su funciĂłn.
Esta estructurado de la forma preestablecida contando con nombre de autor y las etapas correspondientes.
*/

/*
Autor: AMAURY MORALES CERECEDO
Entrada: NINGUNA. NO INTRODUCIR NINGUN VALOR.
Salida: Tablas de multiplicar completas del 2 hasta el 9

Procedimiento general: Se utilizan dos ciclos con un auxiliar para almacenar cadenas. Estas cadenas son cada una de las tablas de
multiplicar que van desde el 2 hasta el 9 con maximo 10. Al final se imprimen todas las tablas de multiplicar.

Notas: Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

*/

//PREMISA//
/*Escribe el programa que imprima la tabla de multiplicar completa. Es decir empezando con la tabla del 2 hasta el 9*/

//DECLARACIONES GLOBALES//
int numeroInicial = 2; //Desde donde empieza nuestras tablas
int numeroFinal = 9; //Hasta que numero llegan nuestras tablas

int contadorI = 1; //Para el ciclo
int contadorO = 1; //Para el ciclo
int constanteA = 1; //Auxiliar

string[] lista = new string[81]; //La unica forma de poder tener la salida en el bloque Salida y no en Proceso.

void main()
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
 Console.WriteLine("A continuacion se imprimiran las tablas completas del numero 2 hasta el 9");
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
   lista[constanteA] = ""+contadorO+"x"+contadorI+" = "+contadorO*contadorI;
   constanteA++;
  }
 }
}

/*Funcion salida
Solo imprime las tablas de multiplicar almacenadas en una lista
*/
void Salida()
{
 Console.WriteLine("");
 contadorI = 1;
 for (contadorI = 1; contadorI <= 80; contadorI++)
 {
  Console.WriteLine(lista[contadorI]);
 }
}

main(); //Para iniciar el programa.
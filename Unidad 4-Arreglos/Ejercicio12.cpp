/*
Autor: AMAURY MORALES CERECEDO
Entrada: Ninguna. Se puede cambiar los parametros del algoritmo.
Salida: Si hay o no un punto silla dentro de la matriz generada. De ser si, el numero de puntos silla.

Procedimiento General: Se genera una matriz con los datos predeterminados, despues se llena esa matriz y por ultimo de verifica si hay
o no puntos silla en ella.

Notas: Dentro del codigo se pueden ver dos comentarios donde se puede cambiar el tamaño de la matriz y los limites del generador de
numeros aleatorios. El problema no lo pide, pero tambien puede calcular la posicion de los puntos silla descomentando la linea de codigo
marcada.
*/

//PREMISA//
/*Se dice que una matriz tiene un punto silla si alguna posición de la matriz es el menor de su fila,
y a la vez el mayor de su columna. Escribir un programa que llene una matriz con  números  aleatorios  reales  del  0  al  999
y que determine si la matriz tiene a puntos silla.*/

#include <iostream>
#include <cstdlib> //Para los numeros al azar.
#include <ctime> //Para que los numeros al azar no sean el mismo.

//Funcion que genera numeros aleatorios
int numeroAleatorio(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

//Funcion que crea la matriz
int** crearMatriz(int filas, int columnas)
{
 int** matriz = new int*[filas];
 for (int i = 0; i < filas; i++)
 {
  matriz[i] = new int[columnas];
 }
 return matriz;
}

//Funcion que llena la matriz de numeros aleatorios
void llenarMatriz(int** matriz, int filas, int columnas)
{
 for (int i = 0; i < filas; i++)
 {
  for (int j = 0; j < columnas; j++)
  {
   matriz[i][j] = numeroAleatorio(0,999); /////////////////////////////////AQUI PARA CAMBIAR LOS LIMITES DE LOS NUMEROS ALEATORIOS
  }
 }
}

//Funcion que imprime la matriz
void imprimirMatriz(int** matriz, int filas, int columnas)
{
 for (int i = 0; i < filas; i++)
 {
  for (int j = 0; j < columnas; j++)
  {
   printf("[%d,%d] = %d\n", i, j, matriz[i][j]);
  }
  std::cout<<"\n";
 }
}

//Funcion que determina si hay puntos silla
int hayPuntoSilla(int** matriz, int filas, int columnas)
{
 int noExiste = 1;
 for (int i = 0; i < filas && noExiste; i++)
 {
  for (int j = 0; j < columnas && noExiste; j++)
  {
   if (matriz[filas][columnas] > matriz[filas][j] || matriz[filas][columnas] < matriz[i][columnas])
   {
    noExiste = 0;
   }
  }
 }
 return noExiste;
}

//Funcion que determina cuantos puntos silla hay
int calcularPuntosSilla(int** matriz, int filas, int columnas)
{
 int Existen = 0;
 for (int i = 0; i < filas; i++)
 {
  for (int j = 0; j < columnas; j++)
  {
   if (hayPuntoSilla(matriz, i, j) == 1)
   {
    //printf("Hay un punto silla en: %d-%d\n", i, j);    //AQUI SE PUEDE DES-COMENTAR PARA VER TODOS LOS PUNTOS SILLA.
    Existen++;
   }
  }
 }
 return Existen;
}

int main()
{
 srand(time(0)); //Para que los numeros aleatorios no sean iguales.

 int matrizFilas = 3;    //Cambiar aqui para el numero de filas de la matriz.
 int matrizColumnas = 3; //Cambiar aqui para el numero de columnas de la matriz.
 int** matrizOriginal = crearMatriz(matrizFilas,matrizColumnas);

 llenarMatriz(matrizOriginal, matrizFilas,matrizColumnas);
 std::cout<<"Matriz: \n";
 imprimirMatriz(matrizOriginal, matrizFilas,matrizColumnas);
 std::cout<<"=================== \n";

 int ExisteUnPuntoSilla = calcularPuntosSilla(matrizOriginal, matrizFilas,matrizColumnas);

 if (ExisteUnPuntoSilla >= 1)
 {
  printf("La matriz tiene %d punto(s) silla.", ExisteUnPuntoSilla);
 }
 else
 {
  std::cout<<"La matriz no tiene ningun punto silla. \n";
 }

 std::cin.get();

 return 0;
}
/*
QA: Hector A. V. Cosgalla
Entradas: Ninguna
Se ejecuto el programa 3 veces para comprobarlo, las salidas fueron las siguientes:
Primera ejecucion:
Matriz:
[0,0] = 231
[0,1] = 795
[0,2] = 599

[1,0] = 976
[1,1] = 650
[1,2] = 788

[2,0] = 27
[2,1] = 938
[2,2] = 931

===================
La matriz tiene 5 punto(s) silla.
Su funcionamiento es incorrecto, para empezar los puntos sillas no deben ser mayor a las filas
y en este caso los puntos silla son mayor a las filas, tambien ninguno de los numeros de la matriz
cumple con la condicion de que sean los menores de su fila y los mayores de su columna.
Segunda ejecucion:
Matriz:
[0,0] = 714
[0,1] = 695
[0,2] = 288

[1,0] = 402
[1,1] = 879
[1,2] = 120

[2,0] = 918
[2,1] = 686
[2,2] = 814

===================
La matriz tiene 5 punto(s) silla.
Lo mismo que en la anterior.
Tercera ejecucion:
Matriz:
[0,0] = 80
[0,1] = 101
[0,2] = 228

[1,0] = 749
[1,1] = 232
[1,2] = 929

[2,0] = 65
[2,1] = 511
[2,2] = 336

===================
La matriz tiene 6 punto(s) silla.
En este caso por algun motivo aumento en 1 la cantidad de puntos silla, el comentario
sigue siendo el mismo.
*/

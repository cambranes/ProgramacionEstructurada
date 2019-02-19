/*
Autor: AMAURY MORALES CERECEDO
Entrada: N, J y K. Numeros enteros.
Salida: N tablas de multiplicar. (x hasta n) por (j hasta k). Donde a x se le suma 1 despues de que j llega a k.
Procedimiento general: Se hacen 2 ciclos para multiplicar numeros por otros numeros limitados entre n y k. Solo imprime hasta n tablas.

Notas: No se entiende muy bien a que se refiere con valor j y valor k, asi que lo hice con lo que entendi
Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

*/

//PREMISA//
/*Imprimir las primeras n tablas de multiplicar que incluyan desde el valor j hasta el valor k*/

//DECLARACIONES GLOBALES//
int numeroN = 0; //n
int numeroJ = 0; //j
int numeroK = 0; //k

int contadorI = 1; //Para el ciclo
int contadorO = 1; //Para el ciclo
int constanteA = 1; //Auxiliar

string[] lista = new string[999]; //La unica forma de poder tener la salida en el bloque Salida y no en Proceso.

void main()
{
 Entrada();
 Proceso(numeroJ, numeroK, numeroN);
 Salida(numeroN);
}

/*Funcion Input A Numero
Transforma input del usuario y lo convierte de string a int.
*/
int Input_A_Numero()
{
 string input = Console.ReadLine(); //Para leer lo introducido
 int var = Int32.Parse(input); //Valor temporal
 return var;
}

/*Funcion entrada
Solo toma j, k y n
*/
void Entrada()
{
 Console.WriteLine("Por favor, introduzca el valor minimo: ");
 numeroJ = Input_A_Numero();
 Console.WriteLine("Por favor, introduzca el valor maximo: ");
 numeroK = Input_A_Numero();
 Console.WriteLine("Por favor, introduzca el numero de tablas de multiplicar a imprimir: ");
 numeroN = Input_A_Numero();
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y escribe las tablas de multiplicar en una lista
*/
void Proceso(int j, int k, int n)
{
 for (contadorO = 0; contadorO <= n; contadorO++)
 {
  contadorI = j;
  for (contadorI = j; contadorI <= k; contadorI++)
  {
   lista[constanteA] = ""+contadorO+"x"+contadorI+" = "+contadorO*contadorI;
   constanteA++;
  }
 }
}

/*Funcion salida
Solo imprime las tablas de multiplicar almacenadas en una lista
*/
void Salida(int n)
{
 Console.WriteLine("");
 contadorI = 1;
 for (contadorI = 1; contadorI <= n; contadorI++)
 {
  Console.WriteLine(lista[contadorI]);
 }
}

main(); //Para iniciar el programa.

/* QA
    El proceso general es correcto, sin embargo el programa no compila con el siguiente error:
    ..\Playground\(85,2): error CS1520: Method must have a return type
    
    Software usado para el test: https://code.sololearn.com/#cs
    (Recomendado por Alex en entrega anterior)
*/
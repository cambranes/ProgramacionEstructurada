/*
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero entero, ya sea positivo o negativo.

Salida: El numero mas grande y el mas chico de todos los numeros dados por el usuario

Procedimiento general: Se van cambiando los tronos correspondientes dependiendo de los numeros que el usuario introduzca.
Al principio se configuran los 2 tronos como el primer numero dado para evitar problemas.

Notas: No se admiten numeros que no sean enteros. Al principio se inicializan los dos tronos con el primer numero porque al introducir
todos los numeros como negativos, el trono seguira siendo 0 aunque nunca se haya puesto en la lista de numeros a comparar.
No estoy seguro de cuantos numeros pueda comparar, pero estableci como maximo 99999999 en caso de que por memoria no se puedan realizar mas.

Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

*/

//PREMISA//
/*Escriba  el programa que  lea  N  números  y  calcule  cual  es  el  mayor  y  el  menor de esos números.
Utilice una estructura de repetición Para...hasta.*/

//DECLARACIONES GLOBALES//
int numero, contador, tope, tronoMin, tronoMax; //El numero introducido, el contador de ciclo, el numero maximo de ciclo y los 2 tronos
int[] lista = new int[99999999]; //Lista de todos los numeros introducidos por el usuario.

void main()
{
 Entrada();
 Proceso();
 Salida();
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
Solo toma el numero del total de numeros a comparar
*/
void Entrada()
{
 Console.WriteLine("Por favor, introduzca el total de numeros a comparar: ");
 tope = Input_A_Numero();
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y determina el mayor y el menor
*/
void Proceso()
{
 for (contador = 0; contador < tope; contador++)
 {
  Console.WriteLine("Por favor, introduzca un numero: ");
  numero = Input_A_Numero();

  lista[contador] = numero;

  if (contador == 0)
  {
   tronoMin = numero;
   tronoMax = numero;
  }
  if (numero < tronoMin)
  {
   tronoMin = numero;
  }
  if (numero > tronoMax)
  {
   tronoMax = numero;
  }
 }
}

/*Funcion salida
Solo imprime el numero mayor y el menor
*/
void Salida()
{
 Console.WriteLine("Numero mayor: "+ tronoMax);
 Console.WriteLine("Numero menor: "+ tronoMin);
}

main(); //Corre el programa.
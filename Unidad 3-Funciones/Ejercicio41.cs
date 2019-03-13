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

void main()
{
 int tope = 0; //Numeros totales
 int tronoMin = 0; //Trono menor
 int tronoMax = 0; //Trono mayor
 Entrada(ref tope);
 Proceso(tope, ref tronoMin, ref tronoMax);
 Salida(tronoMin, tronoMax);
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
void Entrada(ref int t)
{
 Console.WriteLine("Por favor, introduzca el total de numeros a comparar: ");
 t = Input_A_Numero();
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y determina el mayor y el menor
*/
void Proceso(int t, ref int min, ref int max)
{
 int numero, contador; //El numero introducido y el contador
 for (contador = 0; contador < t; contador++)
 {
  Console.WriteLine("Por favor, introduzca un numero: ");
  numero = Input_A_Numero();

  if (contador == 0)
  {
   min = numero;
   max = numero;
  }
  if (numero < min)
  {
   min = numero;
  }
  if (numero > max)
  {
   max = numero;
  }
 }
}

/*Funcion salida
Solo imprime el numero mayor y el menor
*/
void Salida(int min, int max)
{
 Console.WriteLine("Numero mayor: "+max);
 Console.WriteLine("Numero menor: "+min);
}

main(); //Corre el programa.

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

____________________
Correcciones hechas
-Amaury

*/

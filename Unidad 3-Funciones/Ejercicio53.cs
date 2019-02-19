/*
Autor: AMAURY MORALES CERECEDO
Entrada: Cualquier numero, puede ser negativo. No introducir numeros decimales.
Salida: (e^-x)(x).

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a -X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente. Al final el resultado se multiplica otra vez por X.

Notas: Puede que numeros muy grandes la respuesta sea equivalente a infinito.
Se necesitan procesos mas complicados para pasar el input del usuario a un valor flotante en C#. Por ahora solo lo limito a enteros.

Al decir ''Leer muchos valores de n'' ayude al usuario a que el programa lea de 1 hasta n infinito, porque asi lo muestra la formula.
Esto se utiliza para aproximar el valor de nuestra sumatoria hasta (e^-x)(x).

Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

*/

//PREMISA//
/*
Escribe el programa que lea muchos valores de n y que calcule la expresión siguiente:
Y = 1 + X + 2X^2/2! + 3X^3/3! - 4X^4/4! + ... + (-1)^n nX^n/n!
*/

//DECLARACIONES GLOBALES//
int elevacion = 0; //El numero por el cual e se encuentra elevado.
int iteracion = 30; //Utilizado para limitar el ciclo.
float usoTemporal = 1; //Uso temporal.
float respuesta = 1; //Respuesta temporal.
float respuestaFinal = 1; //Respuesta final.
int contador = 0; //Para el ciclo.

void main()
{
 Entrada();
 Proceso(elevacion);
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

/*Funcion Entrada
Toma el input del usuario de el valor de X.
*/
void Entrada()
{
 Console.WriteLine("Por favor, introduzca X: ");
 elevacion = Input_A_Numero();
}

/*Funcion Proceso
Calcula nuestra formula con el valor introducido por el usuario.
*/
void Proceso(int x)
{
 for (contador = 1; contador<=iteracion; contador++)
 {
  usoTemporal = (usoTemporal*-x)/contador;
  respuesta = respuesta + usoTemporal;
 }
 respuestaFinal = respuesta*(x);
}

/*Funcion Salida
Imprime el resultado final.
*/
void Salida()
{
 Console.WriteLine(respuestaFinal);
}

main(); //Para iniciar el programa.

/*
QA: Luis Gerardo Leon Ortega
Entrada: Cualquier numero, puede ser flotante y negativo.
Salida: (e^-x)(x).

Nota 1: Funciona de forma correcta pero no deberia tener variables globales

Nota 2: Las variables no deben ser globales, lo dijo nuestro emperador Cambrane para
 re escribir una variable existen los apuntadores que explico en las primeras clases :p
*/
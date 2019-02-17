/*
Autor: AMAURY MORALES CERECEDO
Entrada: Cualquier numero, puede ser flotante y negativo.
Salida: (e^-x)(x).

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a -X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente. Al final el resultado se multiplica otra vez por X.

Notas: Para utilizar numeros fraccionarios, utilizar su equivalente flotante. Puede que numeros muy grandes la respuesta sea equivalente
a infinito.

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

#include <stdio.h>

//DECLARACIONES GLOBALES//
float elevacion = 0; //El numero por el cual e se encuentra elevado.
int iteracion = 30; //Utilizado para limitar el ciclo.
float usoTemporal = 1; //Uso temporal.
float respuesta = 1; //Respuesta temporal.
float respuestaFinal = 1; //Respuesta final.
int contador = 0; //Para el ciclo.

void Entrada(),Proceso(float x),Salida();

int main()
{
 Entrada();
 Proceso(elevacion);
 Salida();
}

void Entrada()
{
 printf("Por favor, introduzca x: ");
 scanf("%f", &elevacion);
}

void Proceso(float x)
{
 for (contador = 1; contador<=iteracion; contador++)
 {
  usoTemporal = (usoTemporal*-x)/contador;
  respuesta = respuesta + usoTemporal;
 }
 respuestaFinal = respuesta*(x);
}

void Salida()
{
 printf("%f\n", respuestaFinal);

 scanf("%f", &usoTemporal); //GetChar no me funciono aqui, asi que solo reescribo una variable.
}
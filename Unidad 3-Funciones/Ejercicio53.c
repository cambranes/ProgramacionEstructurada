/*
Autor: AMAURY MORALES CERECEDO
Entrada: Cualquier numero, puede ser flotante y negativo.
Salida: (-e^-x)(x).

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a -X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente. Al final el resultado se multiplica otra vez por X.

Notas: Para utilizar numeros fraccionarios, utilizar su equivalente flotante. Puede que numeros muy grandes la respuesta sea equivalente
a infinito.

Al decir ''Leer muchos valores de n'' ayude al usuario a que el programa lea de 1 hasta n infinito, porque asi lo muestra la formula.
Esto se utiliza para aproximar el valor de nuestra sumatoria hasta (-e^-x)(x).

*/

//PREMISA//
/*
Escribe el programa que lea muchos valores de n y que calcule la expresión siguiente:
Y = 1 + X + 2X^2/2! + 3X^3/3! - 4X^4/4! + ... + (-1)^n nX^n/n!
*/

#include <stdio.h>

void Entrada(float *x),Proceso(float x, float *res),Salida(float res);

int main()
{
 float elevacion = 0; //El numero por el cual e se encuentra elevado.
 float respuestaFinal = 1; //Respuesta final.
 Entrada(&elevacion);
 Proceso(elevacion, &respuestaFinal);
 Salida(respuestaFinal);
}

void Entrada(float *x)
{
 printf("Por favor, introduzca x: ");
 scanf("%f", x);
}

void Proceso(float x, float *res)
{
 int iteracion = 30; //Utilizado para limitar el ciclo.
 float usoTemporal = 1; //Uso temporal.
 float respuesta = 1; //Respuesta temporal.
 int contador = 0; //Para el ciclo.
 for (contador = 1; contador<=iteracion; contador++)
 {
  usoTemporal = (usoTemporal*x)/contador;
  respuesta = respuesta + usoTemporal;
 }
 *res = -((x)/respuesta);
}

void Salida(float res)
{
 printf("%f\n", res);
 int x = 0;
 scanf("%d", &x); //GetChar no me funciono aqui, asi que solo reescribo la variable que esta justo arriba.
}

/*
QA: Luis Gerardo Leon Ortega
Entrada: Cualquier numero, puede ser flotante y negativo.
Salida: (e^-x)(x).

Nota 1: Funciona de forma correcta pero no deberia tener variables globales

Nota 2: Las variables no deben ser globales, lo dijo nuestro emperador Cambrane para
 re escribir una variable existen los apuntadores que explico en las primeras clases :p
 
 _________________
Correcciones hechas
-Amaury
 
*/

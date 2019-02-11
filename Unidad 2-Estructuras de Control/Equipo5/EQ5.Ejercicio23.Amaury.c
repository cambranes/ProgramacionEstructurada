/*
Autor: AMAURY MORALES CERECEDO

Entrada: Cualquier numero, puede ser flotante y negativo.

Salida: e^x.

Procedimiento general: Utilizando X se hace una serie que toma el valor anterior y lo eleva a X, despues lo divide por la posicion.
Tomando en cuenta de que X! = (X-1)!*X , obviamente.

Notas: Para utilizar numeros fraccionarios, utilizar su equivalente flotante. Puede que numeros muy grandes la respuesta sea equivalente
a infinito.

*/

//PREMISA//
/*
Determinar lo siguiente:
e^x= 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
*/

#include <stdio.h>

int main()
{

 //DECLARACIONES//
 float elevacion, usoTemporal, respuesta;
 int iteracion, contador;

 elevacion = 0; //El numero por el cual e se encuentra elevado.
 iteracion = 30; //Utilizado para limitar el ciclo.
 usoTemporal = 1; //Uso temporal.
 respuesta = 1; //Respuesta.
 contador = 0; //Para el ciclo.

 //ENTRADAS//
 printf("Por favor, introduzca x: ");
 scanf("%f", &elevacion);
 ////////////

 //PROCEDIMIENTO//
 for (contador = 1; contador<=iteracion; contador++)
 {
  usoTemporal = (usoTemporal*elevacion)/contador;
  respuesta = respuesta + usoTemporal;
 }
 /////////////////

 //SALIDA//
 printf("Respuesta: %f\n", respuesta);
 /////////

 scanf("%f", &usoTemporal); //GetChar no me funciono aqui, asi que solo reescribo una variable.

 return 0; //Creo que esto se refiere al ''valor 0''.
}

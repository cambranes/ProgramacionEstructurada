/*
Autor: AMAURY MORALES CERECEDO

Entrada: El valor a invertir, numero de periodos, y la taza de interes.

Salida: El valor futuro.

Procedimiento general: Se utiliza la formula para calcular el valor a futuro con la funcion pow.

Notas: La tasa de interes se pasa automaticamente al 100%.
Ejemplo: Si queremos el 25% de interes, solo hace falta escribir 25.

En interes, si queremos calcular meses, se tendra que convertir los meses a años.
Si queremos 5 años con 3 meses, tenemos que hacer 3/12 para poder escribir en el programa ''5.25'' lo cual es equivalente.

Se pueden usar numeros negativos para calcular perdidas. Los fraccionarios se deben pasar a flotantes.

*/

//PREMISA//
/*

El  valor  futuro  de  cierta  cantidad  P  sometida  a  un  interés  i  durante  n períodos se calcula con la fórmula:
F = P ( 1 + i / 100 ) n
Escribe el programa que permita obtener el valor futuro de la inversión.
Para terminar se debe escribir un valor 0.

*/

#include <stdio.h>
#include <math.h>

int main()
{
 //DECLARACIONES//
 float valorInvertido; //Valor invertido
 float tasaInteres; //Tasa de interes.
 float numPeriodos; //Numero de periodos
 float valorFuturo; //Respuesta. Valor Futuro.

 //ENTRADAS//
 printf("Por favor, introduzca el monto a invertir: ");
 scanf("%f", &valorInvertido);
 printf("Por favor, introduzca el total de periodos: ");
 scanf("%f", &numPeriodos);
 printf("Por favor, introduzca el interes: ");
 scanf("%f", &tasaInteres);
 tasaInteres = tasaInteres/100;
 ////////////

 //PROCEDIMIENTO//
 valorFuturo = valorInvertido*(pow(1+tasaInteres, numPeriodos));
 /////////////////

 //SALIDA//
 printf("El valor futuro es: %f\n", valorFuturo);
 /////////

 scanf("%f", &tasaInteres); //GetChar no me funciono aqui, asi que solo reescribo una variable.

 return 0; //Creo que esto se refiere al ''valor 0''.
}

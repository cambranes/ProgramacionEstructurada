//14.Escribir el programa que lea una velocidad e imprima “Muy rápido” si es superior a 100, si no imprima “Detenido” si la velocidad es cero.
//Autor: Jorge Pinto

#include <stdio.h>
int main(){
    //Entradas: Un numero entero (velocidad)
  int velocidad;
printf("Ingresa una velocidad: " );
scanf("%d", &velocidad );
    //Proceso:
 if (velocidad >= 100) {
   printf("\n Muy rapido");
 } else if (velocidad == 0){
   printf("\n Detenido");
     //Salidas: la evaluación de los numeros en sus respectivos casos
 }
 return 0;
}
/*
QA: Hector Cosgalla
Entradas: Un numero entero (velocidad)
Salidas: la evaluación de los numeros en sus respectivos casos
Comentarios: No lee el rango de velocidades de 1 a 99
*/

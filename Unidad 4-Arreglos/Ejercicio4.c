/**
@author Luis Gerardo Leon Ortega
 * Se tiene un vector de cien elementos que representan calificaciones de cinco materias de 20
estudiantes. Del 1 al 5 son las calificaciones del primer estudiante; del 6 al 10, son las del
        segundo; y así sucesivamente. Se desea programa que lea estas calificaciones y que calcule el
        promedio de cada estudiante y que lo vaya guardando en un segundo vector que tendrá como
        elementos solamente los promedios de los 20 estudiantes.
 */
#include "stdio.h"
#define size 101

void entradas(int*);
void proceso(int*, int*);
void salidas(int*, int*);

 int main(){
     /* entradas */
     int people[size];
     int prom[20];
     entradas(people);
     /* proceso */
     proceso(people, prom);
     /* salidas */
     salidas(people, prom);
     return 0;
 }

 void entradas(int* people){
     for (int i = 1; i < size; ++i) {
         printf("Ingresa la calificacion %i", i);
         scanf(" %i", &people[i]);
     }
 }

 void proceso(int* people, int* prom){
     int compuerta = 0;
     int acumulador = 0;
     int contadorProm = 0;
     //Set prom
     for (int j = 1; j < size; ++j) {
         acumulador += people[j];
         compuerta = (j%5 == 0)? 1 : 0;
         if(compuerta){
             contadorProm++;
             prom[contadorProm] = acumulador / 5;
             acumulador = 0;
         }
     }
 }

 void salidas(int* people, int* prom){
     int contadorProm = 0;
     int compuerta = 0;
     for (int j = 1; j < size; ++j) {
         printf("| %i |", people[j]);
         compuerta = (j%5 == 0)? 1 : 0;
         if(compuerta){
             contadorProm++;
             printf(" PROM: %i\n", prom[contadorProm]);

         }
     }
 }
/*
QA
Realizo: Guillermo Canto

void entradas()
	Entradas: [-50, 50]
	Salidas: El programa corre, pero se debe validar que las calificaciones se encuentran en el rango de [0,100]

Funcion "proceso".
	Entradas: people[]- arreglo de 100 elementos con los valores del -50 al 50, prom[20] = 0
	Salidas: Realiza el proceso correctamente respecto a las entradas dadas.

Funcion "salidas".
	Entradas: people[], prom[]
	Salidas: Los promedios correctos con respecto a las entradas.

El unico detalle es que las entradas deberian ser validadas en el rango [0,100].

*/

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Se generan 5 calificaciones al azar del 1 al 100 para cada uno de los 20 alumnos
Salidas: El promedio por alumno de sus 5 calificaciones
Proceso: Se van contando de 5 en 5 las calificaciones de los alumnos, se les saca el promedio y se guarda en un vector llamado promedios
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int promedios[20];
    int calificaciones[100];
    int sumaCalificaciones=0;
    for (int i=0;i<20;i++){
        for (int j=0;j<5;j++){
            calificaciones[(i*5)+j] = rand()%101;
            cout<<"Calificacion "<<j+1<<" del alumno "<<i+1<<" = "<<calificaciones[(i*5)+j]<<"\n";
            sumaCalificaciones=sumaCalificaciones+calificaciones[(i*5)+j];
        }
        promedios[i]=sumaCalificaciones/5;
        sumaCalificaciones=0;
    }
    for (int i=0;i<20;i++){
        cout<<"Promedio del alumno "<<i+1<<" = "<<promedios[i]<<"\n";
    }
    return 0;
}

/*
QA:Jose Mendez Verdejo

Entradas: ninguna
Salidas:
Promedio del alumno 1 = 45
Promedio del alumno 2 = 39
Promedio del alumno 3 = 34
Promedio del alumno 4 = 74
Promedio del alumno 5 = 35
Promedio del alumno 6 = 67
Promedio del alumno 7 = 55
Promedio del alumno 8 = 53
Promedio del alumno 9 = 49
Promedio del alumno 10 = 34
Promedio del alumno 11 = 54
Promedio del alumno 12 = 79
Promedio del alumno 13 = 43
Promedio del alumno 14 = 60
Promedio del alumno 15 = 45
Promedio del alumno 16 = 38
Promedio del alumno 17 = 27
Promedio del alumno 18 = 59
Promedio del alumno 19 = 55
Promedio del alumno 20 = 41

Todas correctas

Comentarios: Solucion sencilla, sin el uso de funciones, pero el uso de un
vector de una dimension, se recomiendael uso de una matriz, pero de igual manera
funciona. Muy bien pensado.  :)

*/

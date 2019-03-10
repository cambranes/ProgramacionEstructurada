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

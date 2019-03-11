#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>

using namespace std;

void rellenarVector(int*,int,int);
void imprimirVector(int*,int,int);
float funcionMedia(int*,int,int);
void funcionDesviacionEstandar(int*,int,float,int);
void funcionVarianza(int*,int,float,int);

int main()
{
    srand(time(NULL));
    int n;
    cout<<"Ingresa la cantidad de numeros del vector"<<endl;
    cin>>n;
    const int tamanio=n;
    int vectorN[tamanio];
    rellenarVector(vectorN,tamanio,n);
    cout<<"Los numeros generados en el vector son"<<endl;
    imprimirVector(vectorN,tamanio,n);
    funcionMedia(vectorN,tamanio,n);
    float promedio=funcionMedia(vectorN,tamanio,n);
    cout<<"El promedio es "<<promedio<<endl;
    funcionDesviacionEstandar(vectorN,tamanio,promedio,n);
    funcionVarianza(vectorN,tamanio,promedio,n);

    return 0;
}

void rellenarVector(int* vectorN,int tamanio,int n){
    for (int i=0;i<n;i++){
        vectorN[i]=rand()%101;
    }
}

void imprimirVector(int* vectorN,int tamanio,int n){
    for (int i=0;i<n;i++){
        cout<<vectorN[i]<<endl;
    }
}

float funcionMedia(int* vectorN,int tamanio,int n){
    float sumaNumeros=0;
    for (int i=0;i<n;i++){
        sumaNumeros=sumaNumeros+vectorN[i];
    }
    return sumaNumeros/n;
}

void funcionDesviacionEstandar(int* vectorN,int tamanio,float promedio,int n){
    int diferenciaAPromedio,diferenciaAPromedioCuadrada;
    int sumaDeDiferenciasCuadradas=0;
    float desviacionEstandar;
    for (int i=0;i<n;i++){
        diferenciaAPromedio=promedio-vectorN[i];
        diferenciaAPromedioCuadrada=diferenciaAPromedio*diferenciaAPromedio;
        sumaDeDiferenciasCuadradas=sumaDeDiferenciasCuadradas+diferenciaAPromedioCuadrada;
    }
    desviacionEstandar=sqrt(sumaDeDiferenciasCuadradas/n);
    cout<<"La desviacion estandar es "<<desviacionEstandar<<endl;
}

void funcionVarianza(int* vectorN,int tamanio,float promedio,int n){
    int diferenciaAPromedio,diferenciaAPromedioCuadrada;
    int sumaDeDiferenciasCuadradas=0;
    float varianza;
    for (int i=0;i<n;i++){
        diferenciaAPromedio=promedio-vectorN[i];
        diferenciaAPromedioCuadrada=diferenciaAPromedio*diferenciaAPromedio;
        sumaDeDiferenciasCuadradas=sumaDeDiferenciasCuadradas+diferenciaAPromedioCuadrada;
    }
    cout<<"La varianza es "<<sumaDeDiferenciasCuadradas/n;
}
